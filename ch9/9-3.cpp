#include "TicketCombosBinary.h"

int main()
{
	TicketCombosBinary a;
	int value;
	char choice;

	do {
		cout << "Enter this week's winning five digit number: ";
		cin >> value;
		a.winner(value);
		cin.ignore();
		cout << "Would you like to enter another winning number? (y/n)";
		cin >> choice;
	} while (toupper(choice) == 'Y');
	return 0;
}



