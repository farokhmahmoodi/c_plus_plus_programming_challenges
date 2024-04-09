/*Create a subclass of the AbstractSort class of Programming Challenge 1 that uses the Quicksort algorithm to implement the 
sort function.*/

#include <iostream>
#include <algorithm>
using namespace std;

const int SIZE = 10;

class AbstractSort {
protected:
    int num;
public:
    AbstractSort()
    {
        num = 0;
    }
    bool compare(int& x, int& y)
    {
        num++;
        if (x < y)
        {
            return true;
        }
        else
            return false;
    }
    int getNumOfComparisons()
    {
        return num;
    }
    virtual void sort(int arr[], int size) = 0;
    virtual void sort(int arr[], int start, int end) = 0;
};

class QuickSort : public AbstractSort {
public:
    virtual void sort(int arr[], int size)
    {

    }
    virtual void sort(int arr[], int start, int end)
    {
        if (compare(start, end))
        {
            // Partition the array and get the pivot point
            int p = partition(arr, start, end);

            // Sort the portion before the pivot point
            sort(arr, start, p - 1);

            // Sort the portion after the pivot point
            sort(arr, p + 1, end);
        }
    }
    int partition(int arr[], int start, int end)
    {
        // The pivot element is taken to be the element at
        // the start of the subrange to be partitioned
        int pivotValue = arr[start];
        int pivotPosition = start;

        // Rearrange the rest of the array elements to 
        // partition the subrange from start to end
        for (int pos = start + 1; pos <= end; pos++)
        {
            if (compare(arr[pos],pivotValue))
            {
                // arr[scan] is the "current" item.
                // Swap the current item with the item to the
                // right of the pivot element
                swap(arr[pivotPosition + 1], arr[pos]);
                // Swap the current item with the pivot element
                swap(arr[pivotPosition], arr[pivotPosition + 1]);
                // Adjust the pivot position so it stays with the
                // pivot element
                pivotPosition++;
            }
        }
        return pivotPosition;
    }
};

int main()
{
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        while (cout << "Enter number " << i + 1 << ":" &&
            !(cin >> arr[i])) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for number." << endl;
        }
    }
    QuickSort test;
    test.sort(arr, 0, SIZE - 1);
    cout << "Sorted array below.\n";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Number of comparions made using quick sort to sort this array is:"
        << test.getNumOfComparisons() << endl;

    return 0;
}
