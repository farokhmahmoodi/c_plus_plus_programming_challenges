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






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
