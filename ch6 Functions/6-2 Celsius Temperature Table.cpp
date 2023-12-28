/*The formula for converting a temperature from Fahrenheit to Celsius is
		C = 5/9(F - 32)
where 
F is the Fahrenheit temperature and C is the Celsius temperature. 
Write a function named celsius that accepts a Fahrenheit temperature as an argument and returns the temperature converted to Celsius. 
Demonstrate the function by calling it in a loop that displays a table of every fifth Fahrenheit temperature from 0 through 100 and its Celsius equivalent.
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

double celsius(double);

int main()
{
	double fahrenheit;

	cout << "Fahrenheit" << setw(20) << "Celsius\n";
	cout << "-----------------------------------\n";
	cout << fixed << showpoint << setprecision(2);
	for (double temp = 0; temp <= 100; temp += 5)
	{
		cout << temp << setw(20) << celsius(temp) << endl;

	}
	return 0;
}

double celsius(double fahrenheit)
{
	return (5.0 * (fahrenheit - 32.0)) / 9.0;
}
