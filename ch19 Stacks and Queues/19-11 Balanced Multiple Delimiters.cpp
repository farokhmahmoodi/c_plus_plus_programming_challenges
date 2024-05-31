/*A string may use more than one type of delimiter to bracket information into “blocks.”
For example, A string may use braces { }, parentheses ( ), and brackets [ ] as delimiters.
A string is properly delimited if each right delimiter is matched with a preceding left delimiter of the same type in such a way that either the resulting blocks of
information are disjoint or one of them is completely nested within the other.
Write a program that uses a single stack to check whether a string containing braces, parentheses, and brackets is properly delimited.*/

#include <iostream>
#include <string>
using namespace std;

class DynStack {
   struct StackNode
   {
      char value;
      StackNode *next;
      // Constructor
      StackNode(char value1, StackNode *next1 = NULL)
      {
         value = value1;
         next = next1;
      }
   };
   StackNode *top;
public:
   DynStack() { top = nullptr; }
   ~DynStack();
   void push(char);
   void pop(char &);
   bool isEmpty() const;
   char topValue() const
   {
       return top->value;
   }
   void balanced(string input, DynStack& stack)
   {
        char ch;

        for(int i = 0; i < input.size(); i++)
        {
            if(input[i] == '(' || input[i] == '[' || input[i] == '{')
                stack.push(input[i]);
            else if(input[i] == ')')
            {
                if(stack.topValue() == '(')
                    stack.pop(ch);
                else
                    break;
            }
            else if(input[i] == ']')
            {
                if(stack.topValue() == '[')
                    stack.pop(ch);
                else
                    break;
            }
            else if(input[i] == '}')
            {
                if(stack.topValue() == '{')
                    stack.pop(ch);
                else
                    break;
            }
        }
        if(stack.isEmpty())
            cout << "The string has balanced delimiters.\n";
        else
            cout << "The string does not have balanced delimiters.\n";
   }

   // Stack Exception
   class Underflow {};
};

//**************************************************
// Member function push pushes the argument onto   *
// the stack.                                      *
//**************************************************
void DynStack::push(char num)
{
   try
   {
      top = new StackNode(num, top);
   }
   catch (bad_alloc& ba)
   {
      cout << "Memory allocation error: " << ba.what() << endl;
      exit(1);
   }
}

//*****************************************************
// Member function pop removes the value at the top   *
// of the stack and copies it into the variable       *
// passed as an argument.                             *
//*****************************************************
void DynStack::pop(char &num)
{
   StackNode *temp;

   if (isEmpty()) { cout << "The string does not have balanced delimiters.\n";
        throw DynStack::Underflow(); }
   else
   {
      // Pop value off top of stack
      num = top->value;
      temp = top;
      top = top->next;
      delete temp;
   }
}

//*****************************************************
// Member function isEmpty returns true if the stack  *
// is empty, or false otherwise.                      *
//*****************************************************
bool DynStack::isEmpty() const
{
   return top == nullptr;
}

//*****************************************************
// Destructor.                                        *
//*****************************************************
DynStack::~DynStack()
{
   StackNode * garbage = top;
   while (garbage != nullptr)
   {
      top = top->next;
      garbage->next = nullptr;
      delete garbage;
      garbage = top;
   }
}

int main()
{
    DynStack stack;
    string input;

    cout << "Enter a string and the program will "
    << "determine if it has balanced delimiters:";
    getline(cin,input);
    stack.balanced(input,stack);

    return 0;
}
