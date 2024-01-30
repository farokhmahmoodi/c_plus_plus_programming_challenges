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
			case '1': //100-199
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
						switch (n[1]) //examining second digit
						{
						case '2': //120-129
							cout << " " << twenty;
							if (number != 120) //121-129
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //130-139
							cout << " " << thirty;
							if (number != 130) //131-139
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
							break;
						case '4': //140-149
							cout << " " << forty;
							if (number != 140) //141-149
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
							break;
						case '5': //150-159
							cout << " " << fifty;
							if (number != 150) //151-159
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
							break;
						case '6': //160-169
							cout << " " << sixty;
							if (number != 160) //161-169
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
							break;
						case '7': //170-179
							cout << " " << seventy;
							if (number != 170) //171-179
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
							break;
						case '8': //180-189
							cout << " " << eighty;
							if (number != 180) //181-189
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
							break;
						case '9': //190-199
							cout << " " << ninety;
							if (number != 190) //191-199
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
							break;
						}
					}
				}
				break;
			case '2': //200-299
				cout << lessThan20[2] << " " << hundred;
				if (number != 200) //201-299
				{
					if (number < 210) //201-209
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
					else if (number < 220) //210-219
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
					else //220-299
					{
						switch (n[1]) //examining second digit
						{
						case '2': //220-229
							cout << " " << twenty;
							if (number != 220) //221-229
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //230-239
							cout << " " << thirty;
							if (number != 230) //231-239
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
							break;
						case '4': //240-249
							cout << " " << forty;
							if (number != 240) //141-149
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
							break;
						case '5': //250-259
							cout << " " << fifty;
							if (number != 250) //251-259
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
							break;
						case '6': //260-269
							cout << " " << sixty;
							if (number != 260) //261-269
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
							break;
						case '7': //270-279
							cout << " " << seventy;
							if (number != 170) //271-279
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
							break;
						case '8': //280-289
							cout << " " << eighty;
							if (number != 180) //281-289
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
							break;
						case '9': //290-299
							cout << " " << ninety;
							if (number != 190) //291-299
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
							break;
						}
					}
				}
				break;
			case '3': //300-399
				cout << lessThan20[3] << " " << hundred;
				if (number != 300) //301-399
				{
					if (number < 310) //301-309
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
					else if (number < 320) //310-319
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
					else //320-399
					{
						switch (n[1]) //examining second digit
						{
						case '2': //320-329
							cout << " " << twenty;
							if (number != 220) //321-329
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //330-339
							cout << " " << thirty;
							if (number != 230) //331-339
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
							break;
						case '4': //340-349
							cout << " " << forty;
							if (number != 240) //341-349
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
							break;
						case '5': //350-359
							cout << " " << fifty;
							if (number != 250) //351-359
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
							break;
						case '6': //360-369
							cout << " " << sixty;
							if (number != 260) //361-369
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
							break;
						case '7': //370-379
							cout << " " << seventy;
							if (number != 170) //371-379
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
							break;
						case '8': //380-389
							cout << " " << eighty;
							if (number != 180) //381-389
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
							break;
						case '9': //390-399
							cout << " " << ninety;
							if (number != 190) //391-399
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
							break;
						}
					}
				}
				break;
			case '4': //400-499
				cout << lessThan20[4] << " " << hundred;
				if (number != 400) //401-499
				{
					if (number < 410) //401-409
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
					else if (number < 420) //410-419
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
					else //420-499
					{
						switch (n[1]) //examining second digit
						{
						case '2': //420-429
							cout << " " << twenty;
							if (number != 420) //421-429
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //430-439
							cout << " " << thirty;
							if (number != 430) //431-439
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
							break;
						case '4': //440-449
							cout << " " << forty;
							if (number != 440) //441-449
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
							break;
						case '5': //450-459
							cout << " " << fifty;
							if (number != 450) //451-459
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
							break;
						case '6': //460-469
							cout << " " << sixty;
							if (number != 460) //461-469
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
							break;
						case '7': //470-479
							cout << " " << seventy;
							if (number != 470) //471-479
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
							break;
						case '8': //480-489
							cout << " " << eighty;
							if (number != 480) //481-489
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
							break;
						case '9': //490-499
							cout << " " << ninety;
							if (number != 490) //491-499
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
							break;
						}
					}
				}
				break;
			case '5': //500-599
				cout << lessThan20[5] << " " << hundred;
				if (number != 500) //501-199
				{
					if (number < 510) //501-209
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
					else if (number < 520) //510-519
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
					else //520-599
					{
						switch (n[1]) //examining second digit
						{
						case '2': //520-529
							cout << " " << twenty;
							if (number != 520) //521-529
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //530-539
							cout << " " << thirty;
							if (number != 530) //531-539
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
							break;
						case '4': //540-549
							cout << " " << forty;
							if (number != 540) //541-549
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
							break;
						case '5': //550-559
							cout << " " << fifty;
							if (number != 550) //551-559
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
							break;
						case '6': //560-569
							cout << " " << sixty;
							if (number != 560) //561-569
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
							break;
						case '7': //570-579
							cout << " " << seventy;
							if (number != 570) //571-579
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
							break;
						case '8': //580-589
							cout << " " << eighty;
							if (number != 580) //581-589
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
							break;
						case '9': //590-599
							cout << " " << ninety;
							if (number != 590) //591-599
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
							break;
						}
					}
				}
				break;
			case '6': //600-699
				cout << lessThan20[6] << " " << hundred;
				if (number != 600) //601-699
				{
					if (number < 610) //601-609
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
					else if (number < 620) //610-619
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
					else //620-699
					{
						switch (n[1]) //examining second digit
						{
						case '2': //620-629
							cout << " " << twenty;
							if (number != 620) //621-629
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //630-639
							cout << " " << thirty;
							if (number != 630) //631-639
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
							break;
						case '4': //640-649
							cout << " " << forty;
							if (number != 640) //641-649
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
							break;
						case '5': //650-659
							cout << " " << fifty;
							if (number != 650) //651-659
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
							break;
						case '6': //660-669
							cout << " " << sixty;
							if (number != 660) //661-669
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
							break;
						case '7': //670-679
							cout << " " << seventy;
							if (number != 670) //671-679
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
							break;
						case '8': //680-689
							cout << " " << eighty;
							if (number != 680) //681-689
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
							break;
						case '9': //690-699
							cout << " " << ninety;
							if (number != 690) //691-699
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
							break;
						}
					}
				}
				break;
			case '7': //700-799
				cout << lessThan20[7] << " " << hundred;
				if (number != 700) //701-799
				{
					if (number < 710) //701-709
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
					else if (number < 720) //710-719
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
					else //720-799
					{
						switch (n[1]) //examining second digit
						{
						case '2': //720-729
							cout << " " << twenty;
							if (number != 720) //721-729
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //730-739
							cout << " " << thirty;
							if (number != 730) //731-739
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
							break;
						case '4': //740-749
							cout << " " << forty;
							if (number != 740) //741-749
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
							break;
						case '5': //750-759
							cout << " " << fifty;
							if (number != 750) //751-759
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
							break;
						case '6': //760-769
							cout << " " << sixty;
							if (number != 760) //761-769
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
							break;
						case '7': //770-779
							cout << " " << seventy;
							if (number != 770) //771-779
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
							break;
						case '8': //780-789
							cout << " " << eighty;
							if (number != 780) //781-789
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
							break;
						case '9': //790-799
							cout << " " << ninety;
							if (number != 790) //791-799
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
							break;
						}
					}
				}
				break;
			case '8': //800-899
				cout << lessThan20[8] << " " << hundred;
				if (number != 800) //801-899
				{
					if (number < 810) //801-809
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
					else if (number < 820) //810-819
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
					else //820-899
					{
						switch (n[1]) //examining second digit
						{
						case '2': //820-829
							cout << " " << twenty;
							if (number != 720) //821-829
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //830-839
							cout << " " << thirty;
							if (number != 830) //831-839
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
							break;
						case '4': //840-849
							cout << " " << forty;
							if (number != 840) //841-849
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
							break;
						case '5': //850-859
							cout << " " << fifty;
							if (number != 850) //851-859
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
							break;
						case '6': //860-869
							cout << " " << sixty;
							if (number != 860) //861-869
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
							break;
						case '7': //870-879
							cout << " " << seventy;
							if (number != 870) //871-879
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
							break;
						case '8': //880-889
							cout << " " << eighty;
							if (number != 880) //881-889
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
							break;
						case '9': //890-899
							cout << " " << ninety;
							if (number != 890) //891-799
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
							break;
						}
					}
				}
				break;
			case '9': //900-999
				cout << lessThan20[9] << " " << hundred;
				if (number != 900) //901-999
				{
					if (number < 910) //901-909
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
					else if (number < 920) //910-919
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
					else //920-999
					{
						switch (n[1]) //examining second digit
						{
						case '2': //920-929
							cout << " " << twenty;
							if (number != 920) //921-929
							{
								char x = '1';
								for (int i = 1; i < 10; i++)
								{
									if (n[2] == x) //examining third digit
									{
										cout << " " << lessThan20[i] << endl;
										break;
									}
									x++;
								}
							}
							break;
						case '3': //930-939
							cout << " " << thirty;
							if (number != 930) //931-939
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
							break;
						case '4': //940-949
							cout << " " << forty;
							if (number != 940) //941-949
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
							break;
						case '5': //950-959
							cout << " " << fifty;
							if (number != 950) //951-959
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
							break;
						case '6': //960-969
							cout << " " << sixty;
							if (number != 960) //961-969
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
							break;
						case '7': //970-979
							cout << " " << seventy;
							if (number != 970) //971-979
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
							break;
						case '8': //980-989
							cout << " " << eighty;
							if (number != 980) //981-989
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
							break;
						case '9': //990-999
							cout << " " << ninety;
							if (number != 990) //991-999
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
							break;
						}
					}
				}
				break;
			}
			break;
		case 4: //numbers 1000-9999
			char x;
			switch (n[0]) //examining first digit
			{
			case '1': //1000-1999
				cout << lessThan20[1] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0': //1000-1099
					switch (n[2]) //examining third digit
					{
					case '0': //1000-1009
						if (number != 1000)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '1': //1010-1019
						x = '0';
						for (int i = 10; i < 20; i++)
						{
							if (n[3] == x) //examining fourth digit
							{
								cout << " " << lessThan20[i] << endl;
								break;
							}
							x++;
						}
						break;
					case '2': //1020-1029
						cout << " " << twenty;
						if (number != 1020)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '3': //1030-1039
						cout << " " << thirty;
						if (number != 1030)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '4': //1040-1049
						cout << " " << forty;
						if (number != 1040)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '5': //1050-1059
						cout << " " << fifty;
						if (number != 1050)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '6': //1060-1069
						cout << " " << sixty;
						if (number != 1060)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '7': //1070-1079
						cout << " " << seventy;
						if (number != 1070)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '8': //1080-1089
						cout << " " << eighty;
						if (number != 1080)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '9': //1090-1099
						cout << " " << ninety;
						if (number != 1090)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					}
					break;
				case '1': //1100-1199
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1100-1109
						if (number != 1100)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '1': //1110-1119
						x = '0';
						for (int i = 10; i < 20; i++)
						{
							if (n[3] == x) //examining fourth digit
							{
								cout << " " << lessThan20[i] << endl;
								break;
							}
							x++;
						}
						break;
					case '2': //1120-1129
						cout << " " << twenty;
						if (number != 1120)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '3': //1130-1139
						cout << " " << thirty;
						if (number != 1130)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '4': //1140-1149
						cout << " " << forty;
						if (number != 1140)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '5': //1150-1159
						cout << " " << fifty;
						if (number != 1150)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '6': //1160-1169
						cout << " " << sixty;
						if (number != 1160)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '7': //1170-1179
						cout << " " << seventy;
						if (number != 1170)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '8': //1180-1189
						cout << " " << eighty;
						if (number != 1180)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;
					case '9': //1190-1199
						cout << " " << ninety;
						if (number != 1190)
						{
							x = '1';
							for (int i = 1; i < 10; i++)
							{
								if (n[3] == x) //examining fourth digit
								{
									cout << " " << lessThan20[i] << endl;
									break;
								}
								x++;
							}
						}
						break;					
					}
					break;
				}
				break;
			}







			break;
		}
	}
};
#endif
