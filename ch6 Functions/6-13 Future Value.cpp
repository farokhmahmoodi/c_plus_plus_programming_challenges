/*Suppose you have a certain amount of money in a savings account that earns compound monthly interest, and you want to calculate the amount that you will have after a specific number of months. The formula, which is known as the future value formula, is:

	F = P * (1 + i)^t

The variables in the formula are as follows:

F is the future value of the account after the specified time period.

P is the present value of the account.

i is the monthly interest rate.

t is the number of months.

Write a program that prompts the user to enter the account’s present value, monthly interest rate, and number of months that the money will be left in the account. The program should pass these values to a function named futureValue that computes and returns the future value of the account after the specified number of months. The program should display the account’s future value.
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