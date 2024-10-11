/*Prefix representation is a simple of way of preserving the structure of a binary tree when you write it to an 
output stream in string form. It is defined as follows:  

1.) The prefix representation of an empty binary tree is a single underscore _.
2.)The prefix representation of a nonempty binary tree is (vL,R), where v represents the value stored in the root and L 
and R are the prefix representations of the left and right subtrees.

Examples of prefix representations are the strings (5_,_) and (5(3_,_),(8_,_)).

Modify the binary tree class of Program 20-1 to add the following member functions:

1.) void treePrint(): This public member function will print the prefix representation of the binary tree object to standard output.
2.) void treePrint(TreeNode *root, ostream& out) const: This private member function will print the prefix 
representation of the binary tree with a given root to a given output stream.

Test your functions by modifying the main function of Program 20-4 to print the prefix representation of the tree after each insertion and deletion.*/

#include <iostream>
using namespace std;

int main()
{
    return 0;
}