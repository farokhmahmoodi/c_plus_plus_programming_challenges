/*A file filter reads an input file, transforms it in some way, and writes the results to an output file. Write an abstract 
file filter class that defines a pure virtual function for transforming a character. Create one subclass of your file filter 
class that performs encryption, another that transforms a file to all uppercase, and another that creates an unchanged copy 
of the original file.

The class should have a member function

    void doFilter(ifstream &in, ofstream &out)

that is called to perform the actual filtering. The member function for transforming a single character should have the 
prototype

    char transform(char ch)

The encryption class should have a constructor that takes an integer as an argument and uses it as the encryption key.*/

#include <iostream>
using namespace std;

int main()
{
    

    return 0;
}
