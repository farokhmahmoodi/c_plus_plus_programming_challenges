#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
	int number;
	static string lessThan20[], twenty, thirty, forty, fifty,
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
			else //20-99
			{
				switch (n[0]) //examining first digit
				{
				case '2':
					cout << twenty;
					if (n[1] != '0') //examining second digit
					{	
						char x = '1';
						for (int i = 1; i < 10; i++)
						{
							if (n[1] == x)
							{
								cout << " " << lessThan20[i] << endl;
								break;
							}
							x++;
						}
					}
					break;
				case '3':
					cout << thirty;
					if (n[1] != '0') //examining second digit
					{
						char x = '1';
						for (int i = 1; i < 10; i++)
						{
							if (n[1] == x)
							{
								cout << " " << lessThan20[i] << endl;
								break;
							}
							x++;
						}
					}
					break;
				}
			}
			break;
		}
	}
};
#endif
