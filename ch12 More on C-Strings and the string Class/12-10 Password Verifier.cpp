/*Imagine you are developing a software package that requires users to enter their own passwords. 
Your software requires that user’s passwords meet the following criteria:

The password should be at least six characters long.

The password should contain at least one uppercase and at least one lowercase letter.

The password should have at least one digit.

Write a program that asks for a password and then verifies that it meets the stated criteria. 
If it doesn’t, the program should display a message telling the user why.*/

#include <iostream>
using namespace std;

void passwordVerifier(const char*);

int main()
{
    const int LENGTH = 101;
    char* a = new char[LENGTH];

    cout << "Enter a string no greater than "
        << LENGTH - 1 << " characters and the program "
        << "will determine if it meets the following password requirements." << endl;
    cout << "1.)The password should be at least six characters long." << endl;
    cout << "2.)The password should contain at least one uppercase and at least one lowercase letter." << endl;
    cout << "3.)The password should have at least one digit." << endl;
    cin.getline(a, LENGTH);
    passwordVerifier(a);

    return 0;
}

void passwordVerifier(const char* a)
{
    int upCount, lowCount, digitCount;
    upCount = lowCount = digitCount = 0;

    if (strlen(a) < 6)
        cout << "Password is not six characters long." << endl;
    for (int i = 0; i < strlen(a); i++)
    {
        if (isupper(a[i]))
            upCount++;
        else if (islower(a[i]))
            lowCount++;
        else if (isdigit(a[i]))
            digitCount++;
    }
    if (upCount == 0)
        cout << "Password does not have at least one uppercase letter." << endl;
    if (lowCount == 0)
        cout << "Password does not have at least one lowercase letter." << endl;
    if(digitCount == 0)
        cout << "Password does not have at least one digit." << endl;
    if (upCount != 0 && lowCount != 0 && digitCount != 0 && strlen(a) >= 6)
        cout << "Password meets password requirements." << endl;
}