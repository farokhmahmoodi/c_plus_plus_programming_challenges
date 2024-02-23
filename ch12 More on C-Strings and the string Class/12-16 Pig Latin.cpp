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
    int wordCount = 0, upperCount = 0;
    istringstream istr(in), istr2(in);

    for (int i = 0; i < in.length(); i++) //seeing how many words are in the string
    {
        if (istr >> word)
        {
            wordCount++;
        }      
    }
    for (int x = 0; x < wordCount; x++)
    {
        istr2 >> word;
        for (int y = 0; y < word.length(); y++) //testing to see if all letters in word are capitalized
        {
            if (isupper(word[y]))
                upperCount++;
        }
        if (word.length() == 1) //if word is one letter
        {
            if (upperCount == word.length()) //if all letters are capitalized
                word.append("AY");
            else
                word.append("ay");
        }
        else //else if word is more than one letter
        {
            string temp;
            temp = word[0];
            if (upperCount == word.length()) //if all letters are capitalized
                temp += "AY";
            else
                temp += "ay";;
            word.erase(0, 1);
            word.append(temp);
        }
        convert += word;
        convert += " ";
        upperCount = 0;
    }

    return convert;
}
