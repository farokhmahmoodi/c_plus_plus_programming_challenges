/*Write a program that reads a sentence as input and converts each word to “Pig Latin.” In one version, 
to convert a word to Pig Latin you remove the first letter and place that letter at the end of the word. 
Then you append the string “ay” to the word. Here is an example:

English: I SLEPT MOST OF THE NIGHT

Pig Latin: IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string pigLatin(string);

int main()
{
    string input;

    cout << "Enter a sentence and the program will convert it to Pig Latin:";
    getline(cin, input);
    cout << pigLatin(input) << endl;

    return 0;
}

string pigLatin(string in)
{
    string convert, word;
    istringstream istr(in);
    ostringstream ostr;

    istr >> word;
    if (word.length() == 1)
    {
        word.append("ay");
    }
    convert += word;
    convert += " ";

    return convert;
}
