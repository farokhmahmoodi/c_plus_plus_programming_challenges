/*Write a program that reads the contents of a text file. The program should create a map in which the
key-value pairs are described as follows:

Key�the keys are the individual words found in the file

Values�each value is a set that contains the line numbers in the file where the word (the key) is found.

For example, suppose the word "robot" is found in lines 7, 18, 94, and 138. The map would contain an element
in which the key was the string "robot", and the value was a set containing the numbers 7, 18, 94, and 138.

Once the map is built, the program should create another text file, known as a word index, listing the
contents of the map. The word index file should contain an alphabetical listing of the words that are
stored as keys in the map, along with the line numbers where the words appears in the original file.
Figure 17-9 shows an example of an original text file (�Kennedy.txt�) and its index file (�index.txt�).
Consider a word to any run of characters delimited by white space.*/

#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    fstream in("sample.txt", ios::in), out("index.txt", ios::out);
    string input, word;
    map<string, set<int>> wordIndex;
    set<string> words;
    int lineCount = 1;

    if (!in || !out)
    {
        cout << "File open failure.\n";
        return 0;
    }
    while (in >> input) //add unique words to first set of strings
    {
        words.emplace(input);
    }
    in.clear();
    in.seekg(0L, ios::beg);
    for (auto it = words.cbegin(); it != words.cend(); it++) //add line numbers in file where word is found
    {
        set<int> lineNums;
        while (getline(in, input)) //examining each line in the file
        {
            istringstream istr(input);
            while (istr >> word)
            {
                if (*it == word)
                {
                    lineNums.emplace(lineCount);
                    break;
                }
            }
            lineCount++;
        }
        in.clear();
        in.seekg(0L, ios::beg);
        lineCount = 1;
        wordIndex.emplace(*it, lineNums);
    }
    for (auto elem : wordIndex) //outputting word index list to screen and writing to output file
    {
        cout << elem.first << ": ";
        for (auto it = elem.second.cbegin(); it != elem.second.cend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        out << elem.first << ": ";
        for (auto it = elem.second.cbegin(); it != elem.second.cend(); it++)
        {
            out << *it << " ";
        }
        out << endl;
    }
    in.close();
    out.close();

    return 0;
}