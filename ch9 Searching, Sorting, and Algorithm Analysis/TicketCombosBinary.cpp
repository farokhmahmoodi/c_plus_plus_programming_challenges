#include "TicketCombosBinary.h"

TicketCombosBinary::TicketCombosBinary()
{

}

void TicketCombosBinary::winner(int value)
{
	int first = 0,
		last = SIZE - 1,
		middle;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (a[middle] == value)
			found = true;
		else if (a[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}

	if (found)
		cout << "This ticket is a winner this week!" << endl;
	else
		cout << "This ticket is not a winner this week." << endl;
}
