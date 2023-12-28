/*Write a program that uses two identical arrays of at least 20 integers stored in a random order. It should call a function that uses the bubble sort algorithm modified to sort one of the 
arrays in descending order. The function should count the number of exchanges it makes. The program should then call a function that uses the selection sort algorithm modified to sort the other array in descending order. 
It should also count the number of exchanges it makes. Display the sorted data along with these two clearly labeled counts on the screen.*/

#include <iostream>
using namespace std;

const int SIZE = 20;

void bubbleSort(int[], int, int&);
void selectionSort(int[], int, int&);
void swap(int&, int&);

int main()
{
    int a[SIZE] = {530, 456, 492, 885, 812, 236, 572, 754,
        182, 758, 208, 433, 3, 727, 283, 951, 818, 547, 614, 513},
        b[SIZE] = {530, 456, 492, 885, 812, 236, 572, 754,
        182, 758, 208, 433, 3, 727, 283, 951, 818, 547, 614, 513},
        bcount, scount;
    bcount = scount = 0;

    bubbleSort(a, SIZE, bcount);
    selectionSort(b, SIZE, scount);
    cout << "The sorted values from bubble sort:\n";
    for (int element : a)
        cout << element << endl;
    cout << "Number of exchanges made with bubble sort for this array is " << bcount << "." << endl << endl;
    cout << "The sorted values from selection sort:\n";
    for (int element : a)
        cout << element << endl;
    cout << "Number of exchanges made with selection sort for this array is " << scount << "." << endl ;

    return 0;
}

void bubbleSort(int a[], int size, int &bcount)
{
    bool madeAswap = true;
    for (int maxElement = size - 1; maxElement > 0 && madeAswap; maxElement--)
    {
        madeAswap = false;
        for (int index = 0; index < maxElement; index++)
        {
            if (a[index] < a[index + 1])
            {
                swap(a[index], a[index + 1]);
                madeAswap = true;
                bcount++;
            }
        }
    }

}

void selectionSort(int a[], int size, int& scount)
{
    int minIndex;
    double maxValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        maxValue = a[start];
        for (int index = start + 1; index < size; index++)
        {
            if (a[index] > maxValue)
            {
                maxValue = a[index];
                minIndex = index;
            }
        }
        swap(a[minIndex], a[start]);
        scount++;
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
