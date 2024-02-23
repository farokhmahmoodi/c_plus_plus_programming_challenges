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

    cout << "Enter a sentence and the program will convert it to Pig Latin:";
    getline(cin, input);
    cout << pigLatin(input) << endl;

    return 0;
}

string pigLatin(string in)
{
    string convert = in;
    int index = convert.length();

    while (index >= 0)
    {
        if (isspace(convert[index]))
        {
            int x = index + 1;
            while (convert[x] != '\0' && isspace(convert[x]))
            {
                x++;
            }
            string temp;
            temp = convert[x];
            int y = x + 1; //letter count starting at 1
            while (convert[y] != '\0' && !isspace(convert[y]))
            {
                y++;
            }
            if (y == x + 1)
            {
                convert.insert(y,"ay");
            }
            if (y > x + 1)
            {
                temp += "ay";
                convert.insert(y, temp);
            }
        }
        index--;
    }

    return convert;
}
