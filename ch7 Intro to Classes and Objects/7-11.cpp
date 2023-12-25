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
#include <windows.h>
using namespace std;

struct MonthlyBudget
{
	double housing,
		utilities_internet_phone,
		household_expenses,
		transportation,
		food,
		medical,
		insurance,
		entertainment,
		clothing,
		miscellaneous;
};

void placeCursor(HANDLE, int, int); 
void displayPrompts(HANDLE);
void getUserInput(HANDLE, MonthlyBudget&);
void displayData(HANDLE, MonthlyBudget, MonthlyBudget);

int main()
{
	MonthlyBudget a
	{
		1200,
		215,
		65,
		50,
		250,
		30,
		100,
		120,
		75,
		50
	};

	MonthlyBudget b;

	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	displayPrompts(screen);
	getUserInput(screen, b);
	displayData(screen, a, b);


	return 0;
}

void placeCursor(HANDLE screen, int row, int col)
{						//COORD is a defined C++ structure that
						//holds a pair of X and Y coordinates
	COORD position;
	position.Y = row;
	position.X = col;
	SetConsoleCursorPosition(screen, position);
}

void displayPrompts(HANDLE screen)
{
	placeCursor(screen, 3, 25);
	cout << "******** Monthly Budget Form **********" << endl;
	placeCursor(screen, 5, 25);
	cout << "Housing: " << endl;
	placeCursor(screen, 6, 25);
	cout << "Utilities, Internet & Phone: " << endl;
	placeCursor(screen, 7, 25);
	cout << "Household expenses: " << endl;
	placeCursor(screen, 8, 25);
	cout << "Transportation: " << endl;
	placeCursor(screen, 9, 25);
	cout << "Food: " << endl;
	placeCursor(screen, 10, 25);
	cout << "Medical: " << endl;
	placeCursor(screen, 11, 25);
	cout << "Insurance: " << endl;
	placeCursor(screen, 12, 25);
	cout << "Entertainment: " << endl;
	placeCursor(screen, 13, 25);
	cout << "Clothing: " << endl;
	placeCursor(screen, 14, 25);
	cout << "Miscellaneous: " << endl;
}

void getUserInput(HANDLE screen, MonthlyBudget& input)
{
	placeCursor(screen, 5, 33);
	cin >> input.housing;
	placeCursor(screen, 6, 53);
	cin >> input.utilities_internet_phone;
	placeCursor(screen, 7, 44);
	cin >> input.household_expenses;
	placeCursor(screen, 8, 40);
	cin >> input.transportation;
	placeCursor(screen, 9, 30);
	cin >> input.food;
	placeCursor(screen, 10, 33);
	cin >> input.medical;
	placeCursor(screen, 11, 35);
	cin >> input.insurance;
	placeCursor(screen, 12, 39);
	cin >> input.entertainment;
	placeCursor(screen, 13, 34);
	cin >> input.clothing;
	placeCursor(screen, 14, 39);
	cin >> input.miscellaneous;
}

void displayData(HANDLE screen, MonthlyBudget a, MonthlyBudget b)
{
	placeCursor(screen, 16, 0);
	double overBudget, underBudget;
	overBudget = underBudget = 0.0;
	cout << setw(20) << "Expenses compared to budget below." << endl;
	cout << "------------------------------------------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);

	cout << "Housing: ";
	if (a.housing > b.housing)
	{
		cout << "$" << a.housing - b.housing << " under budget" << endl;
		underBudget += a.housing - b.housing;
	}
	else if (a.housing == b.housing)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.housing - a.housing << " over budget" << endl;
		overBudget += b.housing - a.housing;
	}

	cout << "Utilities, internet & phone: ";
	if (a.utilities_internet_phone > b.utilities_internet_phone)
	{
		cout << "$" << a.utilities_internet_phone - b.utilities_internet_phone << " under budget" << endl;
		underBudget += a.utilities_internet_phone - b.utilities_internet_phone;
	}
	else if (a.utilities_internet_phone == b.utilities_internet_phone)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.utilities_internet_phone - a.utilities_internet_phone << " over budget" << endl;
		overBudget += b.utilities_internet_phone - a.utilities_internet_phone;
	}

	cout << "Household expenses: ";
	if (a.household_expenses > b.household_expenses)
	{
		cout << "$" << a.household_expenses - b.household_expenses << " under budget" << endl;
		underBudget += a.household_expenses - b.household_expenses;
	}
	else if (a.household_expenses == b.household_expenses)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.household_expenses - a.household_expenses << " over budget" << endl;
		overBudget += b.household_expenses - a.household_expenses;
	}

	cout << "Transportation: ";
	if (a.transportation > b.transportation)
	{
		cout << "$" << a.transportation - b.transportation << " under budget" << endl;
		underBudget += a.transportation - b.transportation;
	}
	else if (a.transportation == b.transportation)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.transportation - a.transportation << " over budget" << endl;
		overBudget += b.transportation - a.transportation;
	}

	cout << "Food: ";
	if (a.food > b.food)
	{
		cout << "$" << a.food - b.food << " under budget" << endl;
		underBudget += a.food - b.food;
	}
	else if (a.food == b.food)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.food - a.food << " over budget" << endl;
		overBudget += b.food - a.food;
	}

	cout << "Medical: ";
	if (a.medical > b.medical)
	{
		cout << "$" << a.medical - b.medical << " under budget" << endl;
		underBudget += a.medical - b.medical;
	}
	else if (a.medical == b.medical)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.medical - a.medical << " over budget" << endl;
		overBudget += b.medical - a.medical;
	}

	cout << "Insurance: ";
	if (a.insurance > b.insurance)
	{
		cout << "$" << a.insurance - b.insurance << " under budget" << endl;
		underBudget += a.insurance - b.insurance;
	}
	else if (a.insurance == b.insurance)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.insurance - a.insurance << " over budget" << endl;
		overBudget += b.insurance - a.insurance;
	}

	cout << "Entertainment: ";
	if (a.entertainment > b.entertainment)
	{
		cout << "$" << a.entertainment - b.entertainment << " under budget" << endl;
		underBudget += a.entertainment - b.entertainment;
	}
	else if (a.entertainment == b.entertainment)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.entertainment - a.entertainment << " over budget" << endl;
		overBudget += b.entertainment - a.entertainment;
	}

	cout << "Clothing: ";
	if (a.clothing > b.clothing)
	{
		cout << "$" << a.clothing - b.clothing << " under budget" << endl;
		underBudget += a.clothing - b.clothing;
	}
	else if (a.clothing == b.clothing)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.clothing - a.clothing << " over budget" << endl;
		overBudget += b.clothing - a.clothing;
	}

	cout << "Miscellaneous: ";
	if (a.miscellaneous > b.miscellaneous)
	{
		cout << "$" << a.miscellaneous - b.miscellaneous << " under budget" << endl;
		underBudget += a.miscellaneous - b.miscellaneous;
	}
	else if (a.miscellaneous == b.miscellaneous)
		cout << "on budget" << endl;
	else
	{
		cout << "$" << b.miscellaneous - a.miscellaneous << " over budget" << endl;
		overBudget += b.miscellaneous - a.miscellaneous;
	}

	cout << endl;
	cout << "Amount under budget this month: $" << underBudget << endl;
	cout << "Amount over budget this month: $" << overBudget << endl;
}