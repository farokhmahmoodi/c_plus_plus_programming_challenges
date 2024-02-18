/*Write a program with three functions: upper, lower, and flip. The upper function should accept a C-string 
as an argument. It should step through all the characters in the string, converting each to uppercase. 
The lower function, too, should accept a pointer to a C-string as an argument. It should step through all 
the characters in the string, converting each to lowercase. Like upper and lower, flip should also accept a 
C-string. As it steps through the string, it should test each character to determine whether it is upper- or 
lowercase. If a character is uppercase, it should be converted to lowercase. If a character is lowercase, it 
should be converted to uppercase.

Test the functions by asking for a string in function main, then passing it to them in the following order: 
flip, lower, and upper.*/

#include <iostream>
using namespace std;

void upper(char*);
void lower(char*);
void flip(char*);

int main()
{
    const int LENGTH = 101;
    char* a = new char[LENGTH];

    cout << "Enter a string no greater than "
        << LENGTH - 1 << " characters:";
    cin.getline(a, LENGTH);
    cout << "String flipped:";
    flip(a);
    for (int i = 0; i < strlen(a); i++)
        cout << a[i];
    cout << endl;
    cout << "String after passed to lower function:";
    lower(a);
    for (int i = 0; i < strlen(a); i++)
        cout << a[i];
    cout << endl;
    cout << "String after passed to upper function:";
    upper(a);
    for (int i = 0; i < strlen(a); i++)
        cout << a[i];
    cout << endl;

    return 0;
}

void upper(char* a)
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (islower(a[i]))
            a[i] = toupper(a[i]);
    }
}

void lower(char* a)
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (isupper(a[i]))
            a[i] = tolower(a[i]);
    }
}

void flip(char* a)
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (isupper(a[i]))
            a[i] = tolower(a[i]);
        else if (islower(a[i]))
            a[i] = toupper(a[i]);
    }
}