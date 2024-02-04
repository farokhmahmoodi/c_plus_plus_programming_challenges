/*A palindrome is a string that reads the same backward as forward. For example, the words mom, dad, madam, and 
radar are all palindromes. Write a class Pstring that is derived from the STL string class. The Pstring class 
adds a member function

bool isPalindrome( )
that determines whether the string is a palindrome. Include a constructor that takes an STL string object as parameter 
and passes it to the string base class constructor. Test your class by having a main program that asks the user to enter 
a string. The program uses the string to initialize a Pstring object and then calls isPalindrome() to determine whether 
the string entered is a palindrome.

You may find it useful to use the subscript operator [] of the string class: If str is a string object and k is an 
integer, then str[k] returns the character at position k in the string.*/

#include <iostream>
#include <string>
using namespace std;

class Pstring : public string
{
private:
    string a;
public:
    Pstring(const string &obj) : string(obj)
    {
        a = obj;
    }
    bool isPalindrome()
    {
        for (int i = 0, x = a.size() - 1; i < a.size(); i++,x--)
        {
            if (i == a.size() - 1) //examining last character in string
                return true;
            else if (tolower(a[i]) != tolower(a[x]))
                return false;
        }
    }
};

int main()
{
    string s;
    int choice;

    do
    {
        cout << "Enter a string and the program will determine " <<
            "if it is a palindrome or not:";
        getline(cin, s);
        Pstring test(s);
        if (test.isPalindrome())
            cout << "String " << s << " is a palindrome." << endl;
        else
            cout << "String " << s << " is not a palindrome." << endl;
        do
        {
            cout << "Would you like to run this program again? (1 for yes/2 for no):";
            cin >> choice;
            cin.ignore();
            if (choice != 1 && choice != 2)
                cout << "Invalid input for choice." << endl;
        } while (choice != 1 && choice != 2);
    } while (choice != 2);
    
    return 0;
}

