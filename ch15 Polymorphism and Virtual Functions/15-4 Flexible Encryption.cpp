/*Write a modification of the encryption program of Section 15.5 whose transform function uses an integer key to transform
the character passed to it. The function transforms the character by adding the key to it. The key should be represented as a
member of the Encryption class, and the class should be modified so that it has a member function that sets the encryption
key. When the program runs, the main function should ask the user for the input file, the output file, and an encryption key.

Show that with these modifications, the same program can be used for both encryption and decryption.*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Encryption
{
protected:
    ifstream inFile;
    ofstream outFile;
    int key;
public:
    Encryption(const string& inFileName, const string& outFileName);
    virtual  ~Encryption();
    // Pure virtual function
    virtual char transform(char ch, int key) const = 0;
    // Do the actual work.
    virtual void encrypt() final;
    virtual void setKey(int) final;
};

//**************************************************
// Constructor opens the input and output file.    *
//**************************************************
Encryption::Encryption(const string& inFileName, const string& outFileName)
{
    inFile.open(inFileName);
    outFile.open(outFileName);
    if (!inFile)
    {
        cout << "The file " << inFileName
            << " cannot be opened.";
        exit(1);
    }
    if (!outFile)
    {
        cout << "The file " << outFileName
            << " cannot be opened.";
        exit(1);
    }
    key = 0;
}

//**************************************************
//Destructor closes files.                         *
//**************************************************
Encryption::~Encryption()
{
    inFile.close();
    outFile.close();
}

//*****************************************************
//Encrypt function uses the virtual transform         *
//member function to transform individual characters. *
//***************************************************** 
void Encryption::encrypt()
{
    char ch;
    char transCh;
    inFile.get(ch);
    while (!inFile.fail())
    {
        transCh = transform(ch, key);
        outFile.put(transCh);
        inFile.get(ch);
    }
}

void Encryption::setKey(int k)
{
    key = k;
}

// The subclass simply overides the virtual
// transformation function
class SimpleEncryption : public Encryption
{
public:
    char transform(char ch, int key) const override
    {
        return ch + key;
    }
    SimpleEncryption(const string& inFileName, const string& outFileName)
        : Encryption(inFileName, outFileName)
    {
    }
};

class SimpleDecryption : public Encryption
{
public:
    char transform(char ch, int key) const override
    {
        return ch - key;
    }
    SimpleDecryption(const string& inFileName, const string& outFileName)
        : Encryption(inFileName, outFileName)
    {
    }
};

int main()
{
    string inFileName, outFileName, outFileName2;
    int k;

    cout << "Enter name of file to encrypt: ";
    getline(cin, inFileName);
    cout << "Enter name of file to receive "
        << "the encrypted text: ";
    getline(cin, outFileName);
    while (cout << "Enter an integer for encryption key:" &&
        !(cin >> k)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer." << endl;
    }
    SimpleEncryption obfuscate(inFileName, outFileName);
    obfuscate.setKey(k);
    obfuscate.encrypt();

    return 0;
}