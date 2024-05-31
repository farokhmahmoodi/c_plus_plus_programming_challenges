/*A string may use more than one type of delimiter to bracket information into “blocks.”
For example, A string may use braces { }, parentheses ( ), and brackets [ ] as delimiters.
A string is properly delimited if each right delimiter is matched with a preceding left delimiter of the same type in such a way that either the resulting blocks of
information are disjoint or one of them is completely nested within the other.
Write a program that uses a single stack to check whether a string containing braces, parentheses, and brackets is properly delimited.*/

#include <iostream>
#include <string>
using namespace std;

template <class T> class DynStack {
   struct StackNode
   {
      T value;
      StackNode *next;
      // Constructor
      StackNode(T value1, StackNode *next1 = NULL)
      {
         value = value1;
         next = next1;
      }
   };
   StackNode *top;
public:
   DynStack() { top = nullptr; }
   ~DynStack();
   void push(T);
   void pop(T &);
   bool isEmpty() const;
   T topValue() const
   {
       return top->value;
   }

   // Stack Exception
   class Underflow {};
};

//**************************************************
// Member function push pushes the argument onto   *
// the stack.                                      *
//**************************************************
template<class T> void DynStack<T>::push(T num)
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
template<class T> void DynStack<T>::pop(T &num)
{
   StackNode *temp;

   if (isEmpty()) { throw DynStack::Underflow(); }
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
template<class T> bool DynStack<T>::isEmpty() const
{
   return top == nullptr;
}

//*****************************************************
// Destructor.                                        *
//*****************************************************
template<class T> DynStack<T>::~DynStack()
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
    DynStack<char> stack;
    string input;
    char ch;

    cout << "Enter a string and the program will "
    << "determine if it has balanced parentheses:";
    getline(cin,input);
    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] == '(' || input[i] == '[' || input[i] == '{')
            stack.push(input[i]);

    }
    if(stack.isEmpty())
        cout << "The string has balanced parentheses.\n";
    else
        cout << "The string does not have balanced parentheses.\n";

    return 0;
}
