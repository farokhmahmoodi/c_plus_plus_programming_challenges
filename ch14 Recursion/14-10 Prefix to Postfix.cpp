/*Write a program that reads prefix expressions and converts them to postfix. Each prefix expression should be entered on a
separate line. The program should keep reading prefix expressions and converting them to postfix until a blank line is
entered.*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string prefixToPostFix(istream&);

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
        istringstream istr(input);
        cout << prefixToPostFix(istr) << endl;
        // Get next line of input
        cout << "Enter a prefix expression to convert to postfix: ";
        getline(cin, input);
    }

    return 0;
}

string prefixToPostFix(istream& exprStream)
{
    // Peek at first non-space character in prefix expression
    char ch = exprStream.peek();

    while (isspace(ch))
    {
        ch = exprStream.get();   // Read the space character
        ch = exprStream.peek();  // Peek again
    }
    if (isalpha(ch))
    {
        // The prefix expression is a single variable
        string var;
        exprStream >> var;
        return var;
    }
    if (isdigit(ch))
    {
        // The prefix expression is a single number
        int num;
        exprStream >> num;
        ostringstream ostr;
        ostr << num;
        return ostr.str();
    }
    else
    {
        // The prefix expression is an operator followed
        // by two prefix expressions:

        // Read the operator
        ch = exprStream.get();

        // Recursively evaluate the two subexpressions
        string value1 = prefixToPostFix(exprStream);
        string value2 = prefixToPostFix(exprStream);

        // Apply the operator
        switch (ch)
        {
        case '+': return value1 + " " + value2 + " +";
        case '-': return value1 + " " + value2 + " -";
        case '*': return value1 + " " + value2 + " *";
        case '/': return value1 + " " + value2 + " /";
        default:  cout << "Bad input expression";
            exit(1);
        }
    }
}