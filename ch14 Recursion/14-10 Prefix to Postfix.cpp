/*Write a program that reads prefix expressions and converts them to postfix. Each prefix expression should be entered on a 
separate line. The program should keep reading prefix expressions and converting them to postfix until a blank line is 
entered.*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void prefixToPostFixDigits(string, int);
void prefixToPostFixOperators(string, int);

int main()
{
    string input;

    cout << "Enter prefix expressions to convert to postfix.\n"
        << "Press enter after each expression,\n"
        << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a prefic expression to convert to postfix: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        prefixToPostFixDigits(input, 0);
        prefixToPostFixOperators(input, 0);
        // Get next line of input
        cout << "Enter a prefix expression to convert to postfix: ";
        getline(cin, input);
    }

    return 0;
}

void prefixToPostFixDigits(string in, int index)
{
    if (isalnum(tolower(in[index])) || isspace(in[index]))
        cout << in[index];
    if (index < in.length())
        prefixToPostFixDigits(in, ++index);
}

void prefixToPostFixOperators(string in, int index)
{
    if (ispunct(in[index]))
        cout << " " << in[index];
    if (index < in.length())
        prefixToPostFixOperators(in, ++index);
    else
        cout << endl;
}
