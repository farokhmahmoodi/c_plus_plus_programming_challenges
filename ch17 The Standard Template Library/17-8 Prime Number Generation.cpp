/*A positive integer greater than 1 is said to be prime if it has no divisors other than 1 and itself.
A positive integer greater than 1 is composite if it is not prime. Write a program that asks the user to
enter an integer greater than 1, and then displays all of the prime numbers that are less than or equal to
the number entered. The program should work as follows:

Once the user has entered a number, the program should populate a vector with all of the integers from 2, up
through the value entered.

The program should then use the STL's for_each function to step through the vector. The for_each function
should pass each element to a function object that displays the element if it is a prime number.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class IsPrime
{
public:
	void operator()(int num)
	{
		if (num > 1)
		{
			for (int x = 2; x <= num; x++)
			{
				if (num % x == 0)
				{
					if (num == x)
						cout << num << " ";
					else
						break;
				}
			}
		}
	}
};

int main()
{
	vector<int> nums;
	int num;

	do
	{
		while (cout << "Enter an integer greater than 1:" &&
			!(cin >> num)) {
			cin.clear(); //clear bad input flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
			cout << "Invalid input for integer." << endl;
		}
		if (num <= 1)
			cout << "Error. Integer is less than or equal to 1.\n";
	} while (num <= 1);
	for (int i = 2; i <= num; i++)
		nums.emplace_back(i);
	cout << "Prime numbers from 2 to " << num << " are:\n";
	for_each(nums.begin(), nums.end(), IsPrime());

    return 0;
}
