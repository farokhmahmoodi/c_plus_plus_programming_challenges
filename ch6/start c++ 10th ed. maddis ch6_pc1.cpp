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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
