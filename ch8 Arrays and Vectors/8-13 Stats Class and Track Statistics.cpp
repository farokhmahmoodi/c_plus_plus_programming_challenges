/*Write a client program that uses the Stats class you created for Programming Challenge 12 to store and analyze “best” 100-yard 
dash times for each of the 15 runners on a track team. All I/O should be done by the client program. In addition to main, it 
should have two other functions: a getData function to accept input from the user and send it to the Stats object and a 
createReport function that creates and displays a report similar to the one shown here,


         Tulsa Tigers Track Team

Average 100 yard-dash time: 11.16 seconds
Slowest runner: Jack        13.09 seconds
Fastest runner: Will        10.82 seconds*/

#include <iostream>
#include "Stats.h"
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 15;

void getData(Stats&, string[]);
void createReport(Stats&, const string[]);

int main()
{
	Stats a;
	string names[SIZE];
	getData(a, names);
	createReport(a, names);
	return 0;
}

void getData(Stats& a,string b[])
{
	double v;
	string n;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter name of runner " << (i + 1) << ": ";
		getline(cin, n);
		b[i] = n;
		do {
			cout << "Enter 100 yard dash time for runner " << (i + 1) << ": ";
			cin >> v;
			if (v <= 0)
				cout << "INPUT ERROR. value must be greater than 0." << endl;
		} while (v <= 0);

		if (!a.storeValue(v))
		{
			cout << "Array is full. Cannot add more values." << endl;
		}
		cin.ignore();
	}
}

void createReport(Stats& a, const string b[])
{
	cout << setw(30) << "Track Team Report" << endl;
	cout << "------------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Average 100 yard-dash time:   " << a.average() << " seconds" << endl;
	cout << "Slowest runner: " << b[a.highest()] << setw(30) << a.getValue(a.highest()) << " seconds" << endl;
	cout << "Fastest runner: " << b[a.lowest()] << setw(30) << a.getValue(a.lowest()) << " seconds" << endl;
}