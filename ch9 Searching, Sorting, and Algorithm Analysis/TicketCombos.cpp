#include "TicketCombos.h"

TicketCombos::TicketCombos()
{

}

void TicketCombos::winner(int value)
{
	int index = 0;
	bool found = false;
	while (index < SIZE && !found)
	{
		if (a[index] == value)
			found = true;
		index++;
	}
	if (found)
		cout << "This ticket is a winner this week!" << endl;
	else
		cout << "This ticket is not a winner this week." << endl;
}
