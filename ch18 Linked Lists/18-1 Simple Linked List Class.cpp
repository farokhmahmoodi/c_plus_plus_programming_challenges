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
        if (head == nullptr)
        {
            head = new ListNode(x);
        }
        else
        {
            ListNode* tail = head;
            head = new ListNode(x,tail);
        }
    }
    bool isMember(double x)
    {
        if (head->value == x)
            return true;
        else
        {
            ListNode* nodePtr = head;
            while (nodePtr != nullptr && nodePtr->value != x)
                nodePtr = nodePtr->next;
            if (nodePtr->value == x)
                return true;
            else
                return false;
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
    a.displayList();
    if (a.isMember(65.3))
        cout << "65.3 is a member\n";
    if (!a.isMember(89.3))
        cout << "45.2 is not a member\n";

    return 0;
}
