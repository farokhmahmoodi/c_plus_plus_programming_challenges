/*Suppose you want to deposit a certain amount of money into a savings account and then leave it alone to draw interest for the next 10 years. At the end of 10 years (120 months) you would like to have $10,000 in the account. How much do you need to deposit today to make that happen? To find out you can use the following formula, which is known as the present value formula:

	P = F / (1+ i)^t

The terms in the formula are as follows:

P is the present value, or the amount that you need to deposit today.

F is the future value that you want in the account (in this case, $10,000).

i is the monthly interest rate (expressed in decimal form, such as .0025). This will be 1/12 of the annual rate the user enters.

t is the number of months that you plan to let the money sit in the account. This will be 12 times the number of years the user enters.

Write a program with a function named presentValue that performs this calculation. The user should enter the future value, annual interest rate, and number of years the money will grow. The program should convert the annual interest rate to the monthly interest rate and the number of years to the number of months before passing these, along with future value, to the presentValue function.

The function should accept these three arguments and use them to compute and return the present value, which is the amount that you need to deposit today. Demonstrate the function in a program that lets the user experiment with different input values.
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


