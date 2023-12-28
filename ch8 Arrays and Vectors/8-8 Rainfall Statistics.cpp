/*Write a modular program that analyzes a year’s worth of rainfall data. In addition to main, the program should have a getData 
function that accepts the total rainfall for each of 12 months from the user and stores it in an array holding double numbers. 
It should also have four value-returning functions that compute and return to main the totalRainfall, averageRainfall, 
driestMonth, and wettestMonth. These last two functions return the number of the month with the lowest and highest rainfall 
amounts, not the amount of rain that fell those months. Notice that this month number can be used to obtain the amount of rain 
that fell those months. This information should be used either by main or by a displayReport function called by main to print a 
summary rainfall report similar to the following:


   2019 Rain Report for Springdale County

Total rainfall: 23.19 inches
Average monthly rainfall: 1.93 inches
The least rain fell in January with 0.24 inches.
The most rain fell in April with 4.29 inches.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 12;
void getData(double[], const string[]);
double totalRainfall(const double[]);
double averageRainfall(const double[]);
int driestMonth(const double[]);
int wettestMonth(const double[]);
void displayReport(const double[], const string[]);

int main()
{
	double a[SIZE];
	string b[] = { "January", "February" , "March", "April", "May", 
		"June", "July", "August", "September", "October", "November", "December" };
	getData(a,b);
	totalRainfall(a);
	averageRainfall(a);
	displayReport(a,b);
	return 0;
}

void getData(double a[], const string b[])
{
	for (int i = 0; i < SIZE; i++)
	{
		do
		{
			cout << "Enter total rainfall for " << b[i] << ": ";
			cin >> a[i];
			if (a[i] < 0)
				cout << "Input error. must be greater than or equal to 0." << endl;
		} while (a[i] < 0);
	}
}

double totalRainfall(const double a[])
{
	double total = 0.0;
	for (int i = 0; i < SIZE; i++)
	{
		total += a[i];
	}
	return total;
}

double averageRainfall(const double a[])
{
	return totalRainfall(a) / SIZE;
}

int driestMonth(const double a[])
{
	int dry = 0;
	double rain = a[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (a[i] < rain)
		{
			rain = a[i];
			dry = i;
		}
	}
	return dry;
}

int wettestMonth(const double a[])
{
	int wet;
	double rain = a[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (a[i] > rain)
		{
			rain = a[i];
			wet = i;
		}
	}
	return wet;
}

void displayReport(const double a[], const string b[])
{
	cout << endl << setw(15) << "2019 Rain Report for Springdale County" << endl << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Total rainfall: " << totalRainfall(a) << " inches" << endl;
	cout << "Average monthly rainfall: " << averageRainfall(a) << " inches" << endl;
	cout << "The least rain fell in ";
	for (int i = 0; i < SIZE; i++)
	{
		if (driestMonth(a) == i)
		{
			cout << b[i] << " with " << a[i] << " inches." << endl;
			break;
		}
	}
	cout << "The most rain fell in ";
	for (int i = 0; i < SIZE; i++)
	{
		if (wettestMonth(a) == i)
		{
			cout << b[i] << " with " << a[i] << " inches." << endl;
			break;
		}
	}
}
