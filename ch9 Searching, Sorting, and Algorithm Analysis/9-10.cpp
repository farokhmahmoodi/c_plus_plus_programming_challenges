#include <iostream>
using namespace std;

const int SIZE = 8;

void bubbleSort(int[], int);
void selectionSort(int[], int);
void swap(int&, int&);

int main()
{
    int a[SIZE] = { 23,89,58,85,45,22,49,38 };
    int b[SIZE] = { 23,89,58,85,45,22,49,38 };

    cout << "Here are contents of first array:\n";
    for (auto element : a)
        cout << element << " ";
    cout << endl << endl;
    bubbleSort(a, SIZE);
    cout << endl << "Here are contents of second array:\n";
    for (auto element : b)
        cout << element << " ";
    cout << endl << endl;
    selectionSort(b, SIZE);

    return 0;
}

void bubbleSort(int a[], int size)
{
    bool madeAswap = true;
    for (int maxElement = size - 1,passcount = 0; maxElement > 0 && madeAswap; maxElement--)
    {
        madeAswap = false;
        for (int index = 0; index < maxElement; index++)
        {
            if (a[index] > a[index + 1])
            {
                swap(a[index], a[index + 1]);
                madeAswap = true;
            }
        }
        passcount++;
        cout << "Here are contents of first array after pass " << passcount << " of bubble sort:\n";
        for (int i = 0; i < size; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

void selectionSort(int b[], int size)
{
    int minIndex;
    double minValue;

    for (int start = 0, passcount = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = b[start];
        for (int index = start + 1; index < size; index++)
        {
            if (b[index] < minValue)
            {
                minValue = b[index];
                minIndex = index;
            }
        }
        swap(b[minIndex], b[start]);
        passcount++;
        cout << "Here are contents of second array after pass " << passcount << " of selection sort:\n";
        for (int i = 0; i < size; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}