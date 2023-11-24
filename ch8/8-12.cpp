// 
//

#include <iostream>
#include <iomanip>
#include "Stats.h"
using namespace std;


void inputData(Stats&);
void displayReport(Stats&);

int main()
{
	Stats a;

	inputData(a);
	displayReport(a);

	return 0;
}

void inputData(Stats& a)
{
	double v;
	do {
		do {
			cout << "Enter a rainfall value to store in array: ";
			cin >> v;
			if (v < 0)
				cout << "INPUT ERROR. value must be greater than 0." << endl;
		} while (v < 0);
	} while (a.storeValue(v));
}

void displayReport(Stats& a)
{
	cout << setw(30) << "Monthly Rain Report" << endl;
	cout << "------------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Total rainfall: " << a.total() << " inches" << endl;
	cout << "Average rainfall: " << a.average() << " inches" << endl;
	cout << "Lowest rainfall: " << a.lowest() << " inches" << endl;
	cout << "Most rainfall: " << a.highest() << " inches" << endl;
}
