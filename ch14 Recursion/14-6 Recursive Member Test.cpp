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
                        234, -52, 296, 310, 319, 10454, 394,
                        417, 429, 447, -256, 536, 600 };
    int  num; // What to search for

    while (cout << "Enter an integer you wish to search for: "
        && !(cin >> num)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer." << endl;
    }
    if (isMember(tests, SIZE, num))
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
