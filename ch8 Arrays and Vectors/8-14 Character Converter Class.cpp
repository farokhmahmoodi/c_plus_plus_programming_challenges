/*Create a CharConverter class that performs various operations on strings. It should have the following two public member 
functions to start with. Your instructor may ask you to add more functions to the class.

The uppercase member function accepts a string and returns a copy of it with all lowercase letters converted to uppercase. 
If a character is already uppercase or is not a letter, it should be left alone.

The properWords member function accepts a string of words separated by spaces and returns a copy of it with the first letter of 
each word converted to uppercase.

Write a simple program that uses the class. It should prompt the user to input a string. Then it should call the properWords 
function and display the resulting string. Finally, it should call the uppercase function and display this resulting string. 
The program should loop to allow additional strings to be converted and displayed until the user chooses to quit.*/

#include <iostream>
#include "CharConverter.h"

int main()
{
	CharConverter a;
	string b;
	char choice;
	do {
		cout << "Enter a string to be converted to uppercase and proper words:";
		getline(cin, b);
		cout << "Proper Words:" << a.properWords(b) << endl;
		cout << "Uppercase:" << a.uppercase(b) << endl;
		cout << "Would you like to convert another string? ('Y' for yes, 'N' for no):";
		cin >> choice;
		cin.ignore();
	} while (toupper(choice) != 'N');
	return 0;
}




