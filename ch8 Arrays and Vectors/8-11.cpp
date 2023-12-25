// 
//

#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"
using namespace std;

const int SIZE = 5;

int main()
{
	Product product[SIZE] = {Product("mild"),Product("medium"), Product("sweet"),
								Product("hot"), Product("zesty")};
	int high, low, q;

	for (int i = 0; i < SIZE; i++)
	{
		do
		{
			cout << "Enter number of jars sold in past month for "
				<< product[i].getName() << " salsa: ";
			cin >> q;
			if (q < 0)
				cout << "INPUT ERROR. Number of Jars sold must"
				<< " be greater than or equal to 0." << endl;
		} while (q < 0);
		product[i].setQuantity(q);
	}

	high = low = product[0].getQuantity();
	for (int i = 1; i < SIZE; i++)
	{
		if (product[i].getQuantity() > high)
			high = product[i].getQuantity();
		else if (product[i].getQuantity() < low)
			low = product[i].getQuantity();
	}

	cout << setw(20) << "Sales Report" << endl;
	cout << "-----------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);
	for (int i = 0; i < SIZE; i++)
		cout << product[i].getName() << ": " << product[i].getQuantity() << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (product[i].getQuantity() == high)
			cout << "Highest selling salsa this month is "
			<< product[i].getName() << " with " << product[i].getQuantity() << " sold." << endl;
		else if (product[i].getQuantity() == low)
			cout << "Lowest selling salsa this month is "
			<< product[i].getName() << " with " << product[i].getQuantity() << " sold." << endl;
	}
	return 0;
}
