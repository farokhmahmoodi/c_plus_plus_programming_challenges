/*The Middletown Wholesale Copper Wire Company sells spools of copper wiring for $100 each and ships them for $10 apiece. Write a program that displays the status of an order. It should use two functions. The first function asks for the following data and stores the input values in reference parameters.

The number of spools ordered.

The number of spools in stock.

Any special shipping and handling charges (above the regular $10 rate).

The second function receives as arguments any values needed to compute and display the following information:

The number of ordered spools ready to ship from current stock.

The number of ordered spools on backorder (if the number ordered is greater than what is in stock).

Total selling price of the portion ready to ship (the number of spools ready to ship times $100).

Total shipping and handling charges on the portion ready to ship.

Total of the order ready to ship.

The shipping and handling parameter in the second function should have the default argument 10.00.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include<fstream>
#include<cctype>
#include<cmath> 
#include <windows.h> //for colored text
using namespace std;

const int PRICE_SPOOL = 100; //$100

void inputData(int&, int&, int&);
void printReport(int, int, int, int = 10);

int main()
{
    int numSpoolsOrder, numSpoolsInStock, specialShippingCharges;
    inputData(numSpoolsOrder, numSpoolsInStock, specialShippingCharges);
    printReport(numSpoolsOrder, numSpoolsInStock, specialShippingCharges);


    return 0;
}

void inputData(int& numSpoolsOrder, int& numSpoolsInStock, int& specialShippingCharges)
{
    cout << "num spools ordered:";
    cin >> numSpoolsOrder;
    cout << "num spools in stock:";
    cin >> numSpoolsInStock;
    cout << "any special shipping and handling charges(above regular $10 rate):";
    cin >> specialShippingCharges;
}

void printReport(int numSpoolsOrder, int numSpoolsInStock, int specialShippingCharges, int priceShipPerSpool)
{
    int backorder;
    if (numSpoolsOrder - numSpoolsInStock <= 0)
        backorder = 0;
    else
        backorder = numSpoolsOrder - numSpoolsInStock;
    int readyShip;
    if (numSpoolsOrder - numSpoolsInStock <= 0)
        readyShip = numSpoolsOrder;
    else
        readyShip = numSpoolsOrder - (numSpoolsOrder - numSpoolsInStock);
    int readyOrderPrice = readyShip * PRICE_SPOOL;
    int readyShipPrice = specialShippingCharges + (readyShip * priceShipPerSpool);
    int total = readyOrderPrice + readyShipPrice;
    cout << "\nMiddletown Wholesale Copper Wire Company Order Invoice\n";
    cout << "--------------------------------------------\n";
    cout << "Ordered Spools ready to ship from stock: " << readyShip << endl;
    cout << "Ordered Spools on backorder: " << backorder << endl;
    cout << "Total selling price on order ready to ship: $" << readyOrderPrice << endl;
    cout << "Total shipping charges on order ready to ship: $" << readyShipPrice << endl;
    cout << "Total of order ready to ship: $" << total << endl;
}

