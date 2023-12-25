// 
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a[3][7], low, high, total, avg;

	total = 0.0;
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 7; column++)
		{
			do
			{
				cout << "Input amount of food(greater than/equal to 0) eaten by monkey "
					<< (row + 1) << " for day " << (column + 1) << ": ";
				cin >> a[row][column];
				if (a[row][column] < 0)
					cout << "INPUT ERROR." << endl;
			} while (a[row][column] < 0);
			total += a[row][column];
		}
		if (row == 0)
		{
			low = high = total;
			total = 0.0;
		}
		else if (row == 1)
		{
			if (total < low)
				low = total;
			else if (total > high)
				high = total;
			total = 0.0;
		}
		else if (row == 2)
		{
			if (total < low)
				low = total;
			else if (total > high)
				high = total;
			total = 0.0;
		}
	}

	cout << endl << setw(50) << "Monkey Food Consumption Report" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);
	for (int column = 0; column < 7; column++)
	{
		for (int row = 0; row < 3; row++)
			total += a[row][column];
		avg = total / 3.0;
		cout << "The average amount of food eaten for day "
			<< (column + 1) << " for all monkeys is " << avg << " lbs" << endl;
		avg = total = 0.0;
	}
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 7; column++)
			total += a[row][column];
		if (total == low)
		{
			cout << "Monkey " << (row + 1) << " has lowest amount of food eaten in the week at "
				<< total << " lbs " << endl;
		}
		else if (total == high)
		{
			cout << "Monkey " << (row + 1) << " has highest amount of food eaten in the week at "
				<< total << " lbs " << endl;
		}
		total = 0.0;
	}
	return 0;
}

