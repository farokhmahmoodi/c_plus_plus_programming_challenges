/*Modify your list class of Programming Challenge 1 to add a copy constructor. 
Test your class by making a copy of a list and then testing membership on the copy.*/

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
    LinkedList(const LinkedList& original)
    {
        if (original.head == nullptr)
            head == nullptr;
        else
        {
            head = new ListNode(original.head->value, original.head->next);
        }
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
    double x;
    int choice;

    a.add(5.6);
    a.add(82.3);
    a.add(65.3);
    a.add(-764.32);
    a.displayList();
    do
    {
        while (cout << "Enter an integer to see if it is in linked list a:" &&
            !(cin >> x)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer x." << endl;
        }
        if (a.isMember(x))
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
    LinkedList b(a); //copy constructor
    b.displayList();
    do
    {
        while (cout << "Enter an integer to see if it is in linked list b:" &&
            !(cin >> x)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer x." << endl;
        }
        if (b.isMember(x))
            cout << x << " is a member of linked list b.\n";
        else
            cout << x << " is not a member of linked list b.\n";
        do
        {
            while (cout << "Would you like to test another integer for membership in linked" <<
                "list b?(1 for yes/2 for no): " &&
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
