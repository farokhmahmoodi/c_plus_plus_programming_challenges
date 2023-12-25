#ifndef TEAMSCORE_H
#define TEAMSCORE_H
#include <string>
using namespace std;

class teamScore
{
private:
	string name;
	int wins, ties, losses;
public:
	teamScore(string);
	void updateWins();
	void updateTies();
	void updateLosses();
	void displayRecord();
};
#endif