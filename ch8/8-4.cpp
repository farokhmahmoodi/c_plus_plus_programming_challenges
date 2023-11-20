// 
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string names[5] = { "mild","medium", "sweet", "hot","zesty" };
	int sales[5];
	int lowest, highest;
	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Enter number of jars sold in past month for "
				<< names[i] << " salsa (greater than or equal to 0): ";
			cin >> sales[i];
			if (sales[i] < 0)
				cout << "INPUT ERROR." << endl;
		}while (sales[i] < 0);
	}

	lowest = highest = sales[0];
	for (int i = 1; i < 5; i++)
	{
		if (sales[i] > highest)
			highest = sales[i];
		else if (sales[i] < lowest)
			lowest = sales[i];
	}

	cout << setw(20) << "Sales Report" << endl;
	cout << "-----------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);
	for (int i = 0; i < 5; i++)
		cout << names[i] << ": " << sales[i] << endl;
	for (int i = 0; i < 5; i++)
	{
		if (sales[i] == highest)
			cout << "Highest Selling salsa this month is "
			<< names[i] << " with " << sales[i] << " sold." << endl;
		else if (sales[i] == lowest)
			cout << "Lowest Selling salsa this month is "
			<< names[i] << " with " << sales[i] << " sold." << endl;
	}
	return 0;
}

