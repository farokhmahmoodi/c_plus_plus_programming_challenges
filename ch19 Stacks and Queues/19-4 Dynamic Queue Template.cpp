/*In this chapter you studied DynIntQueue, a class that implements a dynamic queue of integers.
Write a template that will create a dynamic queue of any data type.
Demonstrate the class with a driver program.*/

#include <iostream>
using namespace std;

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
