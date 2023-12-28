/*Create a game program using the Coin class from Programming Challenge 16. The program should have three instances of the Coin class: one representing a quarter, one representing a dime, and one representing a nickel.

When the game begins, your starting balance is $0. During each round of the game, the program will toss each of the simulated coins. When a tossed coin lands heads-up, the value of the coin is added to your balance. For example, if the quarter lands heads-up, 25 cents is added to your balance. 
Nothing is added to your balance for coins that land tails-up. The game is over when your balance reaches one dollar or more. If your balance is exactly one dollar, you win the game. If your balance exceeds one dollar, you lose.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "Coin.h"
using namespace std;

int main()
{
	double balance = 0;
	Coin quarter, dime, nickel;
	while (balance < 1.00)
	{
		quarter.toss();
		if (quarter.getSideUp() == "heads")
			balance += .25;
		dime.toss();
		if (dime.getSideUp() == "heads")
			balance += .10;
		nickel.toss();
		if (nickel.getSideUp() == "heads")
			balance += .05;
	}
	cout << fixed << showpoint << setprecision(2);
	if (balance == 1.00)
		cout << "You won! Balance: $" << balance << endl;
	else
		cout << "You lose. Balance: $" << balance << endl;

	return 0;
}

