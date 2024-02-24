/*Write a function vector<string> split(string str) that takes a string as parameter and returns a vector of the distinct 
words in the string. A distinct word is any run of characters delimited by the beginning of the string, the end of the 
string, or whitespace. A consecutive run of whitespace characters is to be treated the same as a single whitespace 
character. Test your program by having the user enter lines of input, reading and splitting the line into words, and 
printing the words in the returned vector with each word on its own line. For example, the input

Every       good boy      does fine.

results in the output

Every
good
boy 
does
fine.*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(string);

int main()
{
    string input;
    vector<string> splitter;
    char choice;

    do
    {
        cout << "Enter a string and the program will print each word in the string on its own line:";
        getline(cin, input);
        splitter = split(input);
        for (int i = 0; i < splitter.size(); i++)
        {
            cout << splitter[i];
        }
        do
        {
            cout << "Would you like to enter another string? (Y for yes/N for no)";
            cin >> choice;
            if (toupper(choice) != 'Y' && toupper(choice) != 'N')
                cout << "Invalid input for choice." << endl;
        } while (toupper(choice) != 'Y' && toupper(choice) != 'N');
        cin.ignore();
    } while (toupper(choice) != 'N');

    return 0;
}

vector<string> split(string str)
{
    istringstream istr(str), istr2(str);
    int wordCount = 0;
    string word;
    vector<string> spl;

    for (int i = 0; i < str.length(); i++)
    {
        if (istr >> word)
        {
            wordCount++;
        }       
    }
    for (int i = 0; i < wordCount; i++)
    {
        istr2 >> word;
        spl.push_back(word);
        spl.push_back("\n");
    }

    return spl;
}