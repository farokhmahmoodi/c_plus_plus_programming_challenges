/*Modify the list class you created in the previous programming challenges by adding a member function that will sort the
list into ascending order by the numeric value of the item stored in the node.

void sort(  );

You should sort the list by moving pointers rather than by copying or swapping the contents of the nodes.*/

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
        else if(pos == 0) //if inserting integer at first node in list
            add(x);
        else
        {
            ListNode *previousNodePtr = head, *nodePtr = head->next;
            int listPos = 0;

            while(nodePtr->next != nullptr)
            {
                listPos++;
                if(listPos == pos)
                {
                    previousNodePtr->next = new ListNode(x,nodePtr);
                    break;
                }
                previousNodePtr = nodePtr;
                nodePtr = nodePtr->next;
            }
            if(nodePtr->next == nullptr)
                nodePtr->next = new ListNode(x);
        }
    }
    void remove(int pos)
    {
        if(head == nullptr) //if list is empty
            return;
        else if(pos == 0) //if removing integer in first node in list
        {
            ListNode* tail = head->next;
            delete head;
            head = tail;
        }
        else
        {
            ListNode *previous = head, *current = head->next;
            int listPos = 0;

            while(current != nullptr)
            {
                listPos++;
                if(listPos == pos)
                {
                    previous->next = current->next;
                    delete current;
                    break;
                }
                previous = current;
                current = current->next;
            }
        }
    }
    void sort()
    {
          if(head != NULL && head->next != NULL)
        {
            ListNode *previous = head, *current = previous->next;

            if(current->value < previous->value)
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
    int size() const
    {
        return size(head);
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
    int size(ListNode *aList) const
    {
        if (aList == nullptr)
            return 0;
        else
            return 1 + size(aList->next);
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
    int choice, pos;

    a.add(745.234);
    a.add(98.56);
    a.add(-12.34);
    a.add(14.24);
    a.add(245.984);
    cout << "List before sort below.\n";
    a.print();
    a.sort();
    cout << "List after sort in ascending order below \n";
    a.print();

    return 0;
}
