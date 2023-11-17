// start c++ 10th ed. maddis ch6_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

double profit(int, double, double, double, double);

int main()
{
	int numShares;
	double purchasePricePerShare,
		purchaseCommissionPaid, salePricePerShare,
		saleCommissionPaid;
	char choice;

	do
	{
		cout << "enter number of shares\n";
		cin >> numShares;
		cout << "enter purchase price per share\n";
		cin >> purchasePricePerShare;
		cout << "enter purchase commission paid\n";
		cin >> purchaseCommissionPaid;
		cout << "enter sale price per share\n";
		cin >> salePricePerShare;
		cout << "enter sale commission paid\n";
		cin >> saleCommissionPaid;
		cin.ignore();
		cout << "The profit is $" << profit(numShares, purchasePricePerShare, purchaseCommissionPaid, salePricePerShare, saleCommissionPaid) << endl;
		cout << "Would you like to perform program again? (Y/N) ";
		cin >> choice;
	} while (toupper(choice) != 'N');

	return 0;
}

double profit(int numShares, double purchasePricePerShare, double purchaseCommissionPaid, double salePricePerShare, double saleCommissionPaid)
{
	return ((numShares * salePricePerShare) - saleCommissionPaid) - ((numShares * purchasePricePerShare) - purchaseCommissionPaid);

}