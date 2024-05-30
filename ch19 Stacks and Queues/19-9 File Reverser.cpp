/*Write a program that opens a text file and reads its contents into a stack of characters.
The program should then pop the characters from the stack and save them in a second text file.
The order of the characters saved in the second file should be the reverse of their order in the first file.*/

#include <iostream>
#include <fstream>
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
   top = new StackNode(num, top);
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
    char ch;
    ifstream inFile("sample.txt", ios::in);
    ofstream outFile("out.txt", ios::out);
    if(!inFile)
    {
        cout << "Input file failed to open.\n";
        return 0;
    }
    if(!outFile)
    {
        cout << "Output file failed to open.\n";
        return 0;
    }
    while(ch != EOF)
    {
        ch = inFile.get();
        if(ch != EOF)
            stack.push(ch);
    }
    inFile.close();
    while(!stack.isEmpty())
    {
        stack.pop(ch);
        outFile << ch;
    }
    outFile.close();

    return 0;
}
