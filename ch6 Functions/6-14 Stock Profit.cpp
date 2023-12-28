/*The profit from the sale of a stock can be calculated as follows:

	Profit = ((NS * SP) - SC) - ((NS * PP) + PC)

where NS is the number of shares,

SP is the sale price per share,

SC is the sale commission paid,

PP is the purchase price per share,

and PC is the purchase commission paid.

If the calculation yields a positive value, then the sale of the stock resulted in a profit. If the calculation yields a negative number, then the sale resulted in a loss.

Write a function that accepts as arguments the number of shares, the purchase price per share, the purchase commission paid, the sale price per share, and the sale commission paid. The function should return the profit (or loss) from the sale of stock.

Demonstrate the function in a program that asks the user to enter the necessary data and displays the amount of the profit or loss
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