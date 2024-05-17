/*Using the ListNode structure of Program 18-2, write the following functions:

ListNode *read()
ListNode *sort(ListNode* list1)
ListNode *merge(ListNode* list1, ListNode* list2)

The first function reads a sequence of whitespace-separated positive numbers and forms the numbers read into a linked list of nodes.
The input for a sequence of numbers is terminated by −1. The second function sorts a linked list of nodes and returns a pointer to the head of the sorted lists.
The function should sort by rearranging existing nodes, not by making copies of existing nodes.
The third function merges two linked lists that are already sorted into a linked list that is also sorted.
The merge function should not make copies of nodes: Rather, it must remove nodes from the two lists and form those nodes into a new list.

Test your functions by having the user enter two sequences of numbers, sorting each sequence, and then merging and printing the resulting list.*/

#include <iostream>
#include <limits>
using namespace std;

struct ListNode
  {
     double value;
     ListNode *next;
     // Constructor
     ListNode(double value1, ListNode *next1 = nullptr)
     {
       value = value1;
       next = next1;
     }
  };

  void add(double, ListNode&);
  ListNode *read();
  ListNode *sort(ListNode *list1);
  ListNode *merge(ListNode* list1, ListNode* list2);

int main()
{
    ListNode *sequence1 = read();


   return 0;
}

ListNode *add(double num, ListNode& aList)
{
    if(aList == nullptr)
    {
        aList = new ListNode(num);
        return aList;
    }
    else
    {
        aList = new ListNode(num,aList);
        return aList;
    }
}

ListNode *read()
{
    ListNode *aList;
    double x;

    do
    {
        do
        {
            while (cout << "Enter a positive number to read into a linked list(or -1 to terminate): "
            << &&
            !(cin >> x)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer x." << endl;
        }
        if(x < -1)
            cout << "Invalid input for number. Input must be greater than or equal to -1.\n";
        }while(x < -1);
        aList = (x,&aList);
    }while(x != -1);

    return aList;
}

ListNode *sort(ListNode *list1)
{
    ListNode *sortedList;

    return sortedList;
}

ListNode *merge(ListNode* list1, ListNode* list2)
{
    ListNode *mergedList;

    return mergedList;
}
