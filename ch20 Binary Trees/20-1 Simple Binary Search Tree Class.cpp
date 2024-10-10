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

    BtreeNode* currentNode = root;
    while (currentNode)
    {
        // If num is already in tree: return.        
        if (currentNode->value == x)
            break;
        else if (x < currentNode->value)
        {
            if (!currentNode->left)
            {
                currentNode->left = new BtreeNode(x);
                break;
            }
            else if (x > currentNode->left->value)
            {
                BtreeNode* leftNode = currentNode->left;
                currentNode->left = new BtreeNode(x);
                currentNode->left->left = leftNode;
            }
            else
            {
                currentNode = currentNode->left;
            }
        }
        else
        {
            if (!currentNode->right)
            {
                currentNode->right = new BtreeNode(x);
                break;
            }
            else if (x < currentNode->right->value)
            {
                BtreeNode* rightNode = currentNode->right;
                currentNode->right = new BtreeNode(x);
                currentNode->right->right = rightNode;
            }
            else
            {
                currentNode = currentNode->right;
            }
        }
    }
}

//***************************************************
// search determines if a value is present in       *
// the tree. If so, the function returns true.      *
// Otherwise, it returns false.                     *
//***************************************************
bool BinaryTree::search(double x)
{
    return search(x, root);
}

//*********************************************************
// This function displays the values  stored in a tree    *
// in inorder.                                            *
//*********************************************************
void BinaryTree::inorder(vector <double>& v)
{
    BtreeNode* leftSubTree = root->left;
    BtreeNode* rightSubTree = root->right;

    v.emplace_back(root->value);
    while (rightSubTree)
    {
        v.emplace_back(rightSubTree->value);
        rightSubTree = rightSubTree->right;
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
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
    tree.insert(4.7);
    cout << "Done.\n";
    cout << "Inorder traversal:  ";
    tree.inorder(v);

    return 0;
}