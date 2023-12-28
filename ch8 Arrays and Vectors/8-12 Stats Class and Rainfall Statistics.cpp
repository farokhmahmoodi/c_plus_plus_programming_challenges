/*Create a Stats class whose member data includes an array capable of storing 30 double data values, and whose member functions 
include total, average, lowest, and highest functions for returning information about the data to the client program. These are 
general versions of the same functions you created for Programming Challenge 8, but now they belong to the Stats class, not the 
application program. In addition to these functions, the Stats class should have a Boolean storeValue function that accepts a 
double value from the client program and stores it in the array. It is the job of this function to keep track of how many values 
are currently in the array, so it will know where to put the next value it receives and will know how many values there are to 
process when it is carrying out its other functions. It is also the job of this function to make sure that no more than 30 values 
are accepted. If the storeValue function is able to successfully store the value sent to it, it should return true to the client 
program. However, if the client program tries to store a thirty-first value, the function should not store the value and should 
return false to the client program.

The client program should create and use a Stats object to carry out the same rainfall analysis requested by Programming 
Challenge 8. Notice that the Stats object does no I/O. All input and output is done by the client program.*/

#include <iostream>
#include <iomanip>
#include "Stats.h"
using namespace std;

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
