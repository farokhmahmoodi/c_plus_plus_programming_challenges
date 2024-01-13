/*Modify the program Pr10-16 so that it uses smart pointers rather than raw pointers.

This program illustrates the use of constructors
and destructors in the allocation and deallocation of memory.*/

#include <iostream> 
#include <string>
#include <memory>
using namespace std;

class Squares
{
private:
    int length;    // How long is the sequence    
    unique_ptr<int[]> sq; // Dynamically allocated array
public:
    // Constructor allocates storage for sequence
    // of squares and creates the sequence
    Squares(int len)
    {
        length = len;
        sq = make_unique<int[]>(length);
        for (int k = 0; k < length; k++)
        {
            sq[k] = (k + 1) * (k + 1);
        }
        // Trace
        cout << "Construct an object of size " << length << endl;
    }
    // Print the sequence
    void print()
    {
        for (int k = 0; k < length; k++)
            cout << sq[k] << "  ";
        cout << endl;
    }
    // Destructor deallocates storage 
    ~Squares()
    {
        // Trace
        cout << "Destroy object of size " << length << endl;
    }
};

//***********************************************
// Outputs the sequence of squares in a         *
// Squares object                               *
//***********************************************
void outputSquares(unique_ptr<Squares> sqPtr)
{
    cout << "The list of squares is: ";
    sqPtr->print();
}

int main()
{
    // Main allocates a Squares object
    unique_ptr<Squares> sqPtr = make_unique<Squares>(3);
    outputSquares(move(sqPtr));

    return 0;
}