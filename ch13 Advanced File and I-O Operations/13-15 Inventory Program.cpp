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
        switch (choice)
        {
        case 1:
            cout << "Enter item description of new record:";
            getline(cin, a.itemDescription);
            while (cout << "Enter quantity on hand for new record:"
                && !(cin >> a.quantityOnHand)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for quantity on hand for new record." << endl;
            }
            while (cout << "Enter wholesale cost for new record:"
                && !(cin >> a.wholeSaleCost)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for wholesale cost for new record." << endl;
            }
            while (cout << "Enter retail cost for new record:"
                && !(cin >> a.retailCost)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for retail cost for new record." << endl;
            }
            cin.ignore();
            
            break;
        case 2:

            break;
        case 3:

            break;
        }
    } while (choice != '4');
    file.close();

    return 0;
}
