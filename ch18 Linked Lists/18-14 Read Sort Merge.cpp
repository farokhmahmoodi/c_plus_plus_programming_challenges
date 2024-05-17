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


// This program illustrates the building
// and traversal of a linked list.
#include <iostream>
#include <fstream>
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

int main()
{
   double number;                    // Used to read the file
   ListNode *numberList = nullptr;   // List of numbers

   // Open the file
   ifstream numberFile("numberFile.dat");
   if (!numberFile)
   {
      cout << "Error in opening the file of numbers.";
      exit(1);
   }
   // Read the file into a linked list
   cout << "The contents of the file are: " << endl;
   while (numberFile >> number)
   {
      cout << number << "  ";
      // Create a node to hold this number
      numberList = new ListNode(number, numberList);
   }
   // Traverse the list while printing
   cout << endl << "The contents of the list are: " << endl;
   ListNode *ptr = numberList;
   while (ptr != nullptr)
   {
      cout << ptr->value << "  "; // Process node
      ptr = ptr->next;            // Move to next node
   }
   return 0;
}
