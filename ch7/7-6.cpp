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
#include "Tips.h"
using namespace std;



int main()
{
	double bill, tipRate;
	int choice;

	do
	{
		cout << "enter choice below on how you want to create Tips object." << endl;
		cout << "1. Tips object with default tax rate of .085" << endl;
		cout << "2. Tips object with your own tax rate entered (must be greater than or equal to 0 or it will default to .085)" << endl;
		cin >> choice;
	} while (choice < 1 || choice > 2);
	switch (choice)
	{
	case 1:
		{
		Tips a;
		cout << "Tax rate entered in object is " << a.getTaxRate() << endl;

		cout << "Press any number to continue to retrieve tip amounts from various bill totals and desired tip rate (or -1 to quit)" << endl;
		cin >> choice;

			while (choice != -1) //sentinel controlled loop with sentinel value of -1
			{
				do
				{
					cout << "enter bill amount greater than or equal to 0: ";
					cin >> bill;
				} while (bill < 0);
				do
				{
					cout << "enter tip rate as decimal greater than or equal to 0: ";
					cin >> tipRate;
				} while (tipRate < 0);
				cout << fixed << showpoint << setprecision(2);
				cout << "Bill: $" << bill << endl;
				cout << "Tip Rate: " << tipRate << endl;
				cout << "Tip Amount: $" << a.computeTip(bill, tipRate) << endl;
				cout << "Press any number to continue to retrieve tip amounts from various bill totals and desired tip rate (or -1 to quit)" << endl;
				cin >> choice;
			}
		}
		break;
	case 2:
		double t;
		do
		{
			cout << "enter taxRate as decimal greater than or equal to 0: ";
			cin >> t;
		} while (t < 0);
		Tips a(t);
		cout << "Tax rate entered in object is " << a.getTaxRate() << endl;
		cout << "Press any number to continue to retrieve tip amounts from various bill totals and desired tip rate (or -1 to quit)" << endl;
		cin >> choice;

		while (choice != -1)
		{
			do
			{
				cout << "enter bill amount greater than or equal to 0: ";
				cin >> bill;
			} while (bill < 0);
			do
			{
				cout << "enter tip rate as decimal greater than or equal to 0: ";
				cin >> tipRate;
			} while (tipRate < 0);
			cout << fixed << showpoint << setprecision(2);
			cout << "Bill: $" << bill << endl;
			cout << "Tip Rate: " << tipRate << endl;
			cout << "Tip Amount: $" << a.computeTip(bill, tipRate) << endl;
			cout << "Press any number to continue to retrieve tip amounts from various bill totals and desired tip rate (or -1 to quit)" << endl;
			cin >> choice;
		}
		break;
	}

	return 0;
}

