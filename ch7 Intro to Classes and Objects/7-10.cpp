//
/*
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
//#include <windows.h>
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

