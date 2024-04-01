/*Write a function that accepts two arguments, an array of integers, and a number indicating the number of elements in the
array. The function should recursively calculate the sum of all the numbers in the array. Demonstrate the use of the function
in a program that asks the user to enter an array of numbers and prints its sum.*/

#include <iostream>
using namespace std;

int recursiveArraySum(int *, int);

int main()
{
    int* a = nullptr;
    int size;

    do
    {
        while (cout << "Enter an integer for size of array (greater than 0):"
            && !(cin >> size)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for size." << endl;
        }
        if (size <= 0)
            cout << "Size must be greater than 0.\n";
    } while (size <= 0);
    a = new int[size];
    cout << "Enter array of numbers below.\n";
    for (int i = 0; i < size; i++)
    {
        while (cout << "Enter number " << i + 1 << ":"
            && !(cin >> a[i])) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for number " << i + 1 << "." << endl;
        }
    }
    cout << "The sum of all integers in the array is " << recursiveArraySum(a, size) << endl;

    return 0;
}

int recursiveArraySum(int* arr, int size)
{

    return 1;
}
