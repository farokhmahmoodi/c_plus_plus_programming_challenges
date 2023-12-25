// 8-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int SIZE = 21;
	string a[SIZE] = {" ", "I", "II", "III", "IV", "V", "VI"
					, "VII", "VIII", "IX", "X", "XI"
					, "XII", "XIII", "XIV", "XV",
					"XVI", "XVII", "XVIII", "XIX", "XX"};
	int b[SIZE] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int num;
	cout << "This program displays roman numeral equivalent "
		<< " of any decimal number between 1 and 20." << endl;
	do {
		cout << "Enter a number between 1 and 20(or 0 to quit): ";
		cin >> num;
		if (num < 0 || num > 20)
			cout << "INPUT ERROR." << endl;
	} while (num < 0 || num > 20);
	while (num != 0)
	{
		for (int i = 1; i <= SIZE; i++)
		{
			if (num == b[i])
			{
				cout << "The roman numeral equivalent of " <<
					num << " is " << a[i] << endl;
				break;
			}
		}
		do {
			cout << "Enter a number between 1 and 20(or 0 to quit): ";
			cin >> num;
			if (num < 0 || num > 20)
				cout << "INPUT ERROR." << endl;
		} while (num < 0 || num > 20);
	}
	return 0;
}


