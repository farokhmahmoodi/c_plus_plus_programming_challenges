/*In a population, the birth rate and death rate are calculated as follows:

Birth Rate = Number of Births ÷ Population
Death Rate = Number of Deaths ÷ Population

For example, in a population of 100,000 that has 5,000 births and 2,000 deaths per year,

Birth Rate = 5,000 ÷ 100,000 = 0.05
Death Rate = 2,000 ÷ 100,000 = 0.02
Design a Population class that stores a current population, annual number of births, and annual number of deaths for some geographic area. The class should allow these three values to be set in either of two ways: by passing arguments to a three-parameter constructor when a new Population object is created or by calling the setPopulation, setBirths, and setDeaths class member functions. In either case, if a population figure less than 2 is passed to the class, use a default value of 2. If a birth or death figure less than 0 is passed in, use a default value of 0. The class should also have getBirthRate and getDeathRate functions that compute and return the birth and death rates. Write a short program that uses the Population class and illustrates its capabilities.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "Population.h"
using namespace std;

int main()
{
	int p, b, d, choice;
	do {
		
		cout << "select option from menu below." << endl;
		cout << "1. create population object with parameters in constructor" << endl;
		cout << "2. create population object with member functions" << endl;
		cout << "3. quit" << endl;
		cin >> choice;
		while (choice < 1 || choice > 3)
		{
			cout << "input error. select option from menu below." << endl;
			cout << "1. create population object with parameters in constructor" << endl;
			cout << "2. create population object with member functions" << endl;
			cout << "3. quit" << endl;
			cin >> choice;
		}
		
		switch (choice)
		{
		case 1:
			cout << "enter population: ";
			cin >> p;
			cout << "enter annual number of births: ";
			cin >> b;
			cout << "enter annual number of deaths: ";
			cin >> d;
			{
				Population a(p, b, d);
				cout << "population is " << a.getPopulation() << endl;
				cout << "num births is " << a.getBirths() << endl;
				cout << "num deaths is " << a.getDeaths() << endl;
				cout << "birth rate is " << fixed << showpoint << setprecision(4) << a.getBirthRate() << endl;
				cout << "death rate is " << fixed << showpoint << setprecision(4) << a.getDeathRate() << endl; 
			}
			break;
		case 2:
			cout << "enter population: ";
			cin >> p;
			cout << "enter annual number of births: ";
			cin >> b;
			cout << "enter annual number of deaths: ";
			cin >> d;
			Population c;
			c.setPopulation(p); c.setBirths(b); c.setDeaths(d);
			cout << "population is " << c.getPopulation() << endl;
			cout << "num births is " << c.getBirths() << endl;
			cout << "num deaths is " << c.getDeaths() << endl;
			cout << "birth rate is " << fixed << showpoint << setprecision(4) << c.getBirthRate() << endl;
			cout << "death rate is " << fixed << showpoint << setprecision(4) << c.getDeathRate() << endl;
			break;
		}
	} while (choice != 3);

	return 0;
}

