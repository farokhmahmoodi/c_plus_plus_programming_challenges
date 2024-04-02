/*Write a recursive function that accepts a string as its argument and prints the string in reverse order. Demonstrate the 
function in a driver program.*/

#include <iostream>
#include <string>
using namespace std;

void stringReverser(string);

int main()
{
    string n;

    cout << "Enter string to be printed in reserve order:";
    getline(cin, n);
    stringReverser(n);

    return 0;
}

void stringReverser(string n)
{
    if (n.length() > 0)
    {
        cout << n[n.length() - 1];
        stringReverser(n.substr(0, n.length() - 1));
    }
}
