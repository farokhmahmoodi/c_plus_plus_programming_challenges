//
/*
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
//#include <windows.h>
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

