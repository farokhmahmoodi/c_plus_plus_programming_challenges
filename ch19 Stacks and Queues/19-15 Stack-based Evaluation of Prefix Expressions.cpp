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
#include <stdlib.h>
using namespace std;

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

int prefixExpr(istream &exprStream); //Prototype

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
        cout << prefixExpr(exprStream) << endl;
        // Get next line of input
        cout << "Enter a prefix expression to evaluate: ";
        getline(cin, input);
    }

    return 0;
}

//***************************************************************
// Takes an istream that contains a single prefix expression p  *
// and returns the integer value of p                           *
//***************************************************************
int prefixExpr(istream &exprStream)
{

   // Peek at first non-space character in prefix expression
   char ch = exprStream.peek();
   while (isspace(ch))
   {
       ch = exprStream.get();   // Read the space character
       ch = exprStream.peek();  // Peek again
   }

   if (isdigit(ch))
   {
       // The prefix expression is a single number
       int number;
       exprStream >> number;
       return number;
   }
   else
   {
       // The prefix expression is an operator followed
       // by two prefix expressions: Compute values of
       //the prefix expressions

       // Read the operator
       ch = exprStream.get();

       // Recursively evaluate the two subexpressions
       int value1 = prefixExpr(exprStream);
       int value2 = prefixExpr(exprStream);

       // Apply the operator
       switch(ch)
       {
           case '+': return value1 + value2;
           case '-': return value1 - value2;
           case '*': return value1 * value2;
           case '/': return value1 / value2;
           default:  cout << "Bad input expression";
                     exit(1);
       }
   }
}
