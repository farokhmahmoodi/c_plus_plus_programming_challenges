// 
//

#include <iostream>
#include <iomanip>
#include "Stats.h"
using namespace std;


void inputData(Stats&);
void displayReport(Stats&);
string getMonth(int);

int main()
{
	Stats a;
	int months;
	double value;

	do
	{
		cout << "Enter number of months you wish to input rainfall data for(greater than or equal to 0): ";
		cin >> months;
	} while (months <= 0);
	for (int i = 0; i < months; i++)
	{
		do {
			cout << "Enter rainfall for month " << (i + 1) << ": ";
			cin >> value;
			if (value < 0)
				cout << "INPUT ERROR. value must be greater than or equal to 0." << endl;
		} while (value < 0);

		if (!a.storeValue(value))
		{
			cout << "Array is full. Cannot add more values." << endl;
		}

	}
	displayReport(a);
	return 0;
}



void displayReport(Stats& a)
{
	cout << setw(30) << "Monthly Rain Report" << endl;
	cout << "------------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Total rainfall: " << a.total() << " inches" << endl;
	cout << "Average rainfall: " << a.average() << " inches" << endl;
	cout << "The least rain fell in " << getMonth(a.lowest()) << " with " << a.getValue(a.lowest()) << " inches" << endl;
	cout << "The most rain fell in " << getMonth(a.highest()) << " with " << a.getValue(a.highest()) << " inches" << endl;
}

string getMonth(int m)
{

	string month;
	switch (m + 1)
	{
	case 1: 
		month = "January";
		break;
	case 2: 
		month = "February";
		break;
	case 3: 
		month = "March";
		break;
	case 4: 
		month = "April";
		break;
	case 5: 
		month = "May";
		break;
	case 6: 
		month = "June";
		break;
	case 7: 
		month = "July";
		break;
	case 8: 
		month = "August";
		break;
	case 9: 
		month = "September";
		break;
	case 10: 
		month = "October";
		break;
	case 11: 
		month = "November";
		break;
	case 12: 
		month = "December";
		break;
	}
	return month;
}
