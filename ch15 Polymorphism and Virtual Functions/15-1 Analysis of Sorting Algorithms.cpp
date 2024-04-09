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
    bool compare(int& x, int& y)
    {
        if (x < y)
        {
            num++;
            swap(x, y);
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
    virtual int getNumOfComparisons()
    {
        return num;
    }
};

int main()
{
    

    return 0;
}
