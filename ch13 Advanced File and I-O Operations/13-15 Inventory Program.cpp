/*Write a program that uses a structure to store the following inventory information in a file:

Item description

Quantity on hand

Wholesale cost

Retail cost

Date added to inventory

The program should have a menu that allows the user to perform the following tasks:

Add new records to the file.

Display any record in the file.

Change any record in the file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Inventory {
    string itemDescription;
    int quantityOnHand;
    double wholeSaleCost,
        retailCost;
    string dateAddedToInventory;
};

int main()
{
    Inventory a;
    fstream file("13-15.dat", ios::in | ios::out | ios::binary);

    if (!file)
    {
        cout << "File failed to open." << endl;
        return 0;
    }


    file.close();

    return 0;
}
