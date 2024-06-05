/*Write a program that reads prefix expressions and prints their values. Each input expression should
be entered on its own line, and the program should terminate when the user enters a blank line.
Assume that there are only binary operators and that the expressions contain no variables.
Your program should use a stack. Here are sample input–output pairs:

78                  78
+ 78 6              84
/  + 78 6 - 9 2     12

HINT: Go through the prefix expression from left to right, pushing operators and values onto a stack.
Whenever you have two values on the stack with an operator just underneath them, pop the two values, pop the operator,
apply the operator to the value, and push the result (which is a value) onto the stack. The tricky part is how to store
both operators of type char and values of type int on the same stack. Think about a type such as the following:

struct StackElement
{
   bool is_value;
   int value;
   char op;
   StackElement(int number)
   {
      is_value = true;
      value = number;
   }
   StackElement(char ch)
   {
      is_value = false;
      op = ch;
   }
};

You might consider using a vector as a stack to make it easier to get at the three elements at the top of the stack.*/

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

string preFixValue(istream&);

int main()
{
    string input;

    cout << "Enter prefix expressions to evaluate.\n"
        << "Press enter after each expression,\n"
        << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a prefix expression to evaluate: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        // Convert string to exprStreamingstream
        istringstream exprStream(input);
        cout << preFixValue(exprStream) << endl;
        // Get next line of input
        cout << "Enter a prefix expression to evaluate: ";
        getline(cin, input);
    }

    return 0;
}

string preFixValue(istream& exprStream)
{

    return "_";
}
