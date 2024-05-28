/*In this chapter you studied IntStack, a class that implements a static stack of integers.
Write a template that will create a static stack of any data type.
Demonstrate the class with a driver program.*/

#include <iostream>
#include <memory>
using namespace std;

template <class T> class AnyStack {
    unique_ptr<T[]>stackArray;
    int capacity;
    int top;
public:
    // Constructor
    AnyStack(int capacity);

    // Member functions
    void push(T value);
    void pop(T& value);
    bool isEmpty() const;

    // Stack Exceptions
    class Overflow {};
    class Underflow {};
};

//************************************
// Constructor                       *
//************************************
template <class T>AnyStack<T>::AnyStack(int capacity)
{
    stackArray = make_unique<T[]>(capacity);
    this->capacity = capacity;
    top = 0;
}

//***********************************
// Adds a value to the stack        *
//***********************************
template <class T> void AnyStack<T>::push(T value)
{
    if (top == capacity) throw AnyStack::Overflow();
    stackArray[top] = value;
    top++;
}

//****************************************
// Determines whether the stack is empty *
//****************************************
template <class T> bool AnyStack<T>::isEmpty() const
{
    return top == 0;
}

//************************************************
// Removes a value from the stack and returns it *
//************************************************
template <class T> void AnyStack<T>::pop(T& value)
{
    if (isEmpty()) throw AnyStack::Underflow();
    top--;
    value = stackArray[top];
}

int main()
{
    AnyStack<string> stack(5);
    string values[] = { "5", "10", "15", "20", "25" };
    string value;

    cout << "Pushing...\n";
    for (int k = 0; k < 5; k++)
    {
        cout << values[k] << "  ";
        stack.push(values[k]);
    }
    cout << "\nPopping...\n";
    while (!stack.isEmpty())
    {
        stack.pop(value);
        cout << value << "  ";
    }
    cout << endl;

    return 0;
}
