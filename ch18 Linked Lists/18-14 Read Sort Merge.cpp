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

  ListNode *add(double, ListNode*);
  ListNode *read();
  ListNode *sort(ListNode *list1);
  ListNode *sort(ListNode **aList);
  int size(ListNode *aList);
  ListNode *merge(ListNode* list1, ListNode* list2);

int main()
{
    cout << "Enter numbers for sequence 1 below.\n";
    ListNode *sequence1 = read();
    cout << "Enter numbers for sequence 2 below.\n";
    ListNode *sequence2 = read();
    sequence1 = sort(sequence1);
    sequence2 = sort(sequence2);
    ListNode *mergedList = merge(sequence1,sequence2);
    ListNode *ptr = mergedList;
    while(ptr != nullptr)
    {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }

   return 0;
}

//adds a node to end of list
ListNode *add(double num, ListNode* aList)
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
            while (cout << "Enter a positive number(or -1 to terminate): "
            && !(cin >> x)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer x." << endl;
        }
        if(x < -1)
            cout << "Invalid input for number. Input must be greater than or equal to -1.\n";
        }while(x < -1);
        if(x != -1)
            aList = add(x,aList);
    }while(x != -1);

    return aList;
}

ListNode *sort(ListNode *list1)
{
    if(list1 != nullptr && list1->next != nullptr)
        list1 = sort(&list1);

    return list1;
}

ListNode *sort(ListNode **aList)
{
    ListNode **h = nullptr;
    bool swap;
    for(int i = 0; i < size(*aList); i++)
    {
        h = aList;
        swap = false;
        for(int j = 0; j < size(*aList) - i - 1; j++)
        {
            ListNode *p1 = *h;
            ListNode *p2 = p1->next;

            if(p1->value > p2->value)
            {
                //swap nodes
                ListNode *temp = p2->next;
                p2->next = p1;
                p1->next = temp;
                *h = p2;
                swap = true;
            }
            h = &(*h)->next;
        }
        if(swap == false)
            break;
    }
    return *aList;
}

int size(ListNode* aList)
{
    if(aList == nullptr)
        return 0;
    else
        return 1 + size(aList->next);
}

ListNode *merge(ListNode* list1, ListNode* list2)
{
    //if either list is empty
    if(!list1)
        return list2;
    if(!list2)
        return list1;

    //start with linked list whose head data is the least
    if(list1->value < list2->value)
    {
        list1->next = merge(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = merge(list1, list2->next);
        return list2;
    }
}
