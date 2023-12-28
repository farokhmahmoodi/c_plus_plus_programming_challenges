/*Write a program that determines which of a company’s four divisions (Northeast, Southeast, Northwest, and Southwest) had the greatest sales for a quarter. 
It should include the following two functions, which are called by main.

double getSales() is passed the name of a division. It asks the user for a division’s quarterly sales figure, validates that the input is not less than 0, then returns it. It should be called once for each division.

void findHighest() is passed the four sales totals. It determines which is the largest and prints the name of the high grossing division, along with its sales figure.
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

const string ne = "Northeast", se = "Southeast", nw = "Northwest", sw = "Southwest";

double getSales(string);
void findHighest(double, double, double, double);

int main()
{

	double neSales, seSales, nwSales, swSales;
	neSales = getSales(ne);
	seSales = getSales(se);
	nwSales = getSales(nw);
	swSales = getSales(sw);
	findHighest(neSales, seSales, nwSales, swSales);

	return 0;
}

double getSales(string divisionName)
{
	double sales;
	cout << "enter quarterly sales for " << divisionName << ": ";
	cin >> sales;
	while (sales < 0)
	{
		cout << "input error. enter quarterly sales for " << divisionName << " greater than 0: ";
		cin >> sales;
	}
	return sales;
}

void findHighest(double neSales, double seSales, double nwSales, double swSales)
{
	cout << fixed << showpoint << setprecision(2);
	if (neSales > seSales && neSales > nwSales && neSales > swSales)
		cout << ne << " division has highest sales this quarter which is $" << neSales << endl;
	else if (seSales > neSales && seSales > nwSales && seSales > swSales)
		cout << se << " division has highest sales this quarter which is $" << seSales << endl;
	else if (nwSales > neSales && nwSales > seSales && nwSales > swSales)
		cout << nw << " division has highest sales this quarter which is $" << nwSales << endl;
	else
		cout << sw << " division has highest sales this quarter which is $" << swSales << endl;
}

