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
	string chart, title, columns, seats;
	title = "                     Seats\n";
	columns = "         123456789012345678901234567890\n";
	for (int row = 0; row < 15; row++)
	{
		switch (row + 1)
		{
		case 1:
			seats += "Row 1    ";
			break;
		case 2:
			seats += "Row 2    ";
			break;
		case 3:
			seats += "Row 3    ";
			break;
		case 4:
			seats += "Row 4    ";
			break;
		case 5:
			seats += "Row 5    ";
			break;
		case 6:
			seats += "Row 6    ";
			break;
		case 7:
			seats += "Row 7    ";
			break;
		case 8:
			seats += "Row 8    ";
			break;
		case 9:
			seats += "Row 9    ";
			break;
		case 10:
			seats += "Row 10   ";
			break;
		case 11:
			seats += "Row 11   ";
			break;
		case 12:
			seats += "Row 12   ";
			break;
		case 13:
			seats += "Row 13   ";
			break;
		case 14:
			seats += "Row 14   ";
			break;
		case 15:
			seats += "Row 15   ";
			break;
		}

		for (int column = 0; column < 30; column++)
		{
			if (a[row][column].availability == '#')
				seats += "#";
			else
				seats += "*";
		}
		seats += "\n";
	}
	chart = title + columns + seats;
	return chart;
}
