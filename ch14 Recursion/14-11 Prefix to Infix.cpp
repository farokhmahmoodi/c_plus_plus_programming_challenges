/*Write a program that reads prefix expressions and converts them to infix. The infix expressions should be fully 
parenthesized to show the order of application of the operators. Each prefix expression should be entered on a separate line.
The program should keep reading prefix expressions and converting them to infix until a blank line is entered.*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string prefixToInfix(istream&);

int main()
{
    string input;

    cout << "Enter prefix expressions to convert to infix.\n"
        << "Press enter after each expression,\n"
        << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a prefix expression to convert to infix: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        istringstream istr(input);
        cout << prefixToInfix(istr) << endl;
        // Get next line of input
        cout << "Enter a prefix expression to convert to infix: ";
        getline(cin, input);
    }

    return 0;
}

string prefixToInfix(istream& exprStream)
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
        cout << "ch:" << ch << endl;

        // Recursively evaluate the two subexpressions
        string value1 = prefixToInfix(exprStream);
        cout << "value1:" << value1 << endl;
        string value2 = prefixToInfix(exprStream);
        cout << "value2:" << value2 << endl;

        // Apply the operator
        switch (ch)
        {
        case '+': return "(" + value1 + " + " + value2 + ")";
        case '-': return "(" + value1 + " - " + value2 +")";
        case '*': return "(" + value1 + " * " + value2 + ")";
        case '/': return "(" + value1 + " / " + value2 + ")";
        default:  return "Bad input expression";
        }
    }
}