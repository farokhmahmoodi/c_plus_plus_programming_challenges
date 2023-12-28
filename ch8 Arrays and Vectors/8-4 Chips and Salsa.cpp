/*Write a program that lets a maker of chips and salsa keep track of their sales for five different types of salsa they produce:
 mild, medium, sweet, hot, and zesty. It should use two parallel five-element arrays: an array of strings that holds the five 
 salsa names and an array of integers that holds the number of jars sold during the past month for each salsa type. 
 The salsa names should be stored using an initialization list at the time the name array is created. The program should 
 prompt the user to enter the number of jars sold for each type. Once this sales data has been entered, the program should 
 produce a report that displays sales for each salsa type, total sales, and the names of the highest selling and lowest 
 selling products.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int SIZE = 5;
void inputSales(const string[], int sales[]);
void findLowAndHigh(int&, int&, const int[]);
void displayReport(const string[], const int[], int, int);

int main()
{
	string names[SIZE] = { "mild","medium", "sweet", "hot","zesty" };
	int sales[SIZE];
	int high, low;
	inputSales(names, sales);
	high = low = sales[0];
	findLowAndHigh(high, low, sales);
	displayReport(names, sales, high, low);
	return 0;
}

void inputSales(const string names[], int sales[])
{
	for (int i = 0; i < SIZE; i++)
	{
		do
		{
			cout << "Enter number of jars sold in past month for "
				<< names[i] << " salsa: ";
			cin >> sales[i];
			if (sales[i] < 0)
				cout << "INPUT ERROR. Number of Jars sold must" 
				<< " be greater than or equal to 0." << endl;
		} while (sales[i] < 0);
	}
}
void findLowAndHigh(int& high, int& low, const int sales[])
{
	for (int i = 1; i < SIZE; i++)
	{
		if (sales[i] > high)
			high = sales[i];
		else if (sales[i] < low)
			low = sales[i];
	}
}

void displayReport(const string names[], const int sales[], int high, int low)
{
	cout << setw(20) << "Sales Report" << endl;
	cout << "-----------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);
	for (int i = 0; i < SIZE; i++)
		cout << names[i] << ": " << sales[i] << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (sales[i] == high)
			cout << "Highest selling salsa this month is "
			<< names[i] << " with " << sales[i] << " sold." << endl;
		else if (sales[i] == low)
			cout << "Lowest selling salsa this month is "
			<< names[i] << " with " << sales[i] << " sold." << endl;
	}


}
