/*C++ input stream classes have two member functions, unget() and putback(), that can be used to “undo” an 
operation performed by the get() function. Research these functions on the Internet, and then use one of them 
to rewrite Program 13-9 without using the peek() function.*/

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
    fstream in;
    string filename;
    int letterCount[128] = { 0 };
    char ch;

    cout << "Enter filename of input file:";
    getline(cin, filename);
    in.open(filename, ios::in);
    if (!in)
    {
        cout << "Failed to open file." << endl;
        return 0;
    }
    while (!in.fail())
    {
        ch = in.get();
        for (int i = 97; i < 123; i++)
        {
            if (static_cast<int>(tolower(ch)) == i)
            {
                letterCount[i]++;
            }
        }
    }
    for (int i = 97; i < 123; i++)
    {
        cout << static_cast<char>(i)
            << " count:" << letterCount[i] << endl;
    }
    in.close();

    return 0;
}
