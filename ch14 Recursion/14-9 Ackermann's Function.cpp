/*Ackermann’s function is a recursive mathematical algorithm that can be used to test how well a computer performs recursion. 
Write a function A(m, n) that solves Ackermann’s function. Use the following logic in your function:

If m = 0 then  return n + 1
If n = 0 then  return A(m−1, 1)
Otherwise,     return A(m–1, A(m, n–1))

Test your function in a driver program that displays the following values:

A(0, 0) A(0, 1) A(1, 1) A(1, 2) A(1, 3) A(2, 2) A(3, 2)*/

#include <iostream>
using namespace std;

int A(int, int);

int main()
{
    int m, n, choice;

    cout << "A(0,0):" << A(0,0) << endl;
    cout << "A(0,1):" << A(0,1) << endl;
    cout << "A(1,1):" << A(1,1) << endl;
    cout << "A(1,2):" << A(1,2) << endl;
    cout << "A(1,3):" << A(1,3) << endl;
    cout << "A(2,2):" << A(2,2) << endl;
    cout << "A(3,2):" << A(3,2) << endl;
    do
    {
        while (cout << "Enter two integers to be calculated by Ackermann's function:"
            && !(cin >> m >> n)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integers." << endl;
        }
        cout << "Integers " << m << " and " << n
            << " Ackermann value is " << A(m, n) << endl;
        do
        {
            while (cout << "Would you like to enter another two integers? (1 for yes/2 for no):"
                && !(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for choice." << endl;
            }
            if (tolower(choice) != 1 && tolower(choice) != 2)
                cout << "Choice must be either 1 or 2." << endl;
        } while (tolower(choice) != 1 && tolower(choice) != 2);
    } while (tolower(choice) != 2);

    return 0;
}

int A(int m, int n)
{
    if (m == 0)
        return n + 1;
    if (n == 0)
        return A(m - 1, 1);
    else
        return A(m - 1, A(m, n - 1));
}
