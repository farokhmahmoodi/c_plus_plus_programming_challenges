/*An amateur meteorologist wants to keep track of weather conditions during the past year’s three-month summer season and has 
designated each day as either rainy (‘R’), cloudy (‘C’), or sunny (‘S’). Write a modular program that stores this information in a 
3 × 30 array of characters, where the row indicates the month (0 = June, 1=July, 2=August) and the column indicates the day of 
the month. Note that data is not being collected for the 31st of any month. The program should begin by calling a function 
to read the weather data in from a file. Then it should create a report that displays for each month and for the whole 
three-month period, how many days were rainy, how many were cloudy, and how many were sunny. To help it do this, 
it should use a value-returning function that is passed the array, the number of the month to examine, and the 
character to look for (‘R’, ‘C’, or ‘S’). This function should return the number of days the indicated month had 
the requested weather. Data for the program can be found in the rain_or_shine.dat file located in the Chapter 8 
programs folder on this book’s companion website.*/

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