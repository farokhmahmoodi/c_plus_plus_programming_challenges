/*Write a program that decrypts the file produced by the program in Programming Challenge 7. The decryption 
program should read the contents of the coded file, restore the information to its original state, and write it 
to another file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream in, out;
    string filename;
    char ch;

    cout << "Enter filename of input file to decrypt:";
    getline(cin, filename);
    in.open(filename, ios::in);
    if (!in)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    cout << "Enter filename for output file:";
    getline(cin, filename);
    out.open(filename, ios::out);
    if (!out)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    while (!in.fail())
    {
        ch = in.get();
        if(ch != EOF)
            out << static_cast<char>(ch - 10);
    }
    in.close();
    out.close();

    return 0;
}