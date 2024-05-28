/*The DynIntStack and DynIntQueue classes shown in this chapter are abstract data types using a dynamic stack and dynamic queue, respectively.
The classes do not currently test for memory allocaton errors.
Modify the classes so they determine if new nodes cannot be created, and handle the error condition in an appropriate way.
(You will need to catch the predefined exception bad_alloc.)

Note
If you have already done Programming Challenges 2 and 4, modify the templates you created.*/

#include <iostream>
using namespace std;

template <class T> class DynStack
{
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

template<class T>class DynQueue
{
   struct QueueNode
   {
      T value;
      QueueNode *next;
      QueueNode(T value1, QueueNode *next1 = nullptr)
      {
         value = value1;
         next = next1;
      }
   };
   // These track the front and rear of the queue
   QueueNode *front;
   QueueNode *rear;
public:
   // Constructor and Destructor
   DynQueue();
   ~DynQueue();

   // Member functions
   void enqueue(T);
   void dequeue(T &);
   bool isEmpty() const;
   void clear();
};

//************************
// Constructor.          *
//************************
template<class T> DynQueue<T>::DynQueue()
{
   front = nullptr;
   rear = nullptr;
}

//************************
// Destructor.           *
//************************
template<class T> DynQueue<T>::~DynQueue()
{
   QueueNode * garbage = front;
   while (garbage != nullptr)
   {
      front = front->next;
      garbage->next = nullptr;
      delete garbage;
      garbage = front;
   }
}

//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************
template<class T> void DynQueue<T>::enqueue(T num)
{
   if (isEmpty())
   {
      front = new QueueNode(num);
      rear = front;
   }
   else
   {
      rear->next = new QueueNode(num);
      rear = rear->next;
   }
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
template<class T> void DynQueue<T>::dequeue(T &num)
{
   QueueNode *temp = nullptr;
   if (isEmpty())
   {
      cout << "The queue is empty.\n";
      exit(1);
   }
   else
   {
      num = front->value;
      temp = front;
      front = front->next;
      delete temp;
   }
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************
template<class T> bool DynQueue<T>::isEmpty() const
{
   if (front == nullptr)
      return true;
   else
      return false;
}

//********************************************
// Function clear dequeues all the elements  *
// in the queue.                             *
//********************************************
template<class T> void DynQueue<T>::clear()
{
   int value;   // Dummy variable for dequeue

   while (!isEmpty())
      dequeue(value);
}

int main()
{
   DynStack<double> stack;
   double popped_value;

   // Push 3 values on the stack
   for (double value = 5.01; value <= 20; value = value + 5.21)
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
   catch (DynStack<double>::Underflow)
   {
      cout << "Underflow exception occured.\n\n";
   }

   DynQueue<double> dQueue;

   cout << "Enqueuing 7 items...\n";

   // Enqueue 5 items
   for (double k = 1.1; k <= 7.3; k++)
      dQueue.enqueue(k*k);

   // Deqeue and retrieve all items in the queue
   cout << "The values in the queue were:\n";
   while (!dQueue.isEmpty())
   {
      double value;
      dQueue.dequeue(value);
      cout << value << "  ";
   }

    return 0;
}
