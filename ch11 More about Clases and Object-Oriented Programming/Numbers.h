#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
	int number;
	static string lessThan20[],
		hundred,
		thousand;
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
		if (number < 20)
		{
			for (int i = 0; i < 20; i++)
			{
				if (number == i)
				{
					cout << lessThan20[i];
					break;
				}
			}
		}
	}
};
#endif
