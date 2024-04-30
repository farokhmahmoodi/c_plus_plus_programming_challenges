/*The first seven rows of Pascal’s triangle are

1

1 1

1 2  1

1 3  3  1

1 4  6  4  1

1 5 10 10  5 1

1 6 15 20 15 6 1

The first row shown has index 0, and the last row has index 6. Row 0 of the triangle 
consists of the single number 1. For any positive integer k, the row with index k has k + 1
numbers and starts and ends with a 1. For each position p other than the first and the last, 
the element at p in row k is the sum of the two elements of row (k − 1) at positions p and p − 1.

Write a function

vector<int> pascalTriangleNextRow(vector<int> row)

that takes a row of Pascal’s triangle in the form of a vector and returns the next row in the triangle. 
Test your function by writing a main function that asks the user to enter an integer N and prints the 
first N rows of Pascal’s triangle by repeatedly calling the above function.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> pascalTriangleNextRow(vector<int>);

int main()
{
    int n;
    vector<int> row;

    do
    {
        while (cout << "Enter an integer N greater than or equal to 1:" &&
            !(cin >> n)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer n." << endl;
        }
        if (n < 1)
            cout << "Invalid input. Integer must be greater than or equal to 1.\n";
    } while (n < 1);
    for (int i = 0; i < n; i++)
    {
        row = pascalTriangleNextRow(row);
    }

    return 0;
}

vector<int> pascalTriangleNextRow(vector<int> row)
{
    
    return row;
}
