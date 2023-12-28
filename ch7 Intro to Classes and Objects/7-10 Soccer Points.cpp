/*Youth soccer teams earn 3 points for each win, 1 point for each tie, and 0 points for each loss. Create a teamScore class that has variables to hold the teamName, and to count the number of wins, ties, and losses. 
The constructor should accept the team name and initialize the three counters to 0. The class should have member functions updateWins, updateTies, and updateLosses that each add 1 to the appropriate counter. It should also have a displayRecord function that produces a nicely formatted display containing the team name, number of wins, ties, and losses so far, and the computed points. 
Demonstrate the class by creating a menu-driven program that creates a teamScore object and then includes a loop to display a menu and call the appropriate class function depending on the user-entered menu choice.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "teamScore.h"
using namespace std;

int main()
{
	int choice;
	string n;
	cout << "enter name of team:";
	getline(cin, n);
	teamScore a(n);
	do{
		cout << "Choose option from menu below." << endl;
		cout << "1. Update Wins" << endl;
		cout << "2. Update Ties" << endl;
		cout << "3. Update Losses" << endl;
		cout << "4. Display Record" << endl;
		cout << "5. quit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			a.updateWins();
			break;
		case 2:
			a.updateTies();
			break;
		case 3:
			a.updateLosses();
			break;
		case 4:
			a.displayRecord();
			break;
		}

	} while (choice != 5);

	return 0;
}

