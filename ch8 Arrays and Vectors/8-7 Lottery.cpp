/*Write a program that simulates a lottery. The program should have an array of five integers named winningDigits, with a 
randomly generated number in the range of 0 through 9 for each element in the array. The program should ask the user to enter 
five digits and should store them in a second integer array named player. The program must compare the corresponding elements 
in the  two arrays and count how many digits match. For example, the following shows the winningDigits array and the Player array 
with sample numbers stored in each. There are two matching digits, elements 2 and 4.

WinningDigits	
7	4	9	1	3
player	
4	2	9	7	3
Once the user has entered a set of numbers, the program should display the winning digits and the player’s digits and 
tell how many digits matched.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MIN = 0;
const int MAX = 9;

int main()
{
	unsigned seed;
	seed = time(0);
	srand(seed);
	int winningDigits[5], player[5], count = 0;
	for (int i = 0; i < 5; i++)
		winningDigits[i] = rand() % (MAX - MIN + 1) + MIN;
	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Enter digit " << (i + 1) << " for your lottery numbers: ";
			cin >> player[i];
			if (player[i] < 0)
				cout << "input error. digit must be greater than or equal to 0." << endl;
		} while (player[i] < 0);
	}

	for (int i = 0; i < 5; i++)
	{
		if (winningDigits[i] == player[i])
			count++;
	}

	cout << endl <<  "Winning Digits are ";
	for (int i = 0; i < 5; i++)
		cout << winningDigits[i] << " ";
	cout << endl;
	cout << "Your digits are ";
	for (int i = 0; i < 5; i++)
		cout << player[i] << " ";
	cout << endl;
	cout << "Number of matching digits is " << count << endl;
	return 0;
}
