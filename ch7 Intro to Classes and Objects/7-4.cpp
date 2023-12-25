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
#include "Car.h"
using namespace std;



int main()
{
	Car c(2021, "dodge");
	cout << c.getYear() << " " << c.getMake() << endl;
	cout << c.getSpeed() << endl;
	c.accelerate();
	cout << c.getSpeed() << endl;
	c.accelerate();
	cout << c.getSpeed() << endl;
	c.accelerate();
	cout << c.getSpeed() << endl;
	c.accelerate();
	cout << c.getSpeed() << endl;
	c.accelerate();
	cout << c.getSpeed() << endl;
	c.brake();
	cout << c.getSpeed() << endl;
	c.brake();
	cout << c.getSpeed() << endl;
	c.brake();
	cout << c.getSpeed() << endl;
	c.brake();
	cout << c.getSpeed() << endl;
	c.brake();
	cout << c.getSpeed() << endl;



	return 0;
}

