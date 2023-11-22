// 8-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 12;
void getData(double []);
double totalRainfall(const double[]);
double averageRainfall(const double[]);
int driestMonth(const double[]);
int wettestMonth(const double[]);
void displayReport(const double[]);

int main()
{
	double a[SIZE];
	string b[] = {"January", "February" , "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	getData(a);
	totalRainfall(a);
	averageRainfall(a);
	displayReport(a);
	return 0;
}

void getData(double a[])
{
	for (int i = 0; i < SIZE; i++)
	{
		do
		{
			cout << "Enter total rainfall for month " << (i + 1) << ": ";
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
	int dry;
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

void displayReport(const double a[])
{
	cout << endl << setw(15) << "2019 Rain Report for Springdale County" << endl << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Total rainfall: " << totalRainfall(a) << " inches" << endl;
	cout << "Average monthly rainfall: " << averageRainfall(a) << " inches" << endl;
	cout << "The least rain fell in ";
	cout << "The most rain fell in ";
}