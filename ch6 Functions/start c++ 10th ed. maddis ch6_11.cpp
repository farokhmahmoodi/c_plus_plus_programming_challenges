// start c++ 10th ed. maddis ch6_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
dsfasf
asdfasdfasdfsad
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
using namespace std;

bool isPrime(int);


int main()
{
	int num;
	char choice;
	do
	{
		cout << "enter number:";
		cin >> num;
		if (isPrime(num))
			cout << "number is prime.\n";
		else
			cout << "number is not prime.\n";
		cout << "Would you like to continue? (Y/N):";
		cin >> choice;
	} while (toupper(choice) != 'N');
	return 0;
}

bool isPrime(int num)
{
	if (num <= 1)
		return false;
	else
	{
		for (int x = 2; x <= num; x++)
		{
			if (num % x == 0)
			{
				if (num == x)
					return true;
				else
					return false;

			}
		}
	}
}

