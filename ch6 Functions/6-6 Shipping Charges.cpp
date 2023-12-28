/*The Fast Freight Shipping Company charges the following rates:

Weight of Package (in kilograms)	Rate per 500 Miles Shipped
2 kg or less	$3.10
Over 2 kg but not more than 6 kg	$4.20
Over 6 kg but not more than 10 kg	$5.30
over 10 kg	$6.40
Miles that are not a multiple of 500 are charged at the next higher rate. For example, 520 miles would be charged as 1000 miles.

Write a program that asks for the weight of a package and the distance it is to be shipped. 
These two data items should be passed as arguments to a calculateCharge function that computes and returns the shipping charge to be displayed. 
The main function should loop to handle multiple packages until a weight of 0 is entered.
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