/*Write an iterative version (using a loop instead of recursion) of the factorial function shown in this chapter. 
Demonstrate the use of the function in a program that prints the factorial of a number entered by the user.*/

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int number;

    cout << "Enter an integer value and I will display\n";
    cout << "its factorial: ";
    cin >> number;
    cout << "The factorial of " << number << " is ";
    cout << factorial(number) << endl;
    return 0;
}

int factorial(int num)
{
    if (num == 0)
        return 1;
    if (num < 0)
        return 0;
    int factorial = 1;
    for (int i = num; i > 0; i--)
    {
        factorial *= i;
    }
    return factorial;
}
