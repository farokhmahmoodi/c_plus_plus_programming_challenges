/*Write a program that reads the information in the file created by the program in Programming Challenge 15. 
The program should calculate and display the following information:

The total wholesale value of the inventory

The total retail value of the inventory

The total quantity of all items in the inventory*/

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

int main()
{
    double wholeSaleTotal = 0.0, retailTotal = 0.0;
    int quantityTotal = 0;
    Inventory a;
    fstream file("13-16.dat", ios::in | ios::binary);

    if (!file)
    {
        cout << "Error opening file." << endl;
        return 0;
    }
    file.read(reinterpret_cast<char*>(&a), sizeof(a));
    while (!file.eof())
    {
        wholeSaleTotal += a.wholeSaleCost * a.quantityOnHand;
        retailTotal += a.retailCost * a.quantityOnHand;
        quantityTotal += a.quantityOnHand;
        file.read(reinterpret_cast<char*>(&a), sizeof(a));
    }
    cout << "The total wholesale value of the inventory: $"
        << fixed << showpoint << setprecision(2) << wholeSaleTotal << endl;
    cout << "The total retail value of the inventory: $"
        << fixed << showpoint << setprecision(2) << retailTotal << endl;
    cout << "The total quantity of all items in the inventory: "
        << quantityTotal << endl;;
    file.close();

    return 0;
}
