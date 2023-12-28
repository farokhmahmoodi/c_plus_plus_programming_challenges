/*Write a program that simulates a fishing game. In this game, a six-sided die is rolled to determine what the user has caught. Each possible item is worth a certain number of fishing points. The points will remain hidden until the user is finished fishing, and then a message is displayed congratulating the user depending on the number of fishing points gained.

Here are some suggestions for the game’s design:

Each round of the game is performed as an iteration of a loop that repeats as long as the player wants to fish for more items.

At the end of each round, the program will ask the user whether or not he or she wants to continue fishing.

The program simulates the rolling of a six-sided die

Each item that can be caught is represented by a number generated from the die—for example, 1 for “a huge fish”, 2 for “an old shoe”, 3 for “a little fish”, and so on.

Each item the user catches is worth a different number of points.

You, the program designer, get to decide what fish or object each number will represent and how many points is associated with each “catch”.

The loop keeps a running total of the user’s fishing points.

When the loop is exited, the total number of fishing points is displayed, along with a message that varies depending on the number of points earned.
*/

#include <iostream>
#include <iomanip>
#include "Fish.h"
using namespace std;

int main()
{
	Fish a;
	int choice;

	do {
		cout << "Welcome to Fishing Game! Enter choice from menu below." << endl;
		cout << "1. Play" << endl;
		cout << "2. Quit" << endl;
		cin >> choice;
		if (choice < 1 || choice > 2)
			cout << "Input error. please enter valid choice from menu." << endl;
	} while (choice < 1 || choice > 2);
	while (choice != 2)
	{
		switch (choice)
		{
		case 1:
			cout << "Now we roll a dice to determine what fish you will catch." << endl;
			a.diceRoll();
			cout << "Fish caught: " << a.getFishCaught() << endl;
			cout << "Points Earned: " << a.getPointsEarned() << endl;
			break;
		}
		cout << "Would you like to play another round? (1 for yes , 2 for no)" << endl;
		cin >> choice;
		while (choice < 1 || choice > 2)
		{
			cout << "Input error. Please enter valid choice." << endl;
			cout << "Would you like to play another round? (1 for yes , 2 for no)" << endl;
			cin >> choice;
		}
	}
	a.displayTotalPoints();
	return 0;
}

