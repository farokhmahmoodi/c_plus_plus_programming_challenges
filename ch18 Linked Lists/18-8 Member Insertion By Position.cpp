/*Modify the list class you created in the previous programming challenges by adding a
member function for inserting a new item at a specified position:

void insert(double x, int pos);

A position of 0 means that x will become the first item on the list, a position of 1 means
that x will become the second item on the list, and so on. A position equal to, or greater
than, the length of the list means that the x is placed at the end of the list.*/

#include <iostream>
#include <limits>
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
        return isMember(head, x);
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
    void remove(double x)
    {
        head = remove(head, x);
    }
    int search(double x)
    {
        int pos = 0;
        ListNode* ptr = head;

        if (ptr == nullptr) //if list is empty
            return -1;
        else if (ptr->value == x)
            return pos;
        else
        {
            while (ptr->next != nullptr && ptr->value != x)
            {
                pos++;
                ptr = ptr->next;
            }
            if (ptr->value != x)
                return -1;
            else
                return pos;
        }
    }
    void insert(double x, int pos)
    {
        if (head == nullptr) //if list is empty
            add(x);
        else
        {
            ListNode* aList = head;
            int listPos = 0;
            if (listPos == pos)
            {

            }
        }
    }
    void reverse()
    {
        ListNode* current = head, * previous = nullptr, * next = nullptr;

        if (head != NULL)
        {
            while (current->next != nullptr)
            {
                next = current->next;
                current->next = previous;
                previous = current;
                current = next;
            }
            current->next = previous;
            head = current;
        }
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
    static ListNode* copyList(ListNode* aList);
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
    int choice, pos;

    a.add(745.234);
    a.add(98.56);
    a.add(-12.34);
    a.add(14.24);
    a.add(245.984);
    a.print();
    do
    {
        while (cout << "enter an integer to insert in linked list:" &&
            !(cin >> x)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "invalid input for integer x." << endl;
        }
        while (cout << "enter position in linked list you want to insert the integer:" &&
            !(cin >> pos)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "invalid input for position." << endl;
        }
        a.insert(x, pos);
        a.print();
        do
        {
            while (cout << "would you like to insert another integer in the linked" <<
                " list? (1 for yes/2 for no): " &&
                !(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "invalid input for choice." << endl;
            }
            if (choice != 1 && choice != 2)
                cout << "error. choice must be 1 or 2.\n";
        } while (choice != 1 && choice != 2);
        cin.ignore();
    } while (choice != 2);

    return 0;
}
