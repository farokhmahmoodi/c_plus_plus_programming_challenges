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
#include <fstream>
#include <string>
using namespace std;

class FileFilter
{
protected:
    ifstream inFile;
    ofstream outFile;
public:
    FileFilter(const string& inFileName, const string& outFileName);
    virtual  ~FileFilter();
    // Pure virtual function
    virtual char transform(char ch) const = 0;
    //virtual void encrypt() final;
};

//**************************************************
// Constructor opens the input and output file.    *
//**************************************************
//Encryption::Encryption(const string& inFileName, const string& outFileName)
//{
//    inFile.open(inFileName);
//    outFile.open(outFileName);
//    if (!inFile)
//    {
//        cout << "The file " << inFileName
//            << " cannot be opened.";
//        exit(1);
//    }
//    if (!outFile)
//    {
//        cout << "The file " << outFileName
//            << " cannot be opened.";
//        exit(1);
//    }
//}

//**************************************************
//Destructor closes files.                         *
//**************************************************
//Encryption::~Encryption()
//{
//    inFile.close();
//    outFile.close();
//}

//*****************************************************
//Encrypt function uses the virtual transform         *
//member function to transform individual characters. *
//***************************************************** 
//void Encryption::encrypt()
//{
//    char ch;
//    char transCh;
//    inFile.get(ch);
//    while (!inFile.fail())
//    {
//        transCh = transform(ch);
//        outFile.put(transCh);
//        inFile.get(ch);
//    }
//}

int main()
{


    return 0;
}
