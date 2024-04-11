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
public:
    FileFilter()
    {
    }
    // Pure virtual function
    virtual char transform(char ch) const = 0;
    void doFilter(ifstream& in, ofstream& out);
};

void FileFilter::doFilter(ifstream& in, ofstream& out)
{
    char ch;
    char transCh;
    in.get(ch);
    while (!in.fail())
    {
        transCh = transform(ch);
        out.put(transCh);
        in.get(ch);
    }
}

class Encryption : public FileFilter
{
protected:
    int key;
public:
    char transform(char ch) const override
    {
        return ch + key;
    }
    Encryption(int k)
        : FileFilter()
    {
        this->key = k;
    }
};

class UpperCase : public FileFilter
{
public:
    char transform(char ch) const override
    {
        return toupper(ch);
    }
    UpperCase()
        : FileFilter()
    {
    }
};

class Unchanged : public FileFilter
{
public:
    char transform(char ch) const override
    {
        return ch;
    }
    Unchanged()
        : FileFilter()
    {
    }
};

class Decryption : public FileFilter
{
protected:
    int key;
public:
    char transform(char ch) const override
    {
        return ch - key;
    }
    Decryption(int k)
        : FileFilter()
    {
        this->key = k;
    }
};

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
    Encryption obfuscate(k);
    //UpperCase obfuscate;
    //Unchanged obfuscate;
    //Decryption obfuscate(k);
    obfuscate.doFilter(in,out);

    return 0;
}
