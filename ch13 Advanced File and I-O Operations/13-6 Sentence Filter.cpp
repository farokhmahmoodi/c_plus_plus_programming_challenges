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
    int inner;

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
    while (getline(in, input))
    {
        if (isalpha(input[0]))
            input[0] = toupper(input[0]);
        for (int index = 0; index < input.length(); index++)
        {
            if (input[index] == '.' || input[index] == '!' || input[index] == '?')
            {
                inner = index + 1;
                while (input[inner] == ' ' && input[inner] != '\0')
                    inner++;
                input[inner] = toupper(input[inner]);
            }
        }
        out << input << endl;
    }
    in.close();
    out.close();

    return 0;
}
