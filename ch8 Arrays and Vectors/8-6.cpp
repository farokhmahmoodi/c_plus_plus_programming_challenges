// 
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_ROWS = 3;
const int NUM_COLS = 30;
void readIntoArray(ifstream&, char[NUM_ROWS][NUM_COLS]);
int numDays(const char[NUM_ROWS][NUM_COLS], int, char);
void displayReport(const char[NUM_ROWS][NUM_COLS]);

int main()
{
	char a[NUM_ROWS][NUM_COLS];
	ifstream inputFile("C:\\Users\\P3209584\\source\\repos\\start c++ ch8\\8-6\\RainOrShine.dat");
	readIntoArray(inputFile, a);
	displayReport(a);
	return 0;
}

void readIntoArray(ifstream& in, char a[NUM_ROWS][NUM_COLS])
{
	for (int row = 0; row < NUM_ROWS; row++)
	{
		for (int column = 0; column < NUM_COLS; column++)
		{
			in >> a[row][column];
		}
	}
	in.close();
}

int numDays(const char a[NUM_ROWS][NUM_COLS], int month, char c)
{
	int count = 0;
	for (int row = 0; row < NUM_ROWS; row++)
	{
		for (int column = 0; column < NUM_COLS; column++)
		{
			if (row == month && a[row][column] == c)
				count++;
		}
	}
	return count;
}

void displayReport(const char a[NUM_ROWS][NUM_COLS])
{
	cout << setw(40) << "Weather Report" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << setw(20) << "Rainy Days" << setw(20) << "Cloudy Days" << setw(20) << "Sunny Days" << endl;
	for (int row = 0; row < NUM_ROWS; row++)
	{
		cout << "Month " << row << ": " << setw(7) << numDays(a,row,'R') 
			<< setw(19) << numDays(a, row, 'C') << setw(20) << numDays(a, row, 'S') << endl;
	}
}