/*Imitate the technique of Section 19.7 and use a stack to remove recursion from the binary search algorithm.*/

#include <stack>
#include <iostream>
#include <fstream>
#include <algorithm>  // Needed for swap
using namespace std;

const int MAX = 100;

// Function prototypes
void qSort(int a[], int size);
void outputArray(const int a[], int size);
int partition(int a[], int, int);
int binarySearch(const int array[], int first, int last, int value);

// Range is used to indicate a segment
// of an array that is still to be sorted
class Range
{
    // Make qSort a friend
    friend void qSort(int a[], int);
    friend int binarySearch(const int array[], int first, int last, int value);
    int start;
    int end;
public:
    Range(int s, int e)
    {
        start = s;
        end = e;
    }
};

int main()
{
    ifstream inputFile;
    string filename = "sort.dat";
    int array[MAX];
    int size, choice, value;
    inputFile.open(filename.data());
    if (!inputFile)
    {
        cout << "The file  " << filename << " cannot be "
            << "opened .";
        exit(1);
    }

    // Read the file and count the number of items in the
    // file. Take care not to overrun the array
    size = 0;
    while (inputFile >> array[size])
    {
        size++;
        if (size == MAX)
            break;
    }
    // Echo the inputted array
    cout << "The original array is :" << endl;
    outputArray(array, size);
    // Perform the sort and output the result
    qSort(array, size);
    stack<Range> bStack;
    do
    {
        cout << "The sorted array is: " << endl;
        outputArray(array, size);
        while (cout << "Enter an integer to search for in the array:" &&
            !(cin >> value)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer." << endl;
        }
        if (binarySearch(array, 0, size - 1, value) != -1)
            cout << "The number " << value << " was found at index "
            << binarySearch(array, 0, size - 1, value) << " in the array.\n";
        else
            cout << "The number " << value << " was not found in the array.\n";
        do
        {
            while (cout << "Would you like to enter another integer to find?"
                << "(1 for yes/2 for no):" &&
                !(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for choice." << endl;
            }
            if (choice != 1 && choice != 2)
                cout << "Invalid input for choice. Must be 1 or 2.\n";
        } while (choice != 1 && choice != 2);
    } while (choice != 2);
    cout << bStack.empty() << endl;

    return 0;
}

//binary search algorithm
int binarySearch(const int array[], int first, int last, int value)
{
    stack<Range> bStack;
    int middle;         // mid point of search
    bStack.push(Range(first, last));
    while (!bStack.empty())
    {
        Range currentRange = bStack.top();
        bStack.pop();
        first = currentRange.start;
        last = currentRange.end;
        middle = (first + last) / 2;
        if (first > last)   // base case
            return -1;
        if (array[middle] == value)
            return middle;
        if (array[middle] < value)
            bStack.push(Range(middle + 1, last));
        else
            bStack.push(Range(first, middle - 1));
    }
}

//********************************************
// qSort performs a nonrecursive quicksort   *
// on the array a[ ] of the given size       *
//********************************************
void qSort(int arr[], int size)
{
    // qStack holds segments of the array that have not
    // yet been sorted
    stack<Range> qStack;
    int pivot, start, end;

    qStack.push(Range(0, size - 1));
    // As long as there is a range waiting to be sorted,
    // take it off the stack, partition it, and then
    // put the resulting two smaller ranges onto the stack
    while (!qStack.empty())
    {
        Range currentRange = qStack.top();
        qStack.pop();

        // Get the endpoints of the current Range
        // and partition it
        start = currentRange.start;
        end = currentRange.end;
        if (start < end)
        {
            pivot = partition(arr, start, end);
            // Store the resulting smaller ranges for later
            // processing
            qStack.push(Range(start, pivot - 1));
            qStack.push(Range(pivot + 1, end));
        }
    }
}

//*****************************************************
// partition rearranges the entries in the array arr  *
// from start to end so all values greater than or    *
// equal to the pivot are on the right of the pivot   *
// and all values less than are on the left of the    *
// pivot.                                             *
//*****************************************************
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

//*************************************
// Output an array's elements.        *
//*************************************
void outputArray(const int arr[], int size)
{
    for (int k = 0; k < size; k++)
        cout << arr[k] << "  ";
    cout << endl;
}
