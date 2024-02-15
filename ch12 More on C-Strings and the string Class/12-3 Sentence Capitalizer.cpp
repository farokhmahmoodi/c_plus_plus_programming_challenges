/*Write a function that accepts a C-string as an argument and capitalizes the first character of each sentence in the 
string. For instance, if the string argument is “hello. my name is Joe.  what is your name?” the function should manipulate 
the string so it contains “Hello. My name is Joe. What is your name?” Demonstrate the function in a program that asks the 
user to input a string and then passes it to the function. The modified string should be displayed on the screen.*/

#include <iostream>
using namespace std;

void sentenceCapitalizer(char*, char*);

int main()
{
    const int LENGTH = 100;
    char* a = nullptr, * b = nullptr;
    a = new char[LENGTH], b = new char[LENGTH];

    cout << "Enter a string and the program will capitalize "
        << "the first character of each sentence in the string:";
    cin.getline(a, LENGTH);
    sentenceCapitalizer(a, b);

    return 0;
}

void sentenceCapitalizer(char* a, char* b)
{
    int index = 0;
    
    strcpy(b, a);
    if (a[index] != ' ')
        b[index] = toupper(a[index]);

    while (a[index] != '\0')
    {
        if (ispunct(a[index]))
        {
            if (a[index + 1] != ' ')
                b[index + 1] = toupper(a[index + 1]);
        }
        index++;
    }
    cout << "The modified string:" << b << endl;
}
