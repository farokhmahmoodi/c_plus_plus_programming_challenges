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



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
