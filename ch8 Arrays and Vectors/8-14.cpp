// 
//

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




