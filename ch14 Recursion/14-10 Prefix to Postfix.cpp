/*Write a program that reads prefix expressions and converts them to postfix. Each prefix expression should be entered on a 
separate line. The program should keep reading prefix expressions and converting them to postfix until a blank line is 
entered.*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string prefixToPostfix(string);

int main()
{
    string input;

    cout << "Enter prefix expressions to convert to postfix.\n"
        << "Press enter after each expression,\n"
        << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a prefix expression to convert to postfix: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        cout << prefixToPostfix(input) << endl;
        // Get next line of input
        cout << "Enter a prefix expression to convert to postfix: ";
        getline(cin, input);
    }

    return 0;
}

string prefixToPostfix(string input)
{
    istringstream istr(input);
    char ch = istr.peek();
    int index = 0;

    while (isspace(ch))
    {
        ch = istr.get();
        index++;
        ch = istr.peek();
    }
    if (isalnum(ch)) //base case
        return input;
    else
    {
        while (ch == '+' || ch == '-' || ch == '*' || ch == '/' || isspace(ch) || !isalnum(ch))
        {
            ch = istr.get();
            index++;
            ch = istr.peek();
        }
        return istr.str()[index] + prefixToPostfix(istr.str().substr(index,istr.str().length() - index));
    }
}
