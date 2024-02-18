/*Write a function named replaceSubstring. The function should accept three C-string or string object arguments. 
Let’s call them string1, string2, and string3. It should search string1 for all occurrences of string2. 
When it finds an occurrence of string2, it should replace it with string3. For example, suppose the three 
arguments have the following values:

string1:          "the dog jumped over the fence"
string2:          "the"
string3:          "that"

With these three arguments, the function would return a string object with the value “that dog jumped over 
that fence”. Demonstrate the function in a complete program.*/

#include <iostream>
using namespace std;

string replaceSubstring(const char*, const char*, const char*);

int main()
{
    const int LENGTH = 101;
    char* string1 = new char[LENGTH],
        *string2 = new char[LENGTH], *string3 = new char[LENGTH];
    
    cout << "This program asks user to enter 3 strings(each string no longer than "
        << LENGTH - 1 << " characters)." << endl << "Lets call them string1, string2, and string3." 
        << endl << "It will search string1 for all occurrences of string2." << endl
        << "When it finds an occurrence of string2,"
        << "it will replace it with string3." << endl;
    cout << "Enter string1:";
    cin.getline(string1, LENGTH);
    cout << "Enter string2:";
    cin.getline(string2, LENGTH);
    cout << "Enter string3:";
    cin.getline(string3, LENGTH);
    cout << replaceSubstring(string1, string2, string3) << endl;

    return 0;
}

string replaceSubstring(const char* string1, const char* string2, const char* string3)
{
    int index = 0;
    string s1 = string1;

    while (isprint(string1[index]) && string1[index] != '\0')
    {
        if (index == s1.find(string2))
        {
            s1.replace(index, strlen(string2), string3);
        }
        index++;
    }

    return s1;
}
