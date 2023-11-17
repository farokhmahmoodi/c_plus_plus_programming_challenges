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
#include <windows.h>
#include "Coin.h"
using namespace std;



int main()
{
	double balance = 0;
	Coin quarter, dime, nickel;
	while (balance < 1.00)
	{
		quarter.toss();
		if (quarter.getSideUp() == "heads")
			balance += .25;
		dime.toss();
		if (dime.getSideUp() == "heads")
			balance += .10;
		nickel.toss();
		if (nickel.getSideUp() == "heads")
			balance += .05;
	}
	cout << fixed << showpoint << setprecision(2);
	if (balance == 1.00)
		cout << "You won! Balance: $" << balance << endl;
	else
		cout << "You lose. Balance: $" << balance << endl;

	return 0;
}

