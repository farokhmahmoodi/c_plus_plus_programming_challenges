#include "Fish.h"

Fish::Fish()
{
	fishCaught = " "; totalPoints = 0;
}

void Fish::diceRoll()
{
	unsigned seed;
	seed = time(0);
	srand(seed);
	int dice = rand() % 6 + 1;
	if (dice == 1)
	{
		cout << "Dice side landed: " << dice << endl;
		fishCaught = "littlest fish";
		pointsEarned = 2;
		totalPoints += 2;
	}
	else if (dice == 2)
	{
		cout << "Dice side landed: " << dice << endl;
		fishCaught = "littler fish";
		pointsEarned = 4;
		totalPoints += 4;
	}
	else if (dice == 3)
	{
		cout << "Dice side landed: " << dice << endl;
		fishCaught = "little fish";
		pointsEarned = 6;
		totalPoints += 6;
	}
	else if (dice == 4)
	{
		cout << "Dice side landed: " << dice << endl;
		fishCaught = "big fish";
		pointsEarned = 8;
		totalPoints += 8;
	}
	else if (dice == 5)
	{
		cout << "Dice side landed: " << dice << endl;
		fishCaught = "bigger fish";
		pointsEarned = 10;
		totalPoints += 10;
	}
	else
	{
		cout << "Dice side landed: " << dice << endl;
		fishCaught = "biggest fish";
		pointsEarned = 12;
		totalPoints += 12;
	}
	Sleep(1000);
}

string Fish::getFishCaught()
{
	return fishCaught;
}

int Fish::getPointsEarned()
{
	return pointsEarned;
}

int Fish::getTotalPoints()
{
	return totalPoints;
}

void Fish::displayTotalPoints()
{
	if (totalPoints > 0 && totalPoints < 100)
		cout << "Total Points Earned:" << totalPoints << " Good Job." << endl;
	else if (totalPoints >= 100 && totalPoints < 200)
		cout << "Total Points Earned:" << totalPoints << " Great Job!" << endl;
	else 
		cout << "Total Points Earned:" << totalPoints << " You're a master fisherman!" << endl;
}
