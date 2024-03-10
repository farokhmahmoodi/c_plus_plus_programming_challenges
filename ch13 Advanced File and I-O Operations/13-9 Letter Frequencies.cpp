/*The letter e is the most frequently used letter in English prose, and the letter z is the least frequently 
used. A friend of yours doing a sociology experiment believes that this may not necessarily be true of the 
writings of first-year college students. To test his theory, he asks you to write a program that will take a 
text file and print, for each letter of the English alphabet, the number of times the letter appears in the file.

Hint: Use an integer array of size 128, and use the ASCII values of letters to index into the array to store 
and retrieve counts for the letters.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream in;
    string filename;
    int letterCount[128] = {0};
    char ch;

    cout << "Enter filename of input file:";
    getline(cin, filename);
    in.open(filename, ios::in);
    if (!in)
    {
        cout << "Failed to open file." << endl;
        return 0;
    }
    int iter = 0;
    while (!in.fail())
    {
        ch = in.peek();
        if (static_cast<int>(ch) < 65)
        {
            ch = in.get();
            continue;
        }
        else if (static_cast<int>(ch) > 90)
        {
            if (static_cast<int>(ch) < 97 || static_cast<int>(ch) > 122)
            {
                ch = in.get();
                continue;
            };
        }
        for (int i = 97; i < 123; i++)
        {
            if (static_cast<int>(tolower(ch)) == i)
            {
                letterCount[i]++;
            }
        }
        ch = in.get();
    }
    for (int i = 97; i < 123; i++)
    {
        cout << static_cast<char>(i)
            << " count:" << letterCount[i] << endl;
    }
    in.close();

    return 0;
}
