#include "Coin.h"

Coin::Coin()
{
	unsigned seed;
	seed = time(0);
	srand(seed);
	int randomNum = rand();
	if (randomNum % 2 == 0)
	{
		sideUp = "heads";
	}
	else
	{
		sideUp = "tails";
	}
	Sleep(1000);
}

void Coin::toss()
{
	int randomNum = rand();
	if (randomNum % 2 == 0)
	{
		sideUp = "heads";
	}
	else
	{
		sideUp = "tails";
	}
}

string Coin::getSideUp()
{
	return sideUp;
}