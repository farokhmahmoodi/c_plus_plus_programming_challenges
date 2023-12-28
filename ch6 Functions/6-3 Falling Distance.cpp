/*The following formula can be used to determine the distance an object falls due to gravity in a specific time period:
	d = 1/2 g * t ^ 2

The variables in the formula are as follows:

d is the distance in meters,
g is 9.8,
and t is the time in seconds that the object has been falling.

Write a function named fallingDistance that accepts an object’s falling time (in seconds) as an argument. 
The function should return the distance, in meters, that the object has fallen during that time interval. 
Write a program that demonstrates the function by calling it in a loop that passes the values 1 through 10 as arguments and displays the return value.
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

const double GRAVITATIONAL_CONST = 9.8;
double fallingDistance(double);

int main()
{
	cout << "Seconds" << setw(15) << "Distance\n";
	cout << "---------------------\n";
	cout << fixed << showpoint << setprecision(2);
	for (double val = 1; val <= 10; val++)
	{
		cout << val << setw(15) << fallingDistance(val) << " meters" << endl;

	}


	return 0;
}

double fallingDistance(double seconds)
{
	return 0.5 * GRAVITATIONAL_CONST * pow(seconds, 2);

}