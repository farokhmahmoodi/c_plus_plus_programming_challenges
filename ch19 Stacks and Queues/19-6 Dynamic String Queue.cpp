/*Design a class that stores strings on a dynamic queue.
The strings should not be fixed in length. Demonstrate the class with a driver program.*/

#include <iostream>
using namespace std;

class DynQueue
{
   struct QueueNode
   {
      string value;
      QueueNode *next;
      QueueNode(string value1, QueueNode *next1 = nullptr)
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
   void enqueue(string);
   void dequeue(string &);
   bool isEmpty() const;
   void clear();
};

//************************
// Constructor.          *
//************************
DynQueue::DynQueue()
{
   front = nullptr;
   rear = nullptr;
}

//************************
// Destructor.           *
//************************
DynQueue::~DynQueue()
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
void DynQueue::enqueue(string num)
{
   if (isEmpty())
   {
         try
         {
            front = new QueueNode(num);
         }
         catch(bad_alloc)
         {
            cout << "bad allocation caught\n";
            exit(1);
         }
         rear = front;
   }
   else
   {
         try
         {
            rear->next = new QueueNode(num);
         }
         catch(bad_alloc)
         {
            cout << "bad allocation caught\n";
            exit(1);
         }
         rear = rear->next;
   }
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
void DynQueue::dequeue(string &num)
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
bool DynQueue::isEmpty() const
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
void DynQueue::clear()
{
   string value;   // Dummy variable for dequeue

   while (!isEmpty())
      dequeue(value);
}

int main()
{
   DynQueue sQueue;

   cout << "Enqueuing 5 strings...\n";

   // Enqueue 5 items
   sQueue.enqueue("sdlk*&");
   sQueue.enqueue("xc");
   sQueue.enqueue("nbklq");
   sQueue.enqueue("(");
   sQueue.enqueue(" eum b");

   // Deqeue and retrieve all items in the queue
   cout << "The values in the queue were:\n";
   while (!sQueue.isEmpty())
   {
      string value;
      sQueue.dequeue(value);
      cout << value << "  ";
   }

   return 0;
}
