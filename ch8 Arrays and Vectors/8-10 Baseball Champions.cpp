/*This challenge uses two files located in the Chapter 8 programs folder on the book’s companion website.

teams.dat contains an alphabetical list of a number of Major League baseball teams that have won the World Series at least once.

WorldSeriesWinners.dat contains a chronological list of World Series’ winning teams from 1950 through 2014. The first line in the 
file is the name of the team that won in 1950, and the last line is the name of the team that won in 2014. (Note that the 
World Series was not played in 1994.)

Write a program that reads the contents of each of these files into an array or vector. It should then display the contents of 
the teams.dat file on the screen and prompt the user to enter the name of one of the teams. When the user enters a team name, 
the program should display the number of times that team has won the World Series in the time period from 1950 through 2014.*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void readIntoVector(ifstream&, vector<string>&);
void showValues(const vector<string> &);
void numTimesWon(const vector<string>&, const vector<string>&);

int main()
{
	vector<string> teams, winners;
	ifstream in("C:\\Users\\FM\\source\\repos\\start c++ ch8\\8-10\\teams.dat"), 
		in2("C:\\Users\\FM\\source\\repos\\start c++ ch8\\8-10\\WorldSeriesWinners.dat");
	readIntoVector(in, teams);
	readIntoVector(in2, winners);
	showValues(teams);
	numTimesWon(teams, winners);
	return 0;
}

void readIntoVector(ifstream& in, vector<string>& a)
{
	if (in)
	{
		string temp;
		while (getline(in, temp))
		{
			a.push_back(temp);
		}
	}
	else 
		cout << "Error opening file." << endl;
}

void showValues(const vector<string> &a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << endl;
}

void numTimesWon(const vector<string>& a, const vector<string>& b)
{
	char choice;
	string name;
	bool match = false;
	int count = 0;
	do
	{
		do
		{
			cout << "Enter name of a team and I will display number of"
				<< " times that team has won the World Series"
				<< " from 1950 to 2014: ";
			getline(cin, name);
			for (int i = 0; i < a.size(); i++)
			{
				if (name == a[i])
				{
					match = true;
					break;
				}
			}
			if (match == false)
				cout << "INPUT ERROR. No team matches name you entered." << endl;
		} while (match == false);
		match = false;

		for (int i = 0; i < b.size(); i++)
		{
			if (name == b[i])
				count++;
		}
		cout << "The " << name << " have won " << count << " World Series "
			<< "from 1950 to 2014." << endl;
		count = 0;
		
		cout << "Would you like to try another team? (y/n): ";
		cin >> choice;
		cin.ignore();
	} while (toupper(choice) == 'Y');


}