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

void TicketManager::ticketsRequest(int numSeats, int row, int startingSeat)
{



}
