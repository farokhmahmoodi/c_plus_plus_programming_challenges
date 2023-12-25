// start c++ 10th ed. maddis ch6_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
dsfasf
asdfasdfasdfsad
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
