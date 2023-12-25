// start c++ 10th ed. maddis ch6_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
dsfasf
asdfasdfasdfsad
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



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
