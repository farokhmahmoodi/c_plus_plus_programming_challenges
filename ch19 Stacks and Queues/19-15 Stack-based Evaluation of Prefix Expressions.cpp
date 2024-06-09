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
#include <vector>
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

int prefixExpr(istream& exprStream); //Prototype

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
        // Convert string to istringstream
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
int prefixExpr(istream& exprStream)
{
    int number;
    char ch = exprStream.peek();

    while (isspace(ch))
    {
        ch = exprStream.get(); 
        ch = exprStream.peek();  
    }
    if (isdigit(ch))
    {
        // The prefix expression is a single number
        exprStream >> number;
        return number;
    }
    else
    {
        ch = exprStream.get();
        if (ch == '-' && isdigit(exprStream.peek()))
        {
            // The prefix expression is a single negative number
            exprStream >> number;
            return number * -1;
        }
        vector<StackElement> stack;
        int value, valueCount = 0;
        while (exprStream)
        {
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                if (ch == '-' && isdigit(exprStream.peek()))
                {
                    exprStream >> number;
                    stack.emplace_back(StackElement(number * -1));
                    valueCount++;
                }
                else
                {
                    stack.emplace_back(StackElement(ch));
                }
            }
            if (isdigit(ch))
            {
                exprStream.unget();
                exprStream >> number;
                stack.emplace_back(StackElement(number));
                valueCount++;
            }
            if (valueCount == 2)
            {
                for (int i = 0; i < stack.size(); i++)
                {
                    if (stack[i].is_value)
                    {
                        if (stack[i + 1].is_value)
                        {
                            switch (stack[i - 1].op)
                            {
                                case '+':
                                {
                                    value = stack[i].value + stack[i + 1].value;
                                    stack.erase(stack.begin()+(i-1),stack.begin()+(i+2));
                                    stack.emplace_back(value);
                                    break;
                                }
                                case '-':
                                {
                                    value = stack[i].value - stack[i + 1].value;
                                    stack.erase(stack.begin() + (i - 1), stack.begin() + (i + 2));
                                    stack.emplace_back(value);
                                    break;
                                }
                            case '*':
                                {
                                    value = stack[i].value * stack[i + 1].value;
                                    stack.erase(stack.begin() + (i - 1), stack.begin() + (i + 2));
                                    stack.emplace_back(value);
                                    break;
                                }
                            case '/':
                                {
                                    value = stack[i].value / stack[i + 1].value;
                                    stack.erase(stack.begin() + (i - 1), stack.begin() + (i + 2));
                                    stack.emplace_back(value);
                                    break;
                                }
                            }
                            break;
                        }
                        //if(!stack[i + 2].is_value)
                        //{
                        //    cout << "Bad input expression 1\n";
                        //    return -1;
                        //}
                    }
                }
                valueCount = 0;
            }
            ch = exprStream.get();
        }
        if (stack.size() != 1 && stack.size() == 3)
        {
            if (!stack[0].is_value && stack[1].is_value && stack[2].is_value)
            {
                switch (stack[0].op)
                {
                    case '+':
                    {
                        value = stack[1].value + stack[2].value;
                        stack.clear();
                        stack.emplace_back(value);
                        break;
                    }
                    case '-':
                    {
                        value = stack[1].value - stack[2].value;
                        stack.clear();
                        stack.emplace_back(value);
                        break;
                    }
                case '*':
                    {
                        value = stack[1].value * stack[2].value;
                        stack.clear();
                        stack.emplace_back(value);
                        break;
                    }
                case '/':
                    {
                        value = stack[1].value / stack[2].value;
                        stack.clear();
                        stack.emplace_back(value);
                        break;
                    }
                }
            }
            else
            {
                cout << "Bad input expression 2\n";
                return -1;
            }
        }
        else
        {
            cout << "Bad input expression 3\n";
            return -1;
        }
        if(!stack.empty() && stack[0].is_value)
            return stack[0].value;
        else
        {
            cout << "Bad input expression 4\n";
            return -1;
        }
    }
}