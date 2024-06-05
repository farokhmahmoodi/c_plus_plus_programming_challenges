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
        // Convert string to exprStreamingstream
        istringstream exprStream(input);
        cout << postFixValue(exprStream) << endl;
        // Get next line of input
        cout << "Enter a postfix expression to evaluate: ";
        getline(cin, input);
    }

    return 0;
}

string postFixValue(istream &exprStream)
{
    stack<string> pStack;
    int num, num2;
    char ch = exprStream.peek();

    while(ch != EOF)
    {
        while (isspace(ch))
        {
            ch = exprStream.get();   // Read the space character
            ch = exprStream.peek();  // Peek again
        }
        if (isdigit(ch))
        {
            exprStream >> num;
            ostringstream ostr;
            ostr << num;
            pStack.push(ostr.str());
            ch = exprStream.peek();
        }
        else
        {
            ch = exprStream.get();

            switch(ch)
            {
                case '+':
                    {
                        istringstream istr2(pStack.top());
                        istr2 >> num2;
                        pStack.pop();
                        istringstream istr(pStack.top());
                        istr >> num;
                        pStack.pop();
                        ostringstream ostr;
                        ostr << num + num2;
                        pStack.push(ostr.str());
                    }
                    break;
                case '-':

                    break;
                case '*':
                    break;
                case '/':
                    break;
                default:  cout << "Bad input expression";
                        exit(1);
            }

            ch = exprStream.peek();
        }
    }
    return pStack.top();
}
