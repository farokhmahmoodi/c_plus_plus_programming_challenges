#ifndef DRINKMACHINE_H
#define DRINKMACHINE_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

struct DrinkType 
{
	string name;
	double cost;
	int numInMachine;
	
	DrinkType()
	{
		name = " ";
		cost = 0.0;
		numInMachine = 0;
	}
	DrinkType(string n)
	{
		name = n;
		cost = 0.0;
		numInMachine = 0;
	}
	DrinkType(string n, double c)
	{
		name = n;
		cost = c;
		numInMachine = 0;
	}
	DrinkType(string n, double c, int i)
	{
		name = n;
		cost = c;
		numInMachine = i;
	}
};

class DrinkMachine
{
private:
	DrinkType a[5] = { DrinkType("Cola", 1.00, 20), DrinkType("Root beer", 1.00,20), 
		DrinkType("Orange Soda", 1.00, 20), DrinkType("Grape soda", 1.00,20), 
		DrinkType("Bottled water",1.50, 20)};
	double moneyCollected;
	double inputMoney(int);
	void dailyReport();
public:
	DrinkMachine();
	~DrinkMachine();
	void displayChoices();
	void buyDrink(int);
};
#endif
