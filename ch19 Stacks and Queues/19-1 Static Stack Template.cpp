/*In this chapter you studied IntStack, a class that implements a static stack of integers. 
Write a template that will create a static stack of any data type. 
Demonstrate the class with a driver program.*/

#include <iostream>
#include <memory>
using namespace std;

class IntStack
{
    unique_ptr<int[]>stackArray;
    int capacity;
    int top;
public:
    // Constructor 
    IntStack(int capacity);

    // Member functions
    void push(int value);
    void pop(int& value);
    bool isEmpty() const;

    // Stack Exceptions 
    class Overflow {};
    class Underflow {};
};

//************************************
// Constructor                       *
//************************************
IntStack::IntStack(int capacity)
{
    stackArray = make_unique<int[]>(capacity);
    this->capacity = capacity;
    top = 0;
}

//***********************************
// Adds a value to the stack        *
//***********************************
void IntStack::push(int value)
{
    if (top == capacity) throw IntStack::Overflow();
    stackArray[top] = value;
    top++;
}

//****************************************
// Determines whether the stack is empty *
//****************************************
bool IntStack::isEmpty() const
{
    return top == 0;
}

//************************************************
// Removes a value from the stack and returns it *
//************************************************
void IntStack::pop(int& value)
{
    if (isEmpty()) throw IntStack::Underflow();
    top--;
    value = stackArray[top];
}

int main()
{
    
    return 0;
}
