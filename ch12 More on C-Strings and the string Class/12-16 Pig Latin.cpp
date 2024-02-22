/*Write a program that reads a sentence as input and converts each word to “Pig Latin.” In one version, 
to convert a word to Pig Latin you remove the first letter and place that letter at the end of the word. 
Then you append the string “ay” to the word. Here is an example:

English: I SLEPT MOST OF THE NIGHT

Pig Latin: IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY*/

#include <iostream>
#include <string>
using namespace std;

string pigLatin(string);

int main()
{
    string input;
    
    getline(cin, input);
    cout << pigLatin(input) << endl;

    return 0;
}

string pigLatin(string in)
{
    string convert = in;
    int letterCount = 0, space = 0;

    for (int i = convert.length(); i >= 0; i--)
    {
        if (!isspace(convert[i]) && convert[i] != '\0')
        {
            letterCount++;
        }
        else if (isspace(convert[i]))
        {
            if (i - 1 == 0)
            {
                convert.insert(i, "ay");
            }
            else if (!isspace(convert[i + 1]))
            {
                cout << letterCount << endl;
                string temp;
                temp = convert[i + 1];
                temp += "ay";
                convert.erase(i + 1, 1);
                convert.insert(i+letterCount,temp);
                letterCount = 0;
            }
        }
    }

    return convert;
}
