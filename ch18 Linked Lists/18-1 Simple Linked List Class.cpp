/*Using an appropriate definition of ListNode, design a simple linked list class with only two 
member functions and a default constructor:


void add(double x);
boolean isMember(double x);
LinkedList( );

The add function adds a new node containing x to the front (head) of the list, while the isMember 
function tests to see if the list contains a node with the value x. Test your linked list class 
by adding various numbers to the list and then testing for membership.*/

#include <iostream>
using namespace std;

class LinkedList
{
protected:
    // Declare a class for the list node
    struct ListNode
    {
        double value;
        ListNode* next;
        ListNode(double value1, ListNode* next1 = nullptr)
        {
            value = value1;
            next = next1;
        }
    };
    ListNode* head;
public:
    void add(double x)
    {
        if (head == nullptr) //if list is empty
        {
            head = new ListNode(x);
        }
        else //if list is not empty
        {
            head = new ListNode(x,head);
        }
    }
    bool isMember(double x)
    {
        if (head == nullptr) //if list is empty
            return false;
        else if (head->value == x) //if value is first node in list
            return true;
        else
        {
            ListNode* nodePtr = head;
            while (nodePtr != nullptr && nodePtr->value != x) //traverse list looking for value
                nodePtr = nodePtr->next;
            if (nodePtr)
            {
                if (nodePtr->value == x) //if value found 
                    return true;
                else //if value not found
                    return false;
            }
        }
    }
    LinkedList()
    {
        head = nullptr;
    }
    void displayList() const
    {
        ListNode* nodePtr = head;
        while (nodePtr != nullptr)
        {
            cout << nodePtr->value << " ";
            nodePtr = nodePtr->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList a;

    a.add(5.6);
    a.add(82.3);
    a.add(65.3);
    a.add(-764.32);
    a.displayList();
    if (a.isMember(82.3))
        cout << "82.3 is a member of the list\n";
    if (!a.isMember(1652.34))
        cout << "1652.34 is not a member of the list\n";

    return 0;
}
