/*You know that the == operator can be used to test if two string objects are equal. However, you will recall that they are not considered equal, even when they hold the exact same letters, if the cases of any letters are different. 
So, for example, if name1 = "Jack" and name2 = "JACK", they are not considered the same. 
Write a program that asks the user to enter two names and stores them in string objects. It should then report whether or not, ignoring case, they are the same.

To help the program accomplish its task, it should use two functions in addition to main, upperCaseIt() and sameString(). Here are their function headers.

string upperCaseIt(string s)
Boolean sameString (string s1, string s2)

The sameString function, which receives the two strings to be compared, will need to call upperCaseIt for each of them before testing if they are the same. The upperCaseIt function should use a loop so that it can call the toupper function for every character in the string it receives before returning it to the sameString function.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
using namespace std;

string upperCaseIt(string s);
bool sameString(string s1, string s2);

int main()
{
	string name1, name2;

	cout << "enter name for person 1: ";
	cin >> name1;
	cout << "enter name for person 2: ";
	cin >> name2;
	if (sameString(name1, name2) == true)
		cout << "these names are the same.\n";
	else
		cout << "these names are different.\n";
	return 0;
}

string upperCaseIt(string s)
{
	for (int letter = 0; letter < s.length(); letter++)
	{
		s[letter] = toupper(s[letter]);
	}
	//cout << s << endl;
	return s;
}

bool sameString(string s1, string s2)
{
	string name1, name2;
	name1 = upperCaseIt(s1);
	name2 = upperCaseIt(s2);
	if (name1 == name2)
		return true;
	else
		return false;

}