/*Create a template version of the quickSort algorithm that will work with any data type that overloads the comparison 
operators. Demonstrate the template with a driver function.*/

#include <iostream>
using namespace std;

// Function prototypes
void quickSort(int[], int, int);
int partition(int[], int, int);

int main()
{
    
    return 0;
}

//************************************************
// quickSort uses the QuickSort algorithm to     *
// sort arr from arr[start] through arr[end].    *
//************************************************
void quickSort(int arr[], int start, int end)
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
        if (arr[pos] < pivotValue)
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
