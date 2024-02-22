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
    int letterCount = 0;

    for (int i = convert.length(); i >= 0; i--)
    {
        if (!isspace(convert[i]) && convert[i] != '\0')
        {
            letterCount++;
        }
        else if (isspace(convert[i]))
        {
            if (i == 0)
            {
                if (isalnum(convert[i]))
                {
                    convert.insert(i+1, "ay");
                }
            }
            else
            {
                int x = i + 1;
                while (!isalnum(convert[x]) && convert[x] != '\0')
                {
                    x++;
                }
                if (convert[x] != '\0')
                {
                    string temp;
                    temp = convert[x];
                    temp += "ay";
                    convert.erase(x, 1);
                    convert.insert(i + letterCount, temp);
                    letterCount = 0;
                }
            }
        }
    }

    return convert;
}
