// start c++ 10th ed. maddis ch6_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
/*
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

