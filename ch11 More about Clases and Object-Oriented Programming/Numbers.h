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
			break; //0-9
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
			break; //10-99
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
			break; //100-999
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
				case '2': //1200-1299
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1200-1209
						if (number != 1200)
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
					case '1': //1210-1219
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
					case '2': //1220-1229
						cout << " " << twenty;
						if (number != 1220)
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
					case '3': //1230-1239
						cout << " " << thirty;
						if (number != 1230)
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
					case '4': //1240-1249
						cout << " " << forty;
						if (number != 1240)
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
					case '5': //1250-1259
						cout << " " << fifty;
						if (number != 1250)
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
					case '6': //1260-1269
						cout << " " << sixty;
						if (number != 1260)
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
					case '7': //1270-1279
						cout << " " << seventy;
						if (number != 1270)
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
					case '8': //1280-1289
						cout << " " << eighty;
						if (number != 1280)
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
					case '9': //1290-1299
						cout << " " << ninety;
						if (number != 1290)
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
					break; //1200-1299
				case '3': //1300-1399
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1200-1209
						if (number != 1300)
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
					case '1': //1310-1319
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
					case '2': //1320-1329
						cout << " " << twenty;
						if (number != 1320)
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
					case '3': //1330-1339
						cout << " " << thirty;
						if (number != 1330)
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
					case '4': //1340-1349
						cout << " " << forty;
						if (number != 1340)
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
					case '5': //1350-1359
						cout << " " << fifty;
						if (number != 1350)
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
					case '6': //1360-1369
						cout << " " << sixty;
						if (number != 1360)
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
					case '7': //1370-1379
						cout << " " << seventy;
						if (number != 1370)
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
					case '8': //1380-1389
						cout << " " << eighty;
						if (number != 1380)
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
					case '9': //1390-1399
						cout << " " << ninety;
						if (number != 1390)
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
					break; //1300-1399
				case '4': //1400-1499
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1400-1409
						if (number != 1400)
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
					case '1': //1410-1419
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
					case '2': //1420-1429
						cout << " " << twenty;
						if (number != 1420)
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
					case '3': //1430-1439
						cout << " " << thirty;
						if (number != 1430)
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
					case '4': //1440-1449
						cout << " " << forty;
						if (number != 1440)
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
					case '5': //1450-1459
						cout << " " << fifty;
						if (number != 1450)
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
					case '6': //1460-1469
						cout << " " << sixty;
						if (number != 1460)
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
					case '7': //1470-1479
						cout << " " << seventy;
						if (number != 1470)
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
					case '8': //1480-1489
						cout << " " << eighty;
						if (number != 1480)
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
					case '9': //1490-1499
						cout << " " << ninety;
						if (number != 1490)
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
					break; //1400-1499
				case '5': //1500-1599
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1500-1509
						if (number != 1500)
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
					case '1': //1510-1519
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
					case '2': //1520-1529
						cout << " " << twenty;
						if (number != 1520)
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
					case '3': //1530-1539
						cout << " " << thirty;
						if (number != 1530)
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
					case '4': //1540-1549
						cout << " " << forty;
						if (number != 1540)
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
					case '5': //1550-1559
						cout << " " << fifty;
						if (number != 1550)
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
					case '6': //1560-1569
						cout << " " << sixty;
						if (number != 1560)
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
					case '7': //1570-1579
						cout << " " << seventy;
						if (number != 1570)
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
					case '8': //1580-1589
						cout << " " << eighty;
						if (number != 1580)
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
					case '9': //1590-1599
						cout << " " << ninety;
						if (number != 1590)
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
					break; //1500-1599
				case '6': //1600-1699
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1600-1609
						if (number != 1600)
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
					case '1': //1610-1619
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
					case '2': //1620-1629
						cout << " " << twenty;
						if (number != 1620)
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
					case '3': //1630-1639
						cout << " " << thirty;
						if (number != 1630)
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
					case '4': //1640-1649
						cout << " " << forty;
						if (number != 1640)
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
					case '5': //1650-1659
						cout << " " << fifty;
						if (number != 1650)
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
					case '6': //1660-1669
						cout << " " << sixty;
						if (number != 1660)
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
					case '7': //1670-1679
						cout << " " << seventy;
						if (number != 1670)
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
					case '8': //1680-1689
						cout << " " << eighty;
						if (number != 1680)
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
					case '9': //1690-1699
						cout << " " << ninety;
						if (number != 1690)
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
					break; //1600-1699
				case '7': //1700-1799
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1200-1209
						if (number != 1700)
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
					case '1': //1710-1719
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
					case '2': //1720-1729
						cout << " " << twenty;
						if (number != 1720)
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
					case '3': //1730-1739
						cout << " " << thirty;
						if (number != 1730)
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
					case '4': //1740-1749
						cout << " " << forty;
						if (number != 1740)
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
					case '5': //1750-1759
						cout << " " << fifty;
						if (number != 1750)
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
					case '6': //1760-1769
						cout << " " << sixty;
						if (number != 1760)
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
					case '7': //1770-1779
						cout << " " << seventy;
						if (number != 1770)
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
					case '8': //1780-1789
						cout << " " << eighty;
						if (number != 1780)
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
					case '9': //1790-1799
						cout << " " << ninety;
						if (number != 1790)
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
					break; //1700-1799
				case '8': //1800-1899
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1800-1809
						if (number != 1800)
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
					case '1': //1810-1819
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
					case '2': //1820-1829
						cout << " " << twenty;
						if (number != 1820)
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
					case '3': //1830-1839
						cout << " " << thirty;
						if (number != 1830)
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
					case '4': //1840-1849
						cout << " " << forty;
						if (number != 1840)
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
					case '5': //1850-1859
						cout << " " << fifty;
						if (number != 1850)
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
					case '6': //1860-1869
						cout << " " << sixty;
						if (number != 1860)
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
					case '7': //1870-1879
						cout << " " << seventy;
						if (number != 1870)
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
					case '8': //1880-1889
						cout << " " << eighty;
						if (number != 1880)
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
					case '9': //1890-1899
						cout << " " << ninety;
						if (number != 1890)
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
					break; //1800-1899
				case '9': //1900-1999
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //1900-1909
						if (number != 1900)
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
					case '1': //1910-1919
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
					case '2': //1920-1929
						cout << " " << twenty;
						if (number != 1920)
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
					case '3': //1930-1939
						cout << " " << thirty;
						if (number != 1930)
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
					case '4': //1940-1949
						cout << " " << forty;
						if (number != 1940)
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
					case '5': //1950-1959
						cout << " " << fifty;
						if (number != 1950)
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
					case '6': //1960-1969
						cout << " " << sixty;
						if (number != 1960)
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
					case '7': //1970-1979
						cout << " " << seventy;
						if (number != 1970)
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
					case '8': //1980-1989
						cout << " " << eighty;
						if (number != 1980)
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
					case '9': //1990-1999
						cout << " " << ninety;
						if (number != 1990)
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
					break; //1900-1999
				}
				break; 
			case '2': //2000-2999
				cout << lessThan20[2] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0': //2000-2099
					switch (n[2]) //examining third digit
					{
					case '0': //2000-2009
						if (number != 2000)
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
					case '1': //2010-2019
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
					case '2': //2020-2029
						cout << " " << twenty;
						if (number != 2020)
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
					case '3': //2030-2039
						cout << " " << thirty;
						if (number != 2030)
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
					case '4': //2040-2049
						cout << " " << forty;
						if (number != 2040)
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
					case '5': //2050-2059
						cout << " " << fifty;
						if (number != 2050)
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
					case '6': //2060-2069
						cout << " " << sixty;
						if (number != 2060)
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
					case '7': //2070-2079
						cout << " " << seventy;
						if (number != 2070)
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
					case '8': //2080-2089
						cout << " " << eighty;
						if (number != 2080)
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
					case '9': //2090-2099
						cout << " " << ninety;
						if (number != 2090)
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
				case '1': //2100-2199
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2100-2109
						if (number != 2100)
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
					case '1': //2110-2119
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
					case '2': //2120-2129
						cout << " " << twenty;
						if (number != 2120)
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
					case '3': //2130-2139
						cout << " " << thirty;
						if (number != 2130)
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
					case '4': //2140-2149
						cout << " " << forty;
						if (number != 2140)
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
					case '5': //2150-2159
						cout << " " << fifty;
						if (number != 2150)
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
					case '6': //2160-2169
						cout << " " << sixty;
						if (number != 2160)
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
					case '7': //2170-2179
						cout << " " << seventy;
						if (number != 2170)
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
					case '8': //2180-2189
						cout << " " << eighty;
						if (number != 2180)
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
					case '9': //2190-2199
						cout << " " << ninety;
						if (number != 2190)
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
				case '2': //2200-2299
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2200-2209
						if (number != 2200)
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
					case '1': //2210-2219
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
					case '2': //2220-2229
						cout << " " << twenty;
						if (number != 2220)
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
					case '3': //2230-2239
						cout << " " << thirty;
						if (number != 2230)
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
					case '4': //2240-2249
						cout << " " << forty;
						if (number != 2240)
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
					case '5': //2250-2259
						cout << " " << fifty;
						if (number != 2250)
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
					case '6': //2260-2269
						cout << " " << sixty;
						if (number != 2260)
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
					case '7': //2270-2279
						cout << " " << seventy;
						if (number != 2270)
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
					case '8': //2280-2289
						cout << " " << eighty;
						if (number != 2280)
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
					case '9': //2290-2299
						cout << " " << ninety;
						if (number != 2290)
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
					break; //2200-2299
				case '3': //2300-2399
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2200-2209
						if (number != 2300)
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
					case '1': //2310-2319
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
					case '2': //2320-2329
						cout << " " << twenty;
						if (number != 2320)
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
					case '3': //2330-2339
						cout << " " << thirty;
						if (number != 2330)
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
					case '4': //2340-2349
						cout << " " << forty;
						if (number != 2340)
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
					case '5': //2350-2359
						cout << " " << fifty;
						if (number != 2350)
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
					case '6': //2360-2369
						cout << " " << sixty;
						if (number != 2360)
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
					case '7': //2370-2379
						cout << " " << seventy;
						if (number != 2370)
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
					case '8': //2380-2389
						cout << " " << eighty;
						if (number != 2380)
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
					case '9': //2390-2399
						cout << " " << ninety;
						if (number != 2390)
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
					break; //2300-2399
				case '4': //2400-2499
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2400-2409
						if (number != 2400)
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
					case '1': //2410-2419
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
					case '2': //2420-2429
						cout << " " << twenty;
						if (number != 2420)
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
					case '3': //2430-2439
						cout << " " << thirty;
						if (number != 2430)
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
					case '4': //2440-2449
						cout << " " << forty;
						if (number != 2440)
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
					case '5': //2450-2459
						cout << " " << fifty;
						if (number != 2450)
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
					case '6': //2460-2469
						cout << " " << sixty;
						if (number != 2460)
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
					case '7': //2470-2479
						cout << " " << seventy;
						if (number != 2470)
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
					case '8': //2480-2489
						cout << " " << eighty;
						if (number != 2480)
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
					case '9': //2490-2499
						cout << " " << ninety;
						if (number != 2490)
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
					break; //2400-2499
				case '5': //2500-2599
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2500-2509
						if (number != 2500)
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
					case '1': //2510-2519
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
					case '2': //2520-2529
						cout << " " << twenty;
						if (number != 2520)
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
					case '3': //2530-2539
						cout << " " << thirty;
						if (number != 2530)
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
					case '4': //2540-2549
						cout << " " << forty;
						if (number != 2540)
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
					case '5': //2550-2559
						cout << " " << fifty;
						if (number != 2550)
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
					case '6': //2560-2569
						cout << " " << sixty;
						if (number != 2560)
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
					case '7': //2570-2579
						cout << " " << seventy;
						if (number != 2570)
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
					case '8': //2580-2589
						cout << " " << eighty;
						if (number != 2580)
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
					case '9': //2590-2599
						cout << " " << ninety;
						if (number != 2590)
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
					break; //2500-2599
				case '6': //2600-2699
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2600-2609
						if (number != 2600)
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
					case '1': //2610-2619
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
					case '2': //2620-2629
						cout << " " << twenty;
						if (number != 2620)
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
					case '3': //2630-2639
						cout << " " << thirty;
						if (number != 2630)
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
					case '4': //2640-2649
						cout << " " << forty;
						if (number != 2640)
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
					case '5': //2650-2659
						cout << " " << fifty;
						if (number != 2650)
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
					case '6': //2660-2669
						cout << " " << sixty;
						if (number != 2660)
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
					case '7': //2670-2679
						cout << " " << seventy;
						if (number != 2670)
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
					case '8': //2680-2689
						cout << " " << eighty;
						if (number != 2680)
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
					case '9': //2690-2699
						cout << " " << ninety;
						if (number != 2690)
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
					break; //2600-2699
				case '7': //2700-2799
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2200-2209
						if (number != 2700)
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
					case '1': //2710-2719
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
					case '2': //2720-2729
						cout << " " << twenty;
						if (number != 2720)
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
					case '3': //2730-2739
						cout << " " << thirty;
						if (number != 2730)
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
					case '4': //2740-2749
						cout << " " << forty;
						if (number != 2740)
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
					case '5': //2750-2759
						cout << " " << fifty;
						if (number != 2750)
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
					case '6': //2760-2769
						cout << " " << sixty;
						if (number != 2760)
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
					case '7': //2770-2779
						cout << " " << seventy;
						if (number != 2770)
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
					case '8': //2780-2789
						cout << " " << eighty;
						if (number != 2780)
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
					case '9': //2790-2799
						cout << " " << ninety;
						if (number != 2790)
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
					break; //2700-2799
				case '8': //2800-2899
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2800-2809
						if (number != 2800)
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
					case '1': //2810-2819
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
					case '2': //2820-2829
						cout << " " << twenty;
						if (number != 2820)
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
					case '3': //2830-2839
						cout << " " << thirty;
						if (number != 2830)
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
					case '4': //2840-2849
						cout << " " << forty;
						if (number != 2840)
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
					case '5': //2850-2859
						cout << " " << fifty;
						if (number != 2850)
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
					case '6': //2860-2869
						cout << " " << sixty;
						if (number != 2860)
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
					case '7': //2870-2879
						cout << " " << seventy;
						if (number != 2870)
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
					case '8': //2880-2889
						cout << " " << eighty;
						if (number != 2880)
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
					case '9': //2890-2899
						cout << " " << ninety;
						if (number != 2890)
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
					break; //2800-2899
				case '9': //2900-2999
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': //2900-2909
						if (number != 2900)
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
					case '1': //2910-2919
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
					case '2': //2920-2929
						cout << " " << twenty;
						if (number != 2920)
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
					case '3': //2930-2939
						cout << " " << thirty;
						if (number != 2930)
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
					case '4': //2940-2949
						cout << " " << forty;
						if (number != 2940)
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
					case '5': //2950-2959
						cout << " " << fifty;
						if (number != 2950)
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
					case '6': //2960-2969
						cout << " " << sixty;
						if (number != 2960)
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
					case '7': //2970-2979
						cout << " " << seventy;
						if (number != 2970)
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
					case '8': //2980-2989
						cout << " " << eighty;
						if (number != 2980)
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
					case '9': //2990-2999
						cout << " " << ninety;
						if (number != 2990)
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
					break; //2900-2999
				}
				break;
			case '3': //3000-3999
				cout << lessThan20[3] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0': 
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2': 
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5': 
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7': 
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '1':
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4': 
						cout << " " << forty;
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
						break;
					case '5': 
						cout << " " << fifty;
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
						break;
					case '6': 
						cout << " " << sixty;
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
						break;
					case '7': 
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9': 
						cout << " " << ninety;
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
						break;
					}
					break;
				case '2':
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0': 
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '3':
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1': 
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3': 
						cout << " " << thirty;
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
						break;
					case '4': 
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9': 
						cout << " " << ninety;
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

						break;
					}
					break;
				case '4':
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4': 
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '5':
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1': 
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '6':
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5': 
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '7':
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2': 
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break; 
				case '8':
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1': 
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '9': 
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8': 
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break; 
				}
				break; 
			case '4': //4000-4999
				cout << lessThan20[4] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0':
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '1':
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '2':
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '3':
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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

						break;
					}
					break;
				case '4':
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '5':
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '6':
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '7':
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '8':
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '9':
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				}
				break;
			case '5': //5000-5999
				cout << lessThan20[5] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0':
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '1':
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '2':
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '3':
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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

						break;
					}
					break;
				case '4':
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '5':
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '6':
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '7':
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '8':
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '9':
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				}
				break;
			case '6': //6000-6999
				cout << lessThan20[6] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0':
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '1':
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '2':
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '3':
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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

						break;
					}
					break;
				case '4':
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '5':
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '6':
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '7':
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '8':
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '9':
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				}
				break;
			case '7': //7000-7999
				cout << lessThan20[7] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0':
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '1':
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '2':
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '3':
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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

						break;
					}
					break;
				case '4':
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '5':
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '6':
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '7':
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '8':
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '9':
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				}
				break;
			case '8': //8000-8999
				cout << lessThan20[8] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0':
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '1':
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '2':
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '3':
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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

						break;
					}
					break;
				case '4':
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '5':
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '6':
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '7':
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '8':
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '9':
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				}
				break;
			case '9': //9000-9999
				cout << lessThan20[9] << " " << thousand;
				switch (n[1]) //examining second digit
				{
				case '0':
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '1':
					cout << " " << lessThan20[1] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '2':
					cout << " " << lessThan20[2] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '3':
					cout << " " << lessThan20[3] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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

						break;
					}
					break;
				case '4':
					cout << " " << lessThan20[4] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '5':
					cout << " " << lessThan20[5] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '6':
					cout << " " << lessThan20[6] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '7':
					cout << " " << lessThan20[7] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '8':
					cout << " " << lessThan20[8] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				case '9':
					cout << " " << lessThan20[9] << " " << hundred;
					switch (n[2]) //examining third digit
					{
					case '0':
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
						break;
					case '1':
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
					case '2':
						cout << " " << twenty;
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
						break;
					case '3':
						cout << " " << thirty;
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
						break;
					case '4':
						cout << " " << forty;
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
						break;
					case '5':
						cout << " " << fifty;
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
						break;
					case '6':
						cout << " " << sixty;
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
						break;
					case '7':
						cout << " " << seventy;
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
						break;
					case '8':
						cout << " " << eighty;
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
						break;
					case '9':
						cout << " " << ninety;
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
						break;
					}
					break;
				}
				break;
			}
			break; //1000-9999
		}
	}
};
#endif
