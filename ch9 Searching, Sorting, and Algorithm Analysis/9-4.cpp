#include <iostream>
#include <iomanip>
#include "BattingAvg.h"

const int SIZE = 12;

void inputData(BattingAvg [], int);
void sortData(BattingAvg[], int);
void swap(BattingAvg&, BattingAvg&);
void displayReport(const BattingAvg[], int);

int main()
{
	BattingAvg a[SIZE];
	inputData(a, SIZE);
	cout << "Here is unsorted data." << endl;
	displayReport(a, SIZE);
	sortData(a, SIZE);
	cout << endl << "Here is sorted data from highest to lowest batting average." << endl;
	displayReport(a, SIZE);
	return 0;
}

void inputData(BattingAvg a[], int size)
{
	string n;
	double b;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter name for player " << (i + 1)
			<< ": ";
		getline(cin, n);
		a[i].setName(n);
		do
		{
			cout << "Enter batting average for player " << (i + 1)
				<< ": ";
			cin >> b;
			if (b < 0.0)
				cout << "Input error. average cannot be less than 0." << endl;
		} while (b < 0.0);
		a[i].setAvg(b);
		cin.ignore();
	}
}

void sortData(BattingAvg a[], int size)
{
	int minIndex;
	double minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = a[start].getAvg();
		for (int index = start + 1; index < size; index++)
		{
			if (a[index].getAvg() > minValue)
			{
				minValue = a[index].getAvg();
				minIndex = index;
			}
		}
		swap(a[minIndex], a[start]);
	}
}

void swap(BattingAvg& a, BattingAvg& b)
{
	BattingAvg temp = a;
	a = b;
	b = temp;
}

void displayReport(const BattingAvg a[], int size)
{
	cout << endl << setw(40) << "Batting Average Report" << endl;
	cout << "----------------------------------------------------" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i].getName() << setw(15) <<
			fixed << showpoint << setprecision(3) << a[i].getAvg() << endl;
	}
}