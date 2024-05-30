/*Modify the IntStack class of Section 19.2 by adding a copy constructor and a copy assignment operator.
Test your code in a program that creates a stack, pushes some values onto it, and then copies the stack two different ways,
one using a copy constructor and one using copy assignment.
Your program should include code that demonstrates the correctness of the new operations.*/

#include <iostream>
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
   DynIntStack(DynIntStack& a) //copy constructor
   {
       top = a.top;
   }
   DynIntStack& operator=(const DynIntStack& a) //copy assignment operator
   {
       if(this != &a)
       {
           top = a.top;
       }
       return *this;
   }
   ~DynIntStack();
   void push(int);
   void pop(int &);
   bool isEmpty() const;
   void print();
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

void DynIntStack::print()
{
    StackNode* ptr = top;
    while(ptr != nullptr)
    {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    DynIntStack stack1;

    // Push values 5, 10, and 15 on the stack
    for (int value = 5; value <= 15; value = value + 5)
    {
       cout << "Push: " << value << "\n";
       stack1.push(value);
    }
    cout << "\n";
    cout << "Values in stack 1 below.\n";
    stack1.print();
    DynIntStack stack2(stack1);
    cout << "Values in stack 2 below using copy constructor.\n";
    stack2.print();
    DynIntStack stack3;
    stack3 = stack1;
    cout << "Values in stack 3 below using copy assignment operator.\n";
    stack3.print();

    return 0;
}
