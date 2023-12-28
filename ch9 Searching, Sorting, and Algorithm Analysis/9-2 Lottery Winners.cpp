/*A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 five-digit “lucky” combinations. Write a program that initializes an array with these 
numbers and then lets the player enter this week’s winning five-digit number. The program should perform a linear search through 
the list of the player’s numbers and report whether or not one of the tickets is a winner this week. Here are the numbers:

13579	26791	26792	33445	55555	62483	77777	79422	85647	93121*/

#include "TicketCombos.h"

int main()
{
	TicketCombos a;
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

