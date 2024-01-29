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
		string n = to_string(number); //convert number to string
		switch (n.size()) //switch statement for how many digits in the number
		{
		case 1: //numbers 0-9
			for (int i = 0; i < 10; i++)
			{
				if (number == i)
				{
					cout << lessThan20[i] << endl;
					break;
				}
			}
			break;
		case 2: //numbers 10-99
			if (number < 20)
			{
				for (int i = 9; i < 20; i++)
				{
					if (number == i)
					{
						cout << lessThan20[i] << endl;
						break;
					}
				}
			}
			else
			{

			}
			break;
		}
	}
};
#endif
