/*A program that processes an input file and produces an output file is called a filter. Write a program that 
asks the user for two filenames. The first file will be opened for input, and the second file will be opened for 
output. (It will be assumed that the first file contains sentences that end with a period.) The program will 
read the contents of the first file and change all the letters other than the first letter of sentences to 
lowercase. The first letter of sentences should be made uppercase. The revised contents should be stored in the 
second file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    string input, filename;
    char ch;

    cout << "Enter filename for input file:";
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
    ch = in.get();
    if (static_cast<char>(isalpha(ch)) && static_cast<char>(islower(ch)))
        out << static_cast<char>(toupper(ch));
    else
        out << ch;
    while (ch != EOF)
    {
        ch = in.get();
        if (ch == '.' || ch == '?' || ch == '!')
        {
            out << ch;
            ch = in.get();
            if (ch != EOF)
            {
                while (!static_cast<char>(isalpha(ch)) && ch != EOF)
                {
                    out << ch;
                    ch = in.get();
                }
                out << static_cast<char>(toupper(ch));
            }
        }
        else
        {
            out << ch;
        }
    }
    in.close();
    out.close();

    return 0;
}
