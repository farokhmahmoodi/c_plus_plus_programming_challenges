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
    ostringstream ostr;

    for (int i = 0; i < istr.str().length(); i++)
    {
        if (isalnum(istr.str()[i]))
        {
            if (isspace(istr.str()[i + 1]))
                ostr << istr.str()[i] << " ";
            else
                ostr << istr.str()[i];
        }
    }
    ostr << " ";
    for (int i = 0; i < istr.str().length(); i++)
    {
        if (istr.str()[i] == '+' || istr.str()[i] == '-'
            || istr.str()[i] == '*' || istr.str()[i] == '/')
        {
            if (isspace(istr.str()[i + 1]))
                ostr << istr.str()[i] << " ";
            else
                ostr << istr.str()[i];
        }
    }
    
    return ostr.str();
}
