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
   // The TreeNode struct is used to build the tree.
   struct TreeNode
   {
      double value;
      TreeNode *left;
      TreeNode *right;
      TreeNode(double value1,
              TreeNode *left1 = nullptr,
              TreeNode *right1 = nullptr)
      {
         value = value1;
         left = left1;
         right = right1;
      }
   };
   TreeNode *root;     // Pointer to the root of the tree
   bool search(double x, TreeNode *t);
public:
   // These member functions are the public interface.
   BinaryTree()		// Constructor
   {
      root = nullptr;
   }
   ~BinaryTree()		// Destructor
   {

   }
   void insert(double x);
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

}

//***************************************************
// searchNode determines if a value is present in   *
// the tree. If so, the function returns true.      *
// Otherwise, it returns false.                     *
//***************************************************
bool BinaryTree::search(double x)
{

}

//*********************************************************
// This function displays the values  stored in a tree    *
// in inorder.                                            *
//*********************************************************
void BinaryTree::inorder(vector <double> & v)
{

}

bool BinaryTree::search(double x, TreeNode *t)
{

}

int main()
{


    return 0;
}
