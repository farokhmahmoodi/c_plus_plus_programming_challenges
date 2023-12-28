/*Design and write an object-oriented program for managing inventory bins in a warehouse. To do this you will use two classes: 
InvBin and BinManager. The InvBin class holds information about a single bin. The BinManager class will own and manage an array 
of InvBin objects. Here is a skeleton of what the InvBin and BinManager class declarations should look like:


class InvBin 
{
    private:
       string description;                     // Item name
       int qty;                                // Quantity of items
                                               // in this bin
    public:
      InvBin (string d = "empty", int q = 0)   // 2-parameter constructor
        {    description = d;  qty = q; }      // with default values

       // It will also have the following public member functions. They
       // will be used by the BinManager class, not the client program.
       void setDescription(string d)
       string getDescription()
       void setQty(int q)
       int getQty( )
};
class BinManager 
{
    private:
       InvBin bin[30];                           // Array of InvBin objects
       int numBins;                              // Number of bins
                                                 // currently in use
    public:
       BinManager()                              // Default constructor
       {   numBins = 0; }     
       BinManager(int size, string d[], int q[]) // 3-parameter constructor
       {   // Receives number of bins in use and parallel arrays of item names
           // and quantities. Uses this info. to store values in the elements
           // of the bin array. Remember, these elements are InvBin objects.
       }
       // The class will also have the following public member functions:
       string getDescription(int index)          // Returns name of one item
       int getQuantity(int index)                // Returns qty of one item
       bool addParts(int binIndex, int q)        // These return true if the
       bool removeParts(int binIndex, int q)     // action was done and false
                                                 // if it could not be done—
                                                 // see validation information
};

Client Program
Once you have created these two classes, write a menu-driven client program that uses a BinManager object to manage its 
warehouse bins. It should initialize it to use nine of the bins, holding the following item descriptions and quantities. The bin 
index where the item will be stored is also shown here.

regular pliers 25

n. nose pliers 5

screwdriver 25

p. head screw driver 6

wrench-large 7

wrench-small 18

drill 51

cordless drill 16

hand saw 12

The modular client program should have functions to display a menu, get and validate the user’s choice, and carry out the 
necessary activities to handle that choice. This includes adding items to a bin, removing items from a bin, and displaying a 
report of all bins. Think about what calls the displayReport client function will need to make to the BinManager object to create 
this report. When the user chooses the “Quit” option from the menu, the program should call its displayReport function one last 
time to display the final bin information. All I/O should be done in the client class. The BinManager class only accepts 
information, keeps the array of InvBin objects up to date, and returns information to the client program.

Input Validation: The BinManager class functions should not accept numbers less than 1 for the number of parts being added or 
removed from a bin. They should also not allow the user to remove more items from a bin than it currently holds.
*/

#include <iostream>
#include "BinManager.h"
#include <iomanip>

void displayMainMenu();
void displaySubMenu(BinManager&, int);
bool validateChoice(int);
void displayReport(BinManager&);

int main()
{
	string names[10] = {" ", "regular pliers", "n. nose pliers", "screwdriver",
	"p. head screw driver", "wrench-large", "wrench-small", "drill",
	"cordless drill", "hand saw" };
	int qties[10] = {0,25,5,25,6,7,18,51,16,12};
	BinManager a(10, names, qties);
	int choice;

	do
	{
		do
		{
			displayMainMenu();
			cin >> choice;
		} while (!validateChoice(choice));
		if (choice != 4)
			displaySubMenu(a, choice);
		else
			displayReport(a);
	} while (choice != 4);

	return 0;
}

void displayMainMenu()
{
	cout << setw(30) << "Welcome to Warehouse Bin Management Program" << endl;
	cout << "Select an option from menu below." << endl;
	cout << "1. Add Parts  " << "2. Remove Parts  " 
		<< "3. Display Report  " << "4. Quit" << endl;
}

void displaySubMenu(BinManager& a, int choice)
{
	int q,subchoice;
	switch (choice)
	{
	case 1:
		do
		{
			cout << "Select a bin to add parts to." << endl;
			for (int i = 1; i < 10; i++)
			{
				if (i % 3 == 0)
					cout << i << ".) " << a.getDescription(i)
					<< " " << a.getQuantity(i) << endl;
				else
					cout << i << ".) " << a.getDescription(i)
					<< " " << a.getQuantity(i) << "    ";
			}
			cin >> subchoice;
			if (subchoice < 1 || subchoice > 9)
				cout << "Invalid choice." << endl;
		} while (subchoice < 1 || subchoice > 9);
		cout << "How many parts do you want to add? ";
		cin >> q;
		if (!a.addParts(subchoice, q))
			cout << "Parts could not be added." << endl;
		break;
	case 2:
		do
		{
			cout << "Select a bin to remove parts from." << endl;
			for (int i = 1; i < 10; i++)
			{
				if (i % 3 == 0)
					cout << i << ".) " << a.getDescription(i)
					<< " " << a.getQuantity(i) << endl;
				else
					cout << i << ".) " << a.getDescription(i)
					<< " " << a.getQuantity(i) << "    ";
			}
			cin >> subchoice;
			if (subchoice < 1 || subchoice > 9)
				cout << "Invalid choice." << endl;
		} while (subchoice < 1 || subchoice > 9);
		cout << "How many parts do you want to remove? ";
		cin >> q;
		if (!a.removeParts(subchoice, q))
			cout << "Parts could not be removed." << endl;
		break;
	case 3:
		displayReport(a);
		break;
	}
}

bool validateChoice(int choice)
{
	if (choice < 1 || choice > 4)
	{
		cout << "Invalidate choice." << endl;
		return false;
	}

	else
		return true;
}

void displayReport(BinManager& a)
{
	cout << endl;
	for (int i = 1; i < 10; i++)
	{
		if (i % 3 == 0)
			cout << i << ".) " << a.getDescription(i)
			<< " " << a.getQuantity(i) << endl;
		else
			cout << i << ".) " << a.getDescription(i)
			<< " " << a.getQuantity(i) << "    ";
	}
	cout << endl;
}