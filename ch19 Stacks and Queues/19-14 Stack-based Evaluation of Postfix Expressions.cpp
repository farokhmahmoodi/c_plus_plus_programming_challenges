/*Write a program that reads postfix expressions and prints their values.
Each input expression should be entered on its own line, and the program should terminate when the user enters a blank line.
Assume that there are only binary operators and that the expressions contain no variables. Your program should use a stack.
Here are sample input–output pairs:
        78                  78
        78 6 +              84
        78 6 + 9 2 - /      12
*/

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
using namespace std;

string postFixValue(istream&);

int main()
{
    string input;

    cout << "Enter postfix expressions to evaluate.\n"
        << "Press enter after each expression,\n"
        << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a postfix expression to evaluate: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        istringstream istr(input);
        cout << postFixValue(istr) << endl;
        // Get next line of input
        cout << "Enter a postfix expression to evaluate: ";
        getline(cin, input);
    }

    return 0;
}

string postFixValue(istream& exprStream)
{
    stack<string> pStack;


    return " ";
}
