/*Three cars drive a 500 mile route. Write a program that inputs the car make and the number of gallons of fuel used by each car. 
After calling a calcMPG() function once for each car, have main determine and display which car was the most fuel efficient and how many miles per gallon it got. The calcMPG() function should be passed the distance driven and the gallons of gas used as arguments, and should return the miles per gallon obtained.
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
