/*In this chapter you studied DynIntStack, a class that implements a dynamic stack of integers.
Write a template that will create a dynamic stack of any data type.
Demonstrate the class with a driver program.*/

#include <iostream>
#include <cstdlib>
using namespace std;

class DynIntStack
{
   struct StackNode
   {
      int value;
      StackNode *next;
      // Constructor
      StackNode(int value1, StackNode *next1 = NULL)
      {
         value = value1;
         next = next1;
      }
   };
   StackNode *top;
public:
   DynIntStack() { top = nullptr; }
   ~DynIntStack();
   void push(int);
   void pop(int &);
   bool isEmpty() const;

   // Stack Exception
   class Underflow {};
};

//**************************************************
// Member function push pushes the argument onto   *
// the stack.                                      *
//**************************************************
void DynIntStack::push(int num)
{
   top = new StackNode(num, top);
}

//*****************************************************
// Member function pop removes the value at the top   *
// of the stack and copies it into the variable       *
// passed as an argument.                             *
//*****************************************************
void DynIntStack::pop(int &num)
{
   StackNode *temp;

   if (isEmpty()) { throw DynIntStack::Underflow(); }
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
bool DynIntStack::isEmpty() const
{
   return top == nullptr;
}

//*****************************************************
// Destructor.                                        *
//*****************************************************
DynIntStack::~DynIntStack()
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
   DynIntStack stack;
   int popped_value;

   // Push values 5, 10, and 15 on the stack
   for (int value = 5; value <= 15; value = value + 5)
   {
      cout << "Push: " << value << "\n";
      stack.push(value);
   }
   cout << "\n";

   // Pop three values
   for (int k = 1; k <= 3; k++)
   {
      cout << "Pop: ";
      stack.pop(popped_value);
      cout << popped_value << endl;
   }

   // Stack is now empty, a pop will cause an exception
   try
   {
      cout << "\nAttempting to pop again... ";
      stack.pop(popped_value);
   }
   catch (DynIntStack::Underflow)
   {
      cout << "Underflow exception occured.\n";
   }

    return 0;
}
