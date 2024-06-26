/*Write a class named Coin. The Coin class should have the following member variable:

A string named sideUp. The sideUp member variable will hold either “heads” or “tails” indicating the side of the coin that is facing up.

The Coin class should have the following member functions:

A default constructor that randomly determines the side of the coin that is facing up (“heads” or “tails”) and initializes the sideUp member variable accordingly.

A void member function named toss that simulates the tossing of the coin. When the toss member function is called, it randomly determines the side of the coin that is facing up (“heads” or “tails”) and sets the sideUp member variable accordingly.

A member function named getSideUp that returns the value of the sideUp member variable.

Write a program that demonstrates the Coin class. The program should create an instance of the class and display the side that is initially facing up. Then, use a loop to toss the coin 20 times. Each time the coin is tossed, display the side that is facing up. The program should keep count of the number of times heads is facing up and the number of times tails is facing up, and display those values after the loop finishes.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Coin.h"
using namespace std;

int main()
{
	Coin a;
	cout << "side facing up is initially " <<  a.getSideUp() << endl;
	int hcount, tcount;
	hcount = tcount = 0;
	for (int i = 1; i <= 20; i++)
	{
		a.toss();
		cout << a.getSideUp() << endl;
		if (a.getSideUp() == "heads")
			hcount++;
		else
			tcount++;
	}
	cout << "number of times heads facing up: " << hcount << endl;
	cout << "number of times tails facing up: " << tcount << endl;
	return 0;
}

