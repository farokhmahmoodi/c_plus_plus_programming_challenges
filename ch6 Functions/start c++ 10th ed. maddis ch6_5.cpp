// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
