/*Modify the list class you created in the previous programming challenges by 
adding a member function for reversing the list:

void reverse();

The member function rearranges the nodes in the list so that their order is reversed. 
You should do this without creating or destroying nodes.*/

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
    void reverse()
    {
        head = reverse(head);
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
    ListNode* reverse(ListNode* aList)
    {
        
        return aList;
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

LinkedList::ListNode *LinkedList::copyList(ListNode* aList)
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

    a.add(745.234);
    a.add(98.56);
    a.add(-12.34);
    a.add(14.24);
    a.print();
    a.reverse();
    a.print();

    return 0;
}
