/*Create a subclass of the abstract filter class of Programming Challenge 5 that replaces every line break in a 
file with a single space.*/

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

class RemovalOfLineBreaks : public FileFilter
{

};

int main()
{
    ifstream in;
    ofstream out;
    string inFileName, outFileName;
    int k;

    cout << "Enter name of file whose text will be transformed: ";
    getline(cin, inFileName);
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
    //RemovalOfLineBreaks obfuscate();
    //obfuscate.doFilter(in, out);

    return 0;
}