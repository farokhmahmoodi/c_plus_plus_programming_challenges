/*Design a class AbstractSort that can be used to analyze the number of comparisons performed by a sorting algorithm. The
class should have a member function compare that is capable of comparing two array elements, and a means of keeping track of
the number of comparisons performed. The class should be an abstract class with a pure virtual member function

void sort(int arr[ ], int size)
which, when overridden, will sort the array by calling the compare function to determine the relative order of pairs of
numbers. Create a subclass of AbstractSort that uses a simple sorting algorithm to implement the sort function. The class
should have a member function that can be called after the sorting is done to retrieve the number of comparisons performed.*/

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
};

class SelectionSort : public AbstractSort
{
public:
    virtual void sort(int arr[], int size)
    {
        int minIndex;
        int minValue;

        for (int start = 0; start < (size - 1); start++)
        {
            minIndex = start;
            minValue = arr[start];
            for (int index = start + 1; index < size; index++)
            {
                if (compare(arr[index], minValue))
                {
                    minValue = arr[index];
                    minIndex = index;
                }
            }
            swap(arr[minIndex], arr[start]);
        }
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
    SelectionSort test;
    test.sort(arr, SIZE);
    cout << "Sorted array below.\n";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Number of comparions made using selection sort to sort this array is:"
        << test.getNumOfComparisons() << endl;

    return 0;
}
