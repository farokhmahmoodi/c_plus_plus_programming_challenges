#include "teamScore.h"
#include <iostream>
#include <iomanip>

teamScore::teamScore(string n)
{
	name = n;
	wins = ties = losses = 0;
}

void teamScore::updateWins()
{
	wins++;
}

void teamScore::updateTies()
{
	ties++;
}

void teamScore::updateLosses()
{
	losses++;
}

void teamScore::displayRecord()
{
	cout << setw(20) << "Team Record" << endl;
	cout << "------------------------------------" << endl;
	cout << "Team Name: " << name << endl;
	cout << "Wins: " << wins << endl;
	cout << "Ties: " << ties << endl;
	cout << "Losses: " << losses << endl;
	cout << "Points: " << (wins * 3) + ties << endl << endl;
}