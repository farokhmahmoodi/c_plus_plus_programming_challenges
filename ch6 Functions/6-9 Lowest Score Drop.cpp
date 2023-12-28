/*Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions:

void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate that it is not lower than 0 or higher than 100. This function should be called by main once for each of the five scores to be entered.

void calcAverage() should calculate and display the average of the four highest scores. This function should be called just once by main and should be passed the five scores.

int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function to determine which one of the five scores to drop.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
using namespace std;

void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int score1, score2, score3, score4, score5;
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);
	calcAverage(score1, score2, score3, score4, score5);

	return 0;
}

void getScore(int& score)
{
	do
	{
		cout << "enter test score between 0 and 100:";
		cin >> score;
		if (score < 0 || score > 100)
		{
			cout << "input error. enter test score between 0 and 100:";
		}
	} while (score < 0 || score > 100);
}


void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	double avg = 0.0;
	int lowest = findLowest(score1, score2, score3, score4, score5);
	cout << lowest << endl;
	if (score1 == lowest)
		avg = (score2 + score3 + score4 + score5) / 4.0;
	else if (score2 == lowest)
		avg = (score1 + score3 + score4 + score5) / 4.0;
	else if (score3 == lowest)
		avg = (score1 + score2 + score4 + score5) / 4.0;
	else if (score4 == lowest)
		avg = (score1 + score2 + score3 + score5) / 4.0;
	else
		avg = (score1 + score2 + score3 + score4) / 4.0;

	cout << fixed << showpoint << setprecision(2);
	cout << "The average is " << avg << endl;


}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
		return score1;
	else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
		return score2;
	else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
		return score3;
	else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
		return score4;
	else
		return score5;
}
