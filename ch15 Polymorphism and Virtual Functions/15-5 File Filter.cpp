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
    FileFilter(ifstream&,ofstream&);
    virtual  ~FileFilter();
    // Pure virtual function
    virtual char transform(char ch) const = 0;
    void doFilter(ifstream& in, ofstream& out);
};

//**************************************************
// Constructor opens the input and output file.    *
//**************************************************
//FileFilter::FileFilter(ifstream& in, ofstream& out)
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
FileFilter::~FileFilter()
{
    inFile.close();
    outFile.close();
}

void FileFilter::doFilter(ifstream& in, ofstream& out)
{
    char ch;
    char transCh;
    inFile.get(ch);
    while (!inFile.fail())
    {
        transCh = transform(ch);
        outFile.put(transCh);
        inFile.get(ch);
    }
}

//class Encryption : public FileFilter
//{
//protected:
//    int key;
//public:
//    char transform(char ch) const override
//    {
//        return ch + key;
//    }
//    Encryption(const string& inFileName, const string& outFileName, int k)
//        : FileFilter(inFileName, outFileName)
//    {
//        key = k;
//    }
//};
//
//class UpperCase : public FileFilter
//{
//public:
//    char transform(char ch) const override
//    {
//        return toupper(ch);
//    }
//    UpperCase(const string& inFileName, const string& outFileName)
//        : FileFilter(inFileName, outFileName)
//    {
//    }
//};
//
//class Unchanged : public FileFilter
//{
//public:
//    char transform(char ch) const override
//    {
//        return ch;
//    }
//    Unchanged(const string& inFileName, const string& outFileName)
//        : FileFilter(inFileName, outFileName)
//    {
//    }
//};

int main()
{
    ifstream in;
    ofstream out;
    string inFileName, outFileName;
    int k;

    cout << "Enter name of file whose text will be transformed: ";
    getline(cin,inFileName);
    in.open(inFileName);
    if (!in)
    {
        cout << "Error opening input file.\n";
        return 0;
    }
    cout << "Enter name of file to receive "
        << "the transformed text: ";
    getline(cin, outFileName);
    out.open(outFileName);
    if (!out)
    {
        cout << "Error opening output file.\n";
        return 0;
    }
    while (cout << "Enter an integer for encryption key:" &&
        !(cin >> k)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer." << endl;
    }
    //Encryption obfuscate(inFileName, outFileName,k);
    //obfuscate.doFilter(inFile,outFile);

    return 0;
}
