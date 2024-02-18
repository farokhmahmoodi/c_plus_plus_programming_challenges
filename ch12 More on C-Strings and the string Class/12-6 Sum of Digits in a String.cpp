/*Write a program that asks the user to enter a series of single-digit numbers with nothing separating them.
Read the input as a C-string or a string object. The program should display the sum of all the single-digit numbers in
the string. For example, if the user enters 2514, the program should display 12, which is the sum of 2, 5, 1, and 4.
The program should also display the highest and lowest digits in the string.*/

#include <iostream>
using namespace std;

int main()
{
    const int LENGTH = 101;
    char a[LENGTH];
    int sum = 0, index = 0, high, low;

    cout << "Enter a series of single-digit numbers no more than "
        << LENGTH - 1 << " characters with nothing separating the digits:";
    cin.getline(a, LENGTH);
    high = low = static_cast<int>(a[index] - 48);
    while (a[index] != '\0')
    {
        if (isdigit(a[index]))
        {
            if (static_cast<int>(a[index] - 48) > high)
            {
                high = static_cast<int>(a[index] - 48);
            }
            else if (static_cast<int>(a[index] - 48) < low)
            {
                low = static_cast<int>(a[index] - 48);
            }
            sum += static_cast<int>(a[index] - 48);
        }
        index++;
    }
    cout << "The sum of the digits in the string is " << sum << endl;
    cout << "The highest digit in the string is " << high << endl;
    cout << "The lowest digit in the string is " << low << endl;

    return 0;
}