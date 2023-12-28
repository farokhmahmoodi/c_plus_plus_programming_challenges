/*Write a program that can be used by a ski resort to keep track of local snow conditions for one week. It should have a seven-element array of structures or class objects, 
where each structure or object holds a date and the number of inches of snow in the base on that date. The program should have the user input the name of the month, the starting and ending date of the seven-day period being measured, 
and then the seven base snow depths. The program should then sort the data in ascending order by base depth and display the results. Here is the beginning of a sample report.

Snow Report December 12 − 18
   Date Base
    13  42.3
    12  42.5
    14  42.8*/

#include <iostream>
#include <iomanip>
#include <string>
#include "SnowReport.h"
using namespace std;

const int SIZE = 7;

void getData(string&, int&, int&);
void inputData(SnowReport[], string, int, int, int);
void sortData(SnowReport[], int);
void swap(SnowReport&, SnowReport&);
void displayReport(const SnowReport[], int, string);

int main()
{
	SnowReport a[SIZE];
	string monthName;
	int startDate, endDate;

	getData(monthName, startDate, endDate);
	inputData(a, monthName, SIZE, startDate, endDate);
	sortData(a, SIZE);
	displayReport(a, SIZE, monthName);

	return 0;
}

void getData(string& monthName, int& startDate, int& endDate)
{
	cout << "Enter name of month: ";
	getline(cin, monthName);
	do
	{
		cout << "Enter start date: ";
		cin >> startDate;
		if (startDate < 1 || startDate > 24)
			cout << "Input error. Start date cannot be less than 1 or greater than 24." << endl;
	} while (startDate < 1 || startDate > 24);
	do
	{
		cout << "Enter end date: ";
		cin >> endDate;
		if (endDate != startDate + 7)
			cout << "Input error. End date input is not 7 days later than start date." << endl;
	} while (endDate != startDate + 7);
}

void inputData(SnowReport a[], string name, int size, int startDate, int endDate)
{
	int s = startDate;
	double d;

	for (int i = 0; i < size; i++)
	{
		if (s <= endDate)
			a[i].setDate(s);
		do
		{
			cout << "Enter snow depths for " << name << " " << s
				<< ": ";
			cin >> d;
			if (d < 0.0)
				cout << "Input error. snow depths cannot be less than 0." << endl;
		} while (d < 0.0);
		a[i].setInches(d);
		if (s < endDate)
			s++;
	}
}

void sortData(SnowReport a[], int size) //selection sort
{
	int minIndex;
	double minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = a[start].getInches();
		for (int index = start + 1; index < size; index++)
		{
			if (a[index].getInches() < minValue)
			{
				minValue = a[index].getInches();
				minIndex = index;
			}
		}
		swap(a[minIndex], a[start]);
	}
}

void swap(SnowReport& a, SnowReport& b)
{
	SnowReport temp = a;
	a = b;
	b = temp;
}

void displayReport(const SnowReport a[], int size, string monthName)
{
	cout << endl << "Snow Report " << monthName << " "
		<< a[0].getDate() << " - " << a[size - 1].getDate() << endl;
	cout << setw(10) << "Date" << setw(10) << "Base" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << setw(9) << a[i].getDate() << setw(11) << fixed << showpoint 
			<< setprecision(1) << a[i].getInches() << endl;
	}

}