/*A particular talent competition has five judges, each of whom awards a score between 0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer’s final score is determined by dropping the highest and lowest score received, then averaging the three remaining scores. Write a program that uses these rules to calculate and display a contestant’s score. It should include the following functions:

double getJudgeData() should ask the user for a judge’s score, validate it, and then return it. This function should be called by main once for each of the five judges.

double calcScore() should calculate and return the average of the three scores that remain after dropping the highest and lowest scores the performer received. This function should be called just once by main and should be passed the five scores.

Two additional functions, described below, should be called by calcScore, which uses the returned information to determine which scores to drop.

int findLowest() should find and return the lowest of the five scores passed to it.

int findHighest() should find and return the highest of the five scores passed to it.
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

double getJudgeData();
double calcScore(double, double, double, double, double);
int findLowest(double, double, double, double, double);
int findHighest(double, double, double, double, double);

int main()
{
	double score1, score2, score3, score4, score5;
	score1 = getJudgeData();
	score2 = getJudgeData();
	score3 = getJudgeData();
	score4 = getJudgeData();
	score5 = getJudgeData();
	cout << "The average is " << calcScore(score1, score2, score3, score4, score5) << endl;
	return 0;
}

double getJudgeData()
{
	double score;
	do
	{
		cout << "enter score between 0 and 10:";
		cin >> score;
		if (score < 0 || score > 10)
			cout << "error. score must be between 0 and 10!\n";
	} while (score < 0 || score > 10);
	return score;
}

double calcScore(double score1, double score2, double score3, double score4, double score5)
{
	double avg;
	int lowest = findLowest(score1, score2, score3, score4, score5);
	cout << lowest << endl;
	int highest = findHighest(score1, score2, score3, score4, score5);
	cout << highest << endl;
	if (static_cast<int>(score1) == lowest)
	{
		if (static_cast<int>(score2) == highest)
			avg = (score3 + score4 + score5) / 3.0;
		else if (static_cast<int>(score3) == highest)
			avg = (score2 + score4 + score5) / 3.0;
		else if (static_cast<int>(score4) == highest)
			avg = (score2 + score3 + score5) / 3.0;
		else //score5 == highest
			avg = (score2 + score3 + score4) / 3.0;
	}
	else if (static_cast<int>(score2) == lowest)
	{
		if (static_cast<int>(score1) == highest)
			avg = (score3 + score4 + score5) / 3.0;
		else if (static_cast<int>(score3) == highest)
			avg = (score1 + score4 + score5) / 3.0;
		else if (static_cast<int>(score4) == highest)
			avg = (score1 + score3 + score5) / 3.0;
		else //score5 == highest
			avg = (score1 + score3 + score4) / 3.0;
	}
	else if (static_cast<int>(score3) == lowest)
	{
		if (static_cast<int>(score1) == highest)
			avg = (score2 + score4 + score5) / 3.0;
		else if (static_cast<int>(score2) == highest)
			avg = (score1 + score4 + score5) / 3.0;
		else if (static_cast<int>(score4) == highest)
			avg = (score1 + score4 + score5) / 3.0;
		else //score5 == highest
			avg = (score1 + score2 + score4) / 3.0;
	}
	else if (static_cast<int>(score4) == lowest)
	{
		if (static_cast<int>(score1) == highest)
			avg = (score2 + score3 + score5) / 3.0;
		else if (static_cast<int>(score2) == highest)
			avg = (score1 + score3 + score5) / 3.0;
		else if (static_cast<int>(score3) == highest)
			avg = (score1 + score2 + score5) / 3.0;
		else //score5 == highest
			avg = (score1 + score2 + score3) / 3.0;
	}
	else //score5 == lowest
	{
		if (static_cast<int>(score1) == highest)
			avg = (score2 + score3 + score4) / 3.0;
		else if (static_cast<int>(score2) == highest)
			avg = (score1 + score3 + score4) / 3.0;
		else if (static_cast<int>(score3) == highest)
			avg = (score1 + score2 + score4) / 3.0;
		else //score4 == highest
			avg = (score1 + score2 + score3) / 3.0;
	}
	return avg;
}

int findLowest(double score1, double score2, double score3, double score4, double score5)
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

int findHighest(double score1, double score2, double score3, double score4, double score5)
{
	if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
		return score1;
	else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
		return score2;
	else if (score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5)
		return score3;
	else if (score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5)
		return score4;
	else
		return score5;
}
