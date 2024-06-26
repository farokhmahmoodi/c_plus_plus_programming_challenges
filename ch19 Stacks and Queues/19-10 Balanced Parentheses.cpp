/*A string of characters has balanced parentheses if each right parenthesis occurring in the string is matched with a preceding left parenthesis in the same way each right
brace in a C++ program is matched with a preceding left brace. Write a program that uses a stack to determine whether a string entered at the keyboard has
balanced parentheses.*/

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
        if(input[i] == '(')
            stack.push(input[i]);
        if(input[i] == ')')
        {
            if(!stack.isEmpty())
               stack.pop(ch);
            else
            {
                stack.push(input[i]);
                break;
            }
        }
    }
    if(stack.isEmpty())
        cout << "The string has balanced parentheses.\n";
    else
        cout << "The string does not have balanced parentheses.\n";

    return 0;
}
