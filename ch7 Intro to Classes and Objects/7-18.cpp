/*
*/

#include <iostream>
#include <iomanip>
#include "Fish.h"
using namespace std;



int main()
{
	Fish a;
	int choice;

	do {
		cout << "Welcome to Fishing Game! Enter choice from menu below." << endl;
		cout << "1. Play" << endl;
		cout << "2. Quit" << endl;
		cin >> choice;
		if (choice < 1 || choice > 2)
			cout << "Input error. please enter valid choice from menu." << endl;
	} while (choice < 1 || choice > 2);
	while (choice != 2)
	{
		switch (choice)
		{
		case 1:
			cout << "Now we roll a dice to determine what fish you will catch." << endl;
			a.diceRoll();
			cout << "Fish caught: " << a.getFishCaught() << endl;
			cout << "Points Earned: " << a.getPointsEarned() << endl;
			break;
		}
		cout << "Would you like to play another round? (1 for yes , 2 for no)" << endl;
		cin >> choice;
		while (choice < 1 || choice > 2)
		{
			cout << "Input error. Please enter valid choice." << endl;
			cout << "Would you like to play another round? (1 for yes , 2 for no)" << endl;
			cin >> choice;
		}
	}
	a.displayTotalPoints();
	return 0;
}

