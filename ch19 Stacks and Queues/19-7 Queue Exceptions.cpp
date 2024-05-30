/*Modify the static queue class used in Program 19-5 as follows.

1.Make the isFull member private.
2.Define a queue overflow exception and modify enqueue so that it throws this exception when the queue runs out of space.
3.Define a queue underflow exception and modify dequeue so that it throws this exception when the queue is empty.
4.Rewrite the main program so that it catches overflow exceptions when they occur.
  The exception handler for queue overflow should print an appropriate error message and then terminate the program.*/

#include <iostream>
#include <memory>
using namespace std;

class IntQueue
{
private:
   unique_ptr<int []> queueArray;
   int queueSize;
   int front;
   int rear;
   int numItems;
   bool isFull() const;
public:
   IntQueue(int);
   void enqueue(int);
   void dequeue(int &);
   bool isEmpty() const;
   void clear();

   //Queue exceptions
   class Overflow {};
   class Underflow {};
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
   if (isFull()) { throw IntQueue::Overflow(); }
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
   if (isEmpty()) { throw IntQueue::Underflow(); }
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
    int value;

    cout << "Enqueuing 5 items...\n";

    // Enqueue 5 items
    for (int k = 1; k <= 5; k++)
    {
        iQueue.enqueue(k*k);
    }
    try
    {
        iQueue.enqueue(6*6);
    }
    catch(IntQueue::Overflow)
    {
        cout << "Overflow exception occurred.\n";
        exit(1);
    }
    // Deqeue and retrieve all items in the queue
    cout << "The values in the queue were: ";
    while (!iQueue.isEmpty())
    {
        iQueue.dequeue(value);
        cout << value << "  ";
    }
    cout << endl;

    return 0;
}
