#ifndef FISH_H
#define FISH_H
#include <cstdlib>
#include <string>
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

class Fish
{
private:
	string fishCaught;
	int totalPoints, pointsEarned;
public:
	Fish();
	void diceRoll();
	string getFishCaught();
	int getTotalPoints();
	int getPointsEarned();
	void displayTotalPoints();
};
#endif
