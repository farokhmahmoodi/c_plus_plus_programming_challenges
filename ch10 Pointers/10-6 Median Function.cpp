/*In statistics the median of a set of values is the value that lies in the middle when the values are arranged in sorted order. 
If the set has an even number of values, then the median is taken to be the average of the two middle values. 
Write a function that determines the median of a sorted array. The function should take an array of numbers and an integer 
indicating the size of the array and return the median of the values in the array. You may assume the array is already sorted. 
Use pointer notation whenever possible.*/

#include <iostream>
#include <iomanip>
using namespace std;

void getData(int*, int);
void selectionSort(int*, int);
void swap(int&, int&);
void displayArray(const int*, int);
double findMedian(const int*, int);

int main()
{
    int size;
    int* a = nullptr;

    do
    {
        cout << "What size array would like to find the median of?";
        cin >> size;
        if (size <= 0)
            cout << "Error. Size must be greater than 0." << endl;
    } while (size <= 0);
    a = new int[size];
    getData(a, size);
    selectionSort(a, size);
    cout << "Array sorted in ascending order below: " << endl;
    displayArray(a, size);
    cout << "The median of this array is " << fixed << showpoint << setprecision(1) << findMedian(a, size) << endl;

    return 0;
}

void getData(int* a, int size)
{
    cout << "Enter values for array below." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value " << (i + 1) << ": ";
        cin >> *(a + i);
    }
}

void selectionSort(int *a, int size)
{
    int minIndex;
    int minValue;
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = *(a+start);
        for (int index = start + 1; index < size; index++)
        {
            if (*(a+index) < minValue)
            {
                minValue = *(a+index);
                minIndex = index;
            }
        }
        swap(*(a+minIndex), *(a+start));
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void displayArray(const int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(a+i) << " ";
    }
    cout << endl;
}

double findMedian(const int *a, int size)
{
    int middleIndex = (size - 1) / 2; 
    double median;
    if (size % 2 == 0)
        median = static_cast<double>(*(a+middleIndex) + *(a+middleIndex + 1)) / 2;
    else
        median = static_cast<double>(*(a+middleIndex));
    return median;
}
