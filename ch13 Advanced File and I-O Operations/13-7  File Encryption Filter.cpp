/*File encryption is the science of writing the contents of a file in a secret code. Your encryption program
should work like a filter, reading the contents of one file, modifying the information into a code, and then
writing the coded contents out to a second file. The second file will be a version of the first file but written
in a secret code.

Although there are complex encryption techniques, you should come up with a simple one of your own. For example,
you could read the first file one character at a time and add 10 to the ASCII code of each character before it
is written to the second file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    string filename;
    char ch;

    cout << "Enter filename of input file to encrypt:";
    getline(cin, filename);
    in.open(filename);
    if (!in)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    cout << "Enter filename for output file:";
    getline(cin, filename);
    out.open(filename);
    if (!out)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    while (ch != EOF)
    {
        ch = in.get();
        out << static_cast<char>(ch + 10);
    }
    in.close();
    out.close();

    return 0;
}
