#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
	int number;
	static string lessThan20[], twenty, thirty,forty, fifty,
		sixty, seventy, eighty, ninety, hundred, thousand;
public:
	Numbers(int a)
	{
		if (a >= 0)
			number = a;
		else
			number = 0;
	}	
	void print()
	{

	}
};
#endif
