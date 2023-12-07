#include "TicketManager.h"

TicketManager::TicketManager(ifstream& prices, ifstream& availability)
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
}

string TicketManager::displaySeats()
{
	string chart, title, columns, rows;
	title = "                     Seats\n";
	columns = "         123456789012345678901234567890\n";
	rows = "";
	for (int row = 0; row < 15; row++)
	{
		rows += "Row " + (row + 1);
		rows += "    ";
		for (int column = 0; column < 30; column++)
		{

		}
	}

}
