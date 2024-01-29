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
			if (number < 20) //10-19
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
				switch (n[0]) //examining first digit
				{
				case '2': //20-29
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
				case '3': //30-39
					cout << thirty;
					if (n[1] != '0')
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
				case '4': //40-49
					cout << forty;
					if (n[1] != '0')
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
				case '5': //50-59
					cout << fifty;
					if (n[1] != '0')
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
				case '6': //60-69
					cout << sixty;
					if (n[1] != '0')
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
				case '7': //70-79
					cout << seventy;
					if (n[1] != '0')
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
				case '8': //80-89
					cout << eighty;
					if (n[1] != '0')
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
				case '9': //90-99
					cout << ninety;
					if (n[1] != '0')
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
		case 3: //numbers 100-999
			switch (n[0]) //examining first digit
			{
			case '1':
				cout << lessThan20[1] << " " << hundred;
				if (number != 100) //101-199
				{
					if (number < 110) //101-109
					{				
						char x = '1';
						for (int i = 1; i < 10; i++)
						{
							if (n[2] == x)
							{
								cout << " " << lessThan20[i] << endl;
								break;
							}
							x++;
						}
					}
					else if (number < 120) //110-119
					{
						char x = '0';
						for (int i = 10; i < 20; i++)
						{
							if (n[2] == x)
							{
								cout << " " << lessThan20[i] << endl;
								break;
							}
							x++;
						}
					}
					else //120-199
					{

					}
				}
				break;
			case '2':

				break;
			case '3':

				break;
			case '4':

				break;
			case '5':

				break;
			case '6':

				break;
			case '7':

				break;
			case '8':

				break;
			case '9':

				break;
			}
			break;
		case '4': //numbers 1000-9999








			break;
		}
	}
};
#endif
