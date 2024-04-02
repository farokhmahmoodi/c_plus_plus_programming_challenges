/*A palindrome is a string such as “madam”, “radar”, “dad”, and “I”, that reads the same forwards and backwards. The empty 
string is regarded as a palindrome. Write a recursive function

bool isPalindrome(string str, int lower, int upper)

that returns true if and only if the part of the string str in positions lower through upper (inclusive at both ends) is a 
palindrome. Test your function by writing a main function that repeatedly asks the user to enter strings terminated by the 
ENTER key. These strings are then tested for palindromicity. The program terminates when the user presses the ENTER key 
without typing any characters before it.*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string, int, int);

int main()
{
	string s;
	
	do
	{
		cout << "Enter a string:";
		getline(cin, s);
		if (s.length() != 0)
		{
			if (isPalindrome(s, 0, s.length()))
				cout << "String entered is a palindrome.\n";
			else
				cout << "String entered is not a palindrome.\n";
		}
	} while (s.length() > 0);

	return 0;
}

bool isPalindrome(string str, int lower, int upper)
{
	if (str[lower] == str[upper])
	{
		return true;
	}
	else
		return false;
}
