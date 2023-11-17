// start c++ 10th ed. maddis ch6_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

double presentValue(double, double, int);


int main()
{
	double futureValue, annualInterestRate, monthlyInterestRate;
	int numYears, numMonths;
	char choice;

	do {
		cout << "enter future value:";
		cin >> futureValue;
		cout << "enter annual interest rate (expressed as decimal):";
		cin >> annualInterestRate;
		monthlyInterestRate = annualInterestRate / 12;
		cout << "enter number of years money will grow:";
		cin >> numYears;
		numMonths = numYears * 12;
		cout << fixed << showpoint << setprecision(10);
		cout << "Present value needed to deposit today is $" << presentValue(futureValue, monthlyInterestRate, numMonths) << " dollars." << endl;
		cout << "Would you like to perform this program again? (Y/N)";
		cin >> choice;
	} while (toupper(choice) != 'N');

	return 0;
}

double presentValue(double futureValue, double monthlyInterestRate, int numMonths)
{
	return (futureValue) / (pow((1 + monthlyInterestRate), numMonths));
}


