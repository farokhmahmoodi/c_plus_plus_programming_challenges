/*Write a class for implementing a simple binary search tree capable of storing numbers. The class should have member functions

void insert(double x)
bool search(double x)
void inorder(vector <double> & v )

The insert function should not use recursion directly or indirectly by calling a recursive function.
The search function should work by calling a private recursive member function

bool search(double x, BtreeNode *t)

The inorder function is passed an initially empty vector v: it fills v with the inorder list of numbers stored in the binary search tree.
Demonstrate the operation of the class using a suitable driver program.*/

#include <iostream>
#include<vector>
using namespace std;

class BinaryTree
{
private:
    // The BtreeNode struct is used to build the tree.
    struct BtreeNode
    {
        double value;
        BtreeNode* left;
        BtreeNode* right;
        BtreeNode(double value1,
            BtreeNode* left1 = nullptr,
            BtreeNode* right1 = nullptr)
        {
            value = value1;
            left = left1;
            right = right1;
        }
    };
    BtreeNode* root;     // Pointer to the root of the tree
    bool search(double x, BtreeNode* t);
public:
    // These member functions are the public interface.
    BinaryTree()		// Constructor
    {
        root = nullptr;
    }
    void insert(double);
    bool search(double);
    void inorder(vector<double>&);
};

//**************************************************
// This version of insert inserts a number into    *
// a given subtree of the main binary search tree. *
//**************************************************
void BinaryTree::insert(double x)
{
    // If the tree is empty, make a new node and make it
    // the root of the tree.
    if (!root)
    {
        root = new BtreeNode(x);
        return;
    }

    BtreeNode* temp = root;
    while (temp)
    {
        // If num is already in tree: return.
        if (root->value == x)
            return;      
        // The tree is not empty: insert the new node into the
        // left or right subtree.
        if (x < root->value)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

}

//***************************************************
// searchNode determines if a value is present in   *
// the tree. If so, the function returns true.      *
// Otherwise, it returns false.                     *
//***************************************************
bool BinaryTree::search(double x)
{
    search(x, root);
}

//*********************************************************
// This function displays the values  stored in a tree    *
// in inorder.                                            *
//*********************************************************
void BinaryTree::inorder(vector <double>& v)
{
    
}

bool BinaryTree::search(double x, BtreeNode *t)
{
    while (t)
    {
        if (t->value == x)
            return true;
        else if (x < t->value)
            t = t->left;
        else
            t = t->right;
    }
    return false;
}

int main()
{
    BinaryTree tree;
    vector <double> v;

    cout << "Inserting numbers. ";
    tree.insert(5.2);
    tree.insert(8.4);
    tree.insert(3.2);
    tree.insert(12.3);
    tree.insert(9.1);
    cout << "Done.\n";
    cout << "Inorder traversal:  ";
    tree.inorder(v);

    return 0;
}