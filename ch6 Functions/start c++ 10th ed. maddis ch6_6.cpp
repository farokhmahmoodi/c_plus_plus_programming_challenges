// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
dsfasf
asdfasdfasdfsad
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
using namespace std;

const double RATE_FOR_2KG_OR_LESS_PER_500_MILES = 3.10;
const double RATE_FOR_OVER_2KG_BUT_LESSTHAN_OREQUALTO_6KG_PER_500_MILES = 4.20;
const double RATE_FOR_OVER_6KG_BUT_LESSTHAN_OREQUALTO_10KG_PER_500_MILES = 5.30;
const double RATE_FOR_OVER_10KG_PER_500_MILES = 6.40;

double calculateCharge(double, int);

int main()
{

	double weight;
	int distance;

	do
	{
		cout << "enter weight of package in kg (greater than 0): ";
		cin >> weight;
		if (weight == 0)
			continue;
		while (weight <= 0)
		{
			cout << "enter weight of package in kg (greater than 0): ";
			cin >> weight;
			if (weight == 0)
				exit(0);
		}
		cout << "distance to be shipped in miles?(greater than 0): ";
		cin >> distance;
		while (distance <= 0)
		{
			cout << "distance to be shipped in miles?(greater than 0): ";
			cin >> distance;
		}
		cout << fixed << showpoint << setprecision(2);
		cout << "The charges to ship this package is $" << calculateCharge(weight, distance) << endl;
		cout << "enter weight of another package in kg (or 0 to quit): ";
		cin >> weight;
	} while (weight != 0);
	return 0;
}


double calculateCharge(double weight, int distance)
{
	if (weight <= 2)
	{
		if (distance % 500 == 0)
			return (distance / 500) * RATE_FOR_2KG_OR_LESS_PER_500_MILES;
		else
			return ((distance / 500) + 1) * RATE_FOR_2KG_OR_LESS_PER_500_MILES;
	}
	else if (weight > 2 && weight <= 6)
	{
		if (distance % 500 == 0)
			return (distance / 500) * RATE_FOR_OVER_2KG_BUT_LESSTHAN_OREQUALTO_6KG_PER_500_MILES;
		else
			return ((distance / 500) + 1) * RATE_FOR_OVER_2KG_BUT_LESSTHAN_OREQUALTO_6KG_PER_500_MILES;
	}
	else if (weight > 6 && weight <= 10)
	{
		if (distance % 500 == 0)
			return (distance / 500) * RATE_FOR_OVER_6KG_BUT_LESSTHAN_OREQUALTO_10KG_PER_500_MILES;
		else
			return ((distance / 500) + 1) * RATE_FOR_OVER_6KG_BUT_LESSTHAN_OREQUALTO_10KG_PER_500_MILES;
	}
	else
	{
		if (distance % 500 == 0)
			return (distance / 500) * RATE_FOR_OVER_10KG_PER_500_MILES;
		else
			return ((distance / 500) + 1) * RATE_FOR_OVER_10KG_PER_500_MILES;
	}
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
