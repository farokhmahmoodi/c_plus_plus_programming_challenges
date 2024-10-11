/*Modify the binary search tree created in the preceding programming challenges by adding a member function 
that computes the width of the tree.1251The width of a tree is the largest number of nodes at the same level. 
Demonstrate correctness in a suitable driver program.
*/

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
    int size();
    int leafCount();
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
    BtreeNode* leftSubTree = root;
    BtreeNode* rightSubTree = root->right;

    while (leftSubTree)
    {
        v.emplace(v.begin(), leftSubTree->value);
        leftSubTree = leftSubTree->left;
    }
    while (rightSubTree)
    {
        v.emplace_back(rightSubTree->value);
        rightSubTree = rightSubTree->right;
    }
}

bool BinaryTree::search(double x, BtreeNode* t)
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

int BinaryTree::size()
{
    if (!root)
        return 0;
    int size = 0;
    BtreeNode* leftSubTree = root;
    BtreeNode* rightSubTree = root->right;

    while (leftSubTree)
    {
        size++;
        leftSubTree = leftSubTree->left;
    }
    while (rightSubTree)
    {
        size++;
        rightSubTree = rightSubTree->right;
    }
    return size;
}

int main()
{
    BinaryTree tree;
    vector <double> v;
    double value;
    int choice;

    cout << "Inserting numbers. ";
    tree.insert(5.2);
    tree.insert(8.4);
    tree.insert(3.2);
    tree.insert(12.3);
    tree.insert(9.1);
    tree.insert(4.7);
    cout << "Done.\n";
    cout << "Size of the binary tree is " << tree.size() << endl;
    tree.inorder(v);
    do
    {
        cout << "Inorder traversal:  ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
        while (cout << "Enter a number to search for in the array:" &&
            !(cin >> value)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for number." << endl;
        }
        if (tree.search(value))
            cout << "The number " << value << " was found in the binary tree.\n";
        else
            cout << "The number " << value << " was not found in the binary tree.\n";
        do
        {
            while (cout << "Would you like to enter another integer to find?"
                << "(1 for yes/2 for no):" &&
                !(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for choice." << endl;
            }
            if (choice != 1 && choice != 2)
                cout << "Invalid input for choice. Must be 1 or 2.\n";
        } while (choice != 1 && choice != 2);
    } while (choice != 2);

    return 0;
}