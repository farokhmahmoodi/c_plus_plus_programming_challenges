/*Write a program that reads the contents of a text file. The program should create a map in which the keys
are the individual words found in the file and the values are the number of times each word appears.
For example, if the word “the” appears 128 times, the map would contain an element with "the" as the key
and 128 as the value. The program should display the frequency of each word on the screen and create a
second file containing a list of each word and its frequency. Consider a word to be any run of characters
delimited by white space.*/

#include <iostream>
#include <unordered_map>
#include <fstream>
#include <string>
#include <algorithm>
#include <set>
#include <iomanip>
using namespace std;

int main()
{
    fstream in("sample.txt", ios::in), out("list.txt", ios::out);
    unordered_map<string, int> freq;
    multiset<string> allWords;
    set<string> uniqueWords;
    string word;

    if (!in || !out)
    {
        cout << "File open failure.\n";
        return 0;
    }    
    while (in >> word)
    {
        allWords.emplace(word);
        uniqueWords.emplace(word);
    }
    in.close();
    for (auto it = uniqueWords.cbegin(); it != uniqueWords.cend(); it++)
    {
        freq.emplace(*it, allWords.count(*it));
    }
    cout << setw(5) << "Word" << setw(20) << "Frequency" << endl;
    out << setw(5) << "Word" << setw(20) << "Frequency" << endl;
    for (auto elem : freq)
    {
        cout << elem.first << setw(20) << elem.second << endl;
        out << elem.first << setw(20) << elem.second << endl;
    }

    return 0;
}
