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
};

class QuickSort : public AbstractSort
{
public:
    virtual void sort(int arr[], int size)
    {
        
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
    test.sort(arr, SIZE);
    cout << "Sorted array below.\n";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Number of comparions made sorting this array is:"
        << test.getNumOfComparisons() << endl;

    return 0;
}
