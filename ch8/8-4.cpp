// 
//

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
