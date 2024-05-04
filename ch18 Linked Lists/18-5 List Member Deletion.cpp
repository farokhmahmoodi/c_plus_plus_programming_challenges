/*Modify the list class you created in the previous programming challenges by adding 
a function to remove an item from the list and by adding a destructor:


void remove(double x);
~LinkedList();

Test the class by adding a sequence of instructions that mixes operations for 
adding items, removing items, and printing the list.*/

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
            head = new ListNode(x, head);
        }
    }
    bool isMember(ListNode* aList, double x)
    {
        if (aList == nullptr) //if list is empty
            return false;
        else if (aList->value == x)
            return true;
        else
        {
            return isMember(aList->next, x);
        }
    }
    ListNode* getList() { return head; }
    LinkedList()
    {
        head = nullptr;
    }
    LinkedList(const LinkedList& original)
    {
        if (original.head == nullptr)
            head == nullptr;
        else
        {
            head = new ListNode(original.head->value, original.head->next);
        }
    }
    void print() const
    {
        ListNode* nodePtr = head;
        while (nodePtr)
        {
            cout << nodePtr->value << " ";
            nodePtr = nodePtr->next;
        }
        cout << endl;
    }
    void remove(double x)
    {
        head = remove(head, x);
    }
    ~LinkedList()
    {
        ListNode* ptr = head;
        while (ptr != nullptr)
        {
            ListNode* garbage = ptr;
            ptr = ptr->next;
            delete garbage;
        }
    }
private:
    ListNode* remove(ListNode* aList, double x)
    {
        if (aList == nullptr)
            return nullptr;
        if (aList->value == x)
        {
            ListNode* tail = aList->next;
            delete aList;
            return tail;
        }
        else
        {
            aList->next = remove(aList->next, x);
            return aList;
        }
    }
};

int main()
{
    LinkedList a;
    double x;
    int choice;

    a.add(745.234);
    a.print();
    a.add(98.56);
    a.print();
    a.add(-12.34);
    a.print();
    a.add(14.24);
    a.print();
    a.remove(98.56);
    a.print();
    a.remove(-12.34);
    a.print();
    a.remove(745.234);
    a.print();
    a.remove(14.24);
    a.print();
    do
    {
        while (cout << "Enter an integer to see if it is in linked list a:" &&
            !(cin >> x)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer x." << endl;
        }
        if (a.isMember(a.getList(), x))
            cout << x << " is a member of linked list a.\n";
        else
            cout << x << " is not a member of linked list a.\n";
        do
        {
            while (cout << "Would you like to test another integer for membership in linked" <<
                "list a?(1 for yes/2 for no): " &&
                !(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for choice." << endl;
            }
            if (choice != 1 && choice != 2)
                cout << "Error. Choice must be 1 or 2.\n";
        } while (choice != 1 && choice != 2);
        cin.ignore();
    } while (choice != 2);

    return 0;
}
