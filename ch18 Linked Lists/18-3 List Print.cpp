/*Modify the list class you created in the previous programming challenges to add a print 
member function. Test the class by starting with an empty list, adding some elements, and 
then printing the resulting list out.*/

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
        head = copyList(original.head);
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
private:
    static ListNode* copyList(ListNode* aList);
};

LinkedList::ListNode* LinkedList::copyList(ListNode* aList)
{
    if (aList == nullptr)
        return nullptr;
    else
    {
        // First copy the tail
        ListNode* tailCopy = copyList(aList->next);
        // Return copy of head attached to copy of tail
        return new ListNode(aList->value, tailCopy);
    }
}

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
    b.print();
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