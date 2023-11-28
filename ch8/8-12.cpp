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
			cout << "Enter rainfal for month " << (i + 1) << ": ";
			cin >> value;
			if (value < 0)
				cout << "INPUT ERROR. value must be greater than or equal to 0." << endl;
		} while (value < 0);



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
	cout << "Lowest rainfall: " << a.getValue(a.lowest()) << " inches" << endl;
	cout << "Most rainfall: " << a.getValue(a.highest()) << " inches" << endl;
}
