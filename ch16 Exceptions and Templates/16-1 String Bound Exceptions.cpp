/*Write a class BCheckString that is derived from the STL string class. This new class will have two member 
functions:

A.)CheckString(string s) constructor that receives a string object passed by value and passes it on to the base 
class constructor.
B.)An char operator[](int k) function that throws a BoundsException object if k is negative or is greater 
than or equal to the length of the string. If k is within the bounds of the string, this function will 
return the character at position k in the string.

You will need to write the definition of the BoundsException class. Test your class with a main function that 
attempts to access characters that are within and outside the bounds of a suitably initialized BCheckString 
object.*/

#include <iostream>
#include <string>
using namespace std;

class BCheckString : public string
{
string str;
public:
	BCheckString(string s) : string(s)
	{
		str = s;
	}
	class BoundsException
	{
	public:
		int i;
		BoundsException(int a)
		{
			i = a;
		}
	};
	char operator[](int k)
	{
		if (k < 0 || k >= str.length())
		{
			throw BoundsException(k);
		}
		return str[k];
	}
};


int main()
{
	string in;
	int i;

	cout << "Enter a string:";
	getline(cin, in);
	BCheckString a(in);
	try
	{
		while (cout << "Enter an integer for index:" &&
			!(cin >> i)) {
			cin.clear(); //clear bad input flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
			cout << "Invalid input for integer." << endl;
		}
		cout << a[i] << " is at index " << i
			<< " of the string." << endl;
	}
	catch(BCheckString::BoundsException ex)
	{
		cout << "The index " << ex.i
			<< " is out of range.\n";
	}
	cout << "End of program.\n";

	return 0;
}
