#include "TicketManager.h"

TicketManager::TicketManager(ifstream& prices, ifstream& availability)
{
	if (prices && availability)
	{
		for (int row = 0; row < 15; row++)
		{
			for (int column = 0; column < 30; column++)
			{
				if (column == 0)
					prices >> a[row][column].price;
				else
					a[row][column].price = a[row][0].price;
				availability >> a[row][column].availability;
			}
		}
		prices.close();
		availability.close();
	}
	else
		cout << "Error opening files." << endl;
}
void TicketManager::displaySeats()
{
	cout << setw(26) << "Seats" << endl;
	cout << setw(39) << "123456789012345678901234567890" << endl;
	for (int row = 0; row < 15; row++)
	{
		if (row < 9)
			cout << "Row " << (row + 1) << setw(5);
		else
			cout << "Row " << (row + 1) << setw(4);
		for (int column = 0; column < 30; column++)
		{
			cout << a[row][column].availability;
		}
		cout << endl;
	}
}

void TicketManager::ticketsRequest(int numSeats, int rowNum, int startingSeat)
{
	double total = 0.0;
	bool available = true;
	char choice;

	for (int row = rowNum - 1; row < rowNum; row++)
	{
		for (int column = startingSeat - 1, start = 0; start < numSeats; column++, start++)
		{
			if (a[row][column].availability == '*')
			{
				cout << "Seat in row " << (row + 1) << " column "
					<< (column + 1) << " is unavailable." << endl;
				available = false;
				break;
			}
			else if (column == 31)
			{
				cout << "Requested seats do not exist." << endl;
				available = false;
				break;
			}
			else
			{
				total += a[row][column].price;
			}
		}
	}
	if (available)
	{
		cout << "Number of requested seats: " << numSeats << endl;
		cout << fixed << showpoint << setprecision(2);
		cout << "Price per seat in row " << rowNum << ": $ " << a[rowNum - 1][startingSeat - 1].price << endl;
		cout << "Total price for seats: $" << total << endl;
		cout << "Would you like to purchase these seats? (Y\\N) ";
		cin >> choice;
		if (toupper(choice) == 'Y')
		{
			purchaseTickets(numSeats, rowNum, startingSeat, total);
		}
	}
}

void TicketManager::purchaseTickets(int numSeats, int rowNum, int startingSeat, double total)
{
	double money;

	cout << "Enter money to purchase the seats:";
	cin >> money;
	if (money < total)
		cout << "Money input not sufficient to purchase the tickets." << endl;
	else
	{
		cout << endl;
		for (int row = rowNum - 1; row < rowNum; row++)
		{
			for (int column = startingSeat - 1, start = 0, seatNum = startingSeat; start < numSeats; column++, start++, seatNum++)
			{
				a[row][column].availability = '*';
				cout << setw(15) << "Ticket Sold" << endl;
				cout << "------------------" << endl;
				if (rowNum < 10)
					cout << "|" << "Row " << rowNum << setw(12) << "|" << endl;
				else
					cout << "|" << "Row " << rowNum << setw(11) << "|" << endl;
				if (seatNum < 10)
					cout << "|" << "Seat Number " << seatNum << setw(4) << "|" << endl;
				else
					cout << "|" << "Seat Number " << seatNum << setw(3) << "|" << endl;
				cout << fixed << showpoint << setprecision(2);
				if (a[row][column].price < 10.00)
					cout << "|" << "Price $" << a[row][column].price << setw(6) << "|" << endl;
				else
					cout << "|" << "Price $" << a[row][column].price << setw(5) << "|" << endl;
				cout << "------------------" << endl;
			}
		}
		if (money > total)
			cout << endl << "Change due: $" << money - total << endl << endl;
	}
}

void TicketManager::salesReport()
{
	int seatsSold, seatsAvailable;
	seatsSold = seatsAvailable = 0;
	double totalCollected = 0.0;

	for (int row = 0; row < 15; row++)
	{
		for (int column = 0; column < 30; column++)
		{
			if (a[row][column].availability == '*')
			{
				seatsSold++;
				totalCollected += a[row][column].price;
			}
			else
				seatsAvailable++;
		}
	}
	cout << endl << setw(30) << "Sales Report" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Seats Sold: " << seatsSold << endl;
	cout << "Seats Available: " << seatsAvailable << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Total Collected from sold seats: $" << totalCollected << endl << endl;
}

TicketManager::~TicketManager()
{
	displaySeats();
}