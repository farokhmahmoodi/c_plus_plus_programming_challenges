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
#include <iomanip>
using namespace std;

struct Inventory {
    string itemDescription;
    int quantityOnHand = 0;
    double wholeSaleCost = 0.0,
        retailCost = 0.0;
    string dateAddedToInventory;
};

bool validDate(string);

int main()
{
    Inventory a;
    fstream file("13-15.dat", ios::out | ios::app | ios::binary);
    int choice;
    long recNum;
    bool valid;

    if (!file)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    do
    {
        do
        {
            while (cout << "Select option from menu below." << endl
                << "1. Add new records to the file." << endl
                << "2. Display any record in the file." << endl
                << "3. Change any record in the file." << endl
                << "4. Quit" << endl
                && !(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for choice." << endl;
            }
            if (choice < 1 || choice > 4)
                cout << "Invalid input for choice." << endl;
        } while (choice < 1 || choice > 4);
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
            do
            {
                cout << "Enter date new record is added to inventory in format MM/DD/YYYY:";
                getline(cin, a.dateAddedToInventory);
                valid = validDate(a.dateAddedToInventory);
                if (!valid)
                {
                    cout << "Date entered is invalid." << endl;
                }
            } while (!valid);
            file.write(reinterpret_cast<char*>(&a), sizeof(a));
            break;
        case 2:
            file.close();
            file.open("13-15.dat", ios::in | ios::out | ios::binary);
            while (cout << "Which record would you like to display?"
                && !(cin >> recNum)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for record to display." << endl;
            }
            cin.ignore();
            file.seekg(recNum * sizeof(a), ios::beg);
            file.read(reinterpret_cast<char*>(&a), sizeof(a));
            cout << "Item Description:" << a.itemDescription << endl;
            cout << "Quantity on Hand:" << a.quantityOnHand << endl;
            cout << "Wholesale Cost:$" << fixed << showpoint
                << setprecision(2) << a.wholeSaleCost << endl;
            cout << "Retail Cost:$" << fixed << showpoint
                << setprecision(2) << a.retailCost << endl;
            cout << "Date added to inventory:" << a.dateAddedToInventory << endl;
            break;
        case 3:
            file.close();
            file.open("13-15.dat", ios::in | ios::out | ios::binary);
            while (cout << "Which record would you like to edit?"
                && !(cin >> recNum)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for record to edit." << endl;
            }
            cin.ignore();
            cout << "Enter new data below\n";
            cout << "Item description : ";
            getline(cin, a.itemDescription);
            while (cout << "Quantity on hand:"
                && !(cin >> a.quantityOnHand)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for quantity on hand." << endl;
            }
            while (cout << "Wholesale cost:"
                && !(cin >> a.wholeSaleCost)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for wholesale cost." << endl;
            }
            while (cout << "Retail cost:"
                && !(cin >> a.retailCost)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for retail cost." << endl;
            }
            cin.ignore();
            do
            {
                cout << "Date added to inventory in format MM/DD/YYYY:";
                getline(cin, a.dateAddedToInventory);
                valid = validDate(a.dateAddedToInventory);
                if (!valid)
                {
                    cout << "Date entered is invalid." << endl;
                }
            } while (!valid);
            file.seekp(recNum * sizeof(a), ios::beg);
            file.write(reinterpret_cast<char*>(&a), sizeof(a));
            break;
        }
    } while (choice != 4);
    file.close();

    return 0;
}

bool validDate(string date)
{
    if (date.length() != 10)
    {
        return false;
    }
    if (date[2] != '/' || date[5] != '/')
    {
        return false;
    }
    for (int i = 0; i < date.length(); i++)
    {
        if (i != 2 && i != 5)
        {
            if (!isdigit(date[i]))
            {
                return false;
            }
        }
    }
    return true;
}
