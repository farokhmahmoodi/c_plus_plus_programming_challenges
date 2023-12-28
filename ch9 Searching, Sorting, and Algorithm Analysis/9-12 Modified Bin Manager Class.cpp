#include <iostream>
#include "BinManager.h"
#include <iomanip>

void displayMainMenu();
void displaySubMenu(BinManager&, int);
bool validateChoice(int);
bool validateInput(BinManager&, string);
void displayReport(BinManager&);

int main()
{
	string names[10] = { " ", "regular pliers", "n. nose pliers", "screwdriver",
	"p. head screw driver", "wrench-large", "wrench-small", "drill",
	"cordless drill", "hand saw" };
	int qties[10] = { 0,25,5,25,6,7,18,51,16,12 };
	BinManager a(10, names, qties);
	int choice;

	do
	{
		do
		{
			displayMainMenu();
			cin >> choice;
		} while (!validateChoice(choice));
		cin.ignore();
		if (choice != 4)
			displaySubMenu(a, choice);
		else
			displayReport(a);
	} while (choice != 4);

	return 0;
}

void displayMainMenu()
{
	cout << setw(30) << "Welcome to Warehouse Bin Management Program" << endl;
	cout << "Select an option from menu below." << endl;
	cout << "1. Add Parts  " << "2. Remove Parts  "
		<< "3. Display Report  " << "4. Quit" << endl;
}

void displaySubMenu(BinManager& a, int choice)
{
	int q;
	string subchoice;
	switch (choice)
	{
	case 1:
		do
		{
			cout << endl << "Enter item description of bin you want to add parts to." << endl;
			for (int i = 1; i < 10; i++)
			{
				if (i % 3 == 0)
					cout << a.getDescription(i) << " " 
					<< a.getQuantity(a.getDescription(i)) << endl;
				else
					cout << a.getDescription(i) << " " 
					<< a.getQuantity(a.getDescription(i)) << "    ";
			}
			getline(cin,subchoice);
			if (!validateInput(a,subchoice))
				cout << "Item description not found." << endl;
		} while (!validateInput(a, subchoice));
		cout << "How many parts do you want to add? ";
		cin >> q;
		if (!a.addParts(subchoice, q))
			cout << "Parts could not be added." << endl;
		break;
	case 2:
		do
		{
			cout << endl << "Enter item description of bin you want to remove parts from." << endl;
			for (int i = 1; i < 10; i++)
			{
				if (i % 3 == 0)
					cout << a.getDescription(i) << " " 
					<< a.getQuantity(a.getDescription(i)) << endl;
				else
					cout << a.getDescription(i) << " " 
					<< a.getQuantity(a.getDescription(i)) << "    ";
			}
			getline(cin,subchoice);
			if (!validateInput(a, subchoice))
				cout << "Item description not found." << endl;
		} while (!validateInput(a, subchoice));
		cout << "How many parts do you want to remove? ";
		cin >> q;
		if (!a.removeParts(subchoice, q))
			cout << "Parts could not be removed." << endl;
		break;
	case 3:
		displayReport(a);
		break;
	}
}

bool validateChoice(int choice)
{
	if (choice < 1 || choice > 4)
	{
		cout << "Invalidate choice." << endl;
		return false;
	}

	else
		return true;
}

bool validateInput(BinManager &a, string input) //validate item description user input
{
	for (int i = 1; i < 10; i++)
	{
		if (input == a.getDescription(i))
			return true;
	}
	return false;
}

void displayReport(BinManager& a)
{
	cout << endl;
	for (int i = 1; i < 10; i++)
	{
		if (i % 3 == 0)
			cout << a.getDescription(i)
			<< " " << a.getQuantity(i) << endl;
		else
			cout << a.getDescription(i)
			<< " " << a.getQuantity(i) << "    ";
	}
	cout << endl;
}

