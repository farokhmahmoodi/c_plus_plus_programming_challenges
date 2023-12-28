/*Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. It should then display the item’s retail price. For example:

If an item’s wholesale cost is $5.00 and its markup percentage is 100 percent, then the item’s retail price is $10.00.

If an item’s wholesale cost is $5.00 and its markup percentage is 50 percent, then the item’s retail price is $7.50.

The program should have a function named calculateRetail that receives the wholesale cost and the markup percentage as arguments and returns the retail price of the item.
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

double calculateRetail(double, double);

int main()
{
	double wholesaleCost, markUpPercentage, retailCost;

	cout << "enter wholesale cost of item: ";
	cin >> wholesaleCost;
	while (wholesaleCost <= 0)
	{
		cout << "input error. please enter wholesale cost larger than 0: ";
		cin >> wholesaleCost;
	}
	cout << "enter markup percentage: ";
	cin >> markUpPercentage;
	while (markUpPercentage < 0)
	{
		cout << "input error. enter markup percentage greater than or equal to 0. ";
		cin >> markUpPercentage;

	}

	retailCost = calculateRetail(wholesaleCost, markUpPercentage);
	cout << fixed << showpoint << setprecision(2);
	cout << "The retail cost of an item with wholesale cost of $" << wholesaleCost << " at a markup percentage of " << markUpPercentage << "% is $" << retailCost << ".\n";
	return 0;
}

double calculateRetail(double wholeCost, double markUpPercent)
{
	return wholeCost + (wholeCost * markUpPercent * .01);
}
