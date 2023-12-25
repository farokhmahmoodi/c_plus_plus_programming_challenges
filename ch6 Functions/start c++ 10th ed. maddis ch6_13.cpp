// start c++ 10th ed. maddis ch6_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

double futureValue(double, double, int);

int main()
{
	double presentValue, monthlyInterestRate;
	int numMonths;

	cout << "enter present value:";
	cin >> presentValue;
	cout << "enter monthly interest rate as decimal:";
	cin >> monthlyInterestRate;
	cout << "enter num of months:";
	cin >> numMonths;
	cout << fixed << showpoint << setprecision(2);
	cout << "future value is $" << futureValue(presentValue, monthlyInterestRate, numMonths) << endl;
	return 0;
}

double futureValue(double presentValue, double monthlyInterestRate, int numMonths)
{

	return presentValue * pow(1 + monthlyInterestRate, numMonths);

}