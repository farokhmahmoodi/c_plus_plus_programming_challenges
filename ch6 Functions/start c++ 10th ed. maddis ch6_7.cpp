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

const int DISTANCE = 500; //500 miles
double calcMPG(int, double);


int main()
{
	string car1make, car2make, car3make;
	double car1gallons, car2gallons, car3gallons, car1mpg, car2mpg, car3mpg;

	cout << "enter make of car 1: ";
	cin >> car1make;
	cout << "enter gallons used for " << car1make << " (greater than 0): ";
	cin >> car1gallons;
	while (car1gallons <= 0)
	{
		cout << "input error. enter distance traveled for car 1" << " (greater than 0): ";
		cin >> car1gallons;
	}
	car1mpg = calcMPG(DISTANCE, car1gallons);
	cout << "enter make of car 2: ";
	cin >> car2make;
	cout << "enter gallons used for " << car2make << " (greater than 0): ";
	cin >> car2gallons;
	while (car2gallons <= 0)
	{
		cout << "input error. enter distance traveled for car 2" << " (greater than 0): ";
		cin >> car2gallons;
	}
	car2mpg = calcMPG(DISTANCE, car2gallons);
	cout << "enter make of car 3: ";
	cin >> car3make;
	cout << "enter gallons used for " << car3make << " (greater than 0): ";
	cin >> car3gallons;
	while (car3gallons <= 0)
	{
		cout << "input error. enter distance traveled for car 3" << " (greater than 0): ";
		cin >> car3gallons;
	}
	car3mpg = calcMPG(DISTANCE, car3gallons);

	cout << fixed << showpoint << setprecision(2);
	if (car1mpg > car2mpg && car1mpg > car3mpg)
		cout << car1make << " is most fuel efficient with " << car1mpg << " mpg.\n";
	else if (car2mpg > car1mpg && car2mpg > car3mpg)
		cout << car2make << " is most fuel efficient with " << car2mpg << " mpg.\n";
	else
		cout << car3make << " is most fuel efficient with " << car3mpg << " mpg.\n";

	return 0;
}

double calcMPG(int distance, double gallons)
{
	return distance / gallons;

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
