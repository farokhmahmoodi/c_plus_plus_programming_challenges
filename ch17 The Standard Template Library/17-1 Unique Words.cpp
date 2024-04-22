/*Write a program that opens a specified text file and then displays a list of all the unique words 
found in the file. Hint: Store each word as an element of a set.*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main()
{
    set<string> aset;
    ifstream in("test.txt");
    string word;

    if (!in)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    while (in >> word)
    {
        aset.insert(word);
    }
    for (auto element : aset)
        cout << element << endl;

    return 0;
}

