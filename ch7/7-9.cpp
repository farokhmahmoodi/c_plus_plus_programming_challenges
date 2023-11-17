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
using namespace std;

struct CorpData
{
	string name;
	double q1Sales, 
		q2Sales, 
		q3Sales, 
		q4Sales;

	CorpData(string n, double q1, double q2, double q3, double q4)
	{
		name = n;
		q1Sales = q1;
		q2Sales = q2;
		q3Sales = q3;
		q4Sales = q4;
	}
};

void displayReport(const CorpData&);


int main()
{
	CorpData East("East", 4547.42, 8965.25, 98564.45, 23556.67);
	CorpData West("West", 6787.67, 879.25, 2345.54, 5656.87);
	CorpData North("North", 7678.56, 345.87, 234.98, 561.98);
	CorpData South("South", 543.65, 1235.87, 2348.56, 564.76);

	displayReport(East);
	displayReport(West);
	displayReport(North);
	displayReport(South);

	return 0;
}

void displayReport(const CorpData& a)
{
	double total = a.q1Sales + a.q2Sales + a.q3Sales + a.q4Sales;
	double avg = total / 4.0;

	cout << setw(20) << "Sales Report" << endl;
	cout << "-----------------------------" << endl;
	cout << "Division Name: " << a.name << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Q1 Sales: $" << a.q1Sales << endl;
	cout << "Q2 Sales: $" << a.q2Sales << endl;
	cout << "Q3 Sales: $" << a.q3Sales << endl;
	cout << "Q4 Sales: $" << a.q4Sales << endl;
	cout << "Sales Total: $" << total << endl;
	cout << "Quarterly Average: $" << avg << endl << endl;
}