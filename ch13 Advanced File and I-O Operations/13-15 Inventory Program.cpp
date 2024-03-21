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
    int choice;

    if (!file)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    do
    {
        cout << "Select option from menu below." << endl;
        cout << "1. Add new records to the file." << endl;
        cout << "2. Display any record in the file." << endl;
        cout << "3. Change any record in the file." << endl;
        cout << "4. Quit" << endl;
        cin >> choice;
        cin.ignore();
        
    } while (choice != '4');

    file.close();

    return 0;
}
