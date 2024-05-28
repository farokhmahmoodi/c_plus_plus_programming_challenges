/*In this chapter you studied IntQueue, a class that implements a static queue of integers.
Write a template that will create a static queue of any data type.
Demonstrate the class with a driver program.*/

#include <iostream>
#include <memory>
using namespace std;

template<class T> class IntQueue
{
private:
   unique_ptr<T[]> queueArray;
   int queueSize;
   int front;
   int rear;
   int numItems;
public:
   IntQueue(int);

   void enqueue(T);
   void dequeue(T &);
   bool isEmpty() const;
   bool isFull() const;
   void clear();
};

//*************************
// Constructor.           *
//*************************
template<class T> IntQueue<T>::IntQueue(int s)
{
   queueArray = make_unique<T[]>(s);
   queueSize = s;
   front = -1;
   rear = -1;
   numItems = 0;
}


//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************
template<class T> void IntQueue<T>::enqueue(T num)
{
   if (isFull())
   {
      cout << "The queue is full.\n";
      exit(1);
   }
   else
   {
      // Calculate the new rear position
      rear = (rear + 1) % queueSize;
      // Insert new item
      queueArray[rear] = num;
      // Update item count
      numItems++;
   }
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
template <class T> void IntQueue<T>::dequeue(T &num)
{
   if (isEmpty())
   {
      cout << "The queue is empty.\n";
      exit(1);
   }
   else
   {
      // Move front
      front = (front + 1) % queueSize;
      // Retrieve the front item
      num = queueArray[front];
      // Update item count
      numItems--;
   }
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************
template<class T> bool IntQueue<T>::isEmpty() const
{
   return numItems == 0;
}

//********************************************
// Function isFull returns true if the queue *
// is full, and false otherwise.             *
//********************************************
template<class T> bool IntQueue<T>::isFull() const
{
   return numItems == queueSize;
}

//*******************************************
// Function clear resets the front and rear *
// indices, and sets numItems to 0.         *
//*******************************************
template<class T> void IntQueue<T>::clear()
{
   front = -1;
   rear = -1;
   numItems = 0;
}

int main()
{
   IntQueue<double> iQueue(5);

   cout << "Enqueuing 5 items...\n";

   // Enqueue 5 items
   for (double k = 1.1; k <= 5.3; k++)
   {
      iQueue.enqueue(k*k);
   }

   // Deqeue and retrieve all items in the queue
   cout << "The values in the queue were: ";
   while (!iQueue.isEmpty())
   {
      double value;
      iQueue.dequeue(value);
      cout << value << "  ";
   }
   cout << endl;

    return 0;
}
