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
    int index = convert.length(), letterCount = 0;

    while (index >= 0)
    {
        if (isalpha(convert[index]))
        {
            letterCount++;
        }
        if (isspace(convert[index]))
        {
            int x = index + 1;
            while (!isalpha(convert[x]) && convert[x] != '\0')
            {
                x++;
            }
            if (convert[x] != '\0' && letterCount > 1)
            {
                string temp;
                temp = convert[x];
                temp += "ay";
                convert.erase(x, 1);
                convert.insert(index + letterCount, temp);
            }
            letterCount = 0;
        }
        index--;
    }

    return convert;
}
