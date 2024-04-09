/*Design a class AbstractSort that can be used to analyze the number of comparisons performed by a sorting algorithm. The 
class should have a member function compare that is capable of comparing two array elements, and a means of keeping track of 
the number of comparisons performed. The class should be an abstract class with a pure virtual member function

void sort(int arr[ ], int size)
which, when overridden, will sort the array by calling the compare function to determine the relative order of pairs of 
numbers. Create a subclass of AbstractSort that uses a simple sorting algorithm to implement the sort function. The class 
should have a member function that can be called after the sorting is done to retrieve the number of comparisons performed.*/

#include <iostream>
using namespace std;

const int SIZE = 10;

class AbstractSort {
protected:
    int num, arr[SIZE];
public:
    AbstractSort()
    {
        num = 0;
        for (int i = 0; i < SIZE; i++)
            arr[i] = 0;
    }
    AbstractSort(int a[], int size)
    {
        num = 0;
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = a[i];
        }
    }
    bool compare(int& x, int& y)
    {
        if (x < y)
        {
            num++;
            return true;
        }
        else
            return false;
    }
    virtual void sort(int arr[], int size) = 0;
};

class SimpleAbstractSort : public AbstractSort
{
public:   
    SimpleAbstractSort() : AbstractSort()
    {

    }
    SimpleAbstractSort(int a[], int size) : AbstractSort(a, size)
    {

    }
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
                if (compare(arr[index],minValue))
                {
                    minValue = arr[index];
                    minIndex = index;
                }
            }
            swap(arr[minIndex], arr[start]);
        }
    }
    void swap(int& x, int& y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int getNumOfComparisons()
    {
        return num;
    }
};

int main()
{
    int arr[SIZE] = { 5, 0, 37, 125, 300, 7, 10, 12, 19, 200 };

    SimpleAbstractSort test(arr, SIZE);
    test.sort(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Number of comparions made sorting this array is:" 
        << test.getNumOfComparisons() << endl;

    return 0;
}
