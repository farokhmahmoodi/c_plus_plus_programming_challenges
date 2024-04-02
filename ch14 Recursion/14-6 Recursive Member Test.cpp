/*Write a recursive Boolean function named isMember. The function should accept three parameters: an array of integers, an 
integer indicating the number of elements in the array, and an integer value to be searched for. The function should return 
true if the value is found in the array or false if the value is not found. Demonstrate the use of the function in a program 
that asks the user to enter an array of numbers and a value to be searched for.*/

#include <iostream>
using namespace std;

bool isMember(const int[], int, int);

const int SIZE = 20;

int main()
{
    int tests[SIZE] = { 101, 142, 147, 189, 199, 207, 222,
                        234, 289, 296, 310, 319, 388, 394,
                        417, 429, 447, 521, 536, 600 };
    int  empID; // What to search for

    while (cout << "Enter the Employee ID you wish to search for: "
        && !(cin >> empID)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for employee ID." << endl;
    }
    if (isMember(tests, SIZE, empID))
        cout << "That number exists in the array.\n";
    else
        cout << "The number does not exist in the array.\n";

    return 0;
}

bool isMember(const int array[], int size, int value)
{
    if (size > 0)
    {
        if (array[size - 1] == value)
            return true;
        else
            isMember(array, size - 1, value);
    }
    else
        return false;
}
