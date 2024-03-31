/*Create a template version of the quickSort algorithm that will work with any data type that overloads the comparison
operators. Demonstrate the template with a driver function.*/

#include <iostream>
#include <algorithm> //needed for swap function
#include <string>
#include <sstream>
using namespace std;

// Function prototypes
void quickSort(string[], int, int);
int partition(string[], int, int);

int main()
{
    // Array to be sorted
    const int SIZE = 10;
    string array[SIZE] = { "17", "53", "9", "2", "30", "1", "82", "64", "26", "5" };

    // Echo the array to be sorted
    for (int k = 0; k < SIZE; k++)
        cout << array[k] << " ";
    cout << endl;

    // Sort the array using Quicksort
    quickSort(array, 0, SIZE - 1);

    // Print the sorted array
    for (int k = 0; k < SIZE; k++)
        cout << array[k] << " ";
    cout << endl;

    return 0;
}

//************************************************
// quickSort uses the QuickSort algorithm to     *
// sort arr from arr[start] through arr[end].    *
//************************************************
void quickSort(string arr[], int start, int end)
{
    if (start < end)
    {
        // Partition the array and get the pivot point
        int p = partition(arr, start, end);

        // Sort the portion before the pivot point
        quickSort(arr, start, p - 1);

        // Sort the portion after the pivot point
        quickSort(arr, p + 1, end);
    }
}

//***********************************************************
// partition rearranges the entries in the array arr from   *
// start to end so all values greater than or equal to the  *
// pivot are on the right of the pivot and all values less  *
// than are on the left of the pivot.                       *
//***********************************************************
int partition(string arr[], int start, int end)
{
    // The pivot element is taken to be the element at
    // the start of the subrange to be partitioned
    double pivotValue;
    ostringstream ostr;
    ostr << arr[start];
    istringstream istr(ostr.str());
    istr >> pivotValue;
    int pivotPosition = start;

    // Rearrange the rest of the array elements to 
    // partition the subrange from start to end
    for (int pos = start + 1; pos <= end; pos++)
    {
        double currentValue;
        ostringstream ostr2;
        ostr2 << arr[pos];
        istringstream istr(ostr2.str());
        istr >> currentValue;
        if (currentValue < pivotValue)
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