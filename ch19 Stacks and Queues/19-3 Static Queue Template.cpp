/*In this chapter you studied IntQueue, a class that implements a static queue of integers.
Write a template that will create a static queue of any data type.
Demonstrate the class with a driver program.*/

#include <iostream>
using namespace std;

class IntQueue
{
private:
   unique_ptr<int []> queueArray;
   int queueSize;
   int front;
   int rear;
   int numItems;
public:
   IntQueue(int);

   void enqueue(int);
   void dequeue(int &);
   bool isEmpty() const;
   bool isFull() const;
   void clear();
};

//*************************
// Constructor.           *
//*************************
IntQueue::IntQueue(int s)
{
   queueArray = make_unique<int []>(s);
   queueSize = s;
   front = -1;
   rear = -1;
   numItems = 0;
}


//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************
void IntQueue::enqueue(int num)
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
void IntQueue::dequeue(int &num)
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
bool IntQueue::isEmpty() const
{
   return numItems == 0;
}

//********************************************
// Function isFull returns true if the queue *
// is full, and false otherwise.             *
//********************************************
bool IntQueue::isFull() const
{
   return numItems == queueSize;
}

//*******************************************
// Function clear resets the front and rear *
// indices, and sets numItems to 0.         *
//*******************************************
void IntQueue::clear()
{
   front = -1;
   rear = -1;
   numItems = 0;
}

int main()
{
   IntQueue iQueue(5);

   cout << "Enqueuing 5 items...\n";

   // Enqueue 5 items
   for (int k = 1; k <= 5; k++)
   {
      iQueue.enqueue(k*k);
   }

   // Deqeue and retrieve all items in the queue
   cout << "The values in the queue were: ";
   while (!iQueue.isEmpty())
   {
      int value;
      iQueue.dequeue(value);
      cout << value << "  ";
   }
   cout << endl;

    return 0;
}
