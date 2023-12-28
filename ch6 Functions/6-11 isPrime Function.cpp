/*A prime number is an integer greater than 1 that is evenly divisible by only 1 and itself. For example, the number 5 is prime because it can only be evenly divided by 1 and 5. The number 6, however, is not prime because it can be divided by 1, 2, 3, and 6.

Write a Boolean function named isPrime, which takes an integer as an argument and returns true if the argument is a prime number, and false otherwise. Demonstrate the function in a complete program.

Tip
Recall that the % operator divides one number by another and returns the remainder of the division. In an expression such as num1 % num2, the % operator will return 0 if num1 is evenly divisible by num2.
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

