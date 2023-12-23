#ifndef TICKETCOMBOSBINARY_H
#define TICKETCOMBOSBINARY_H
#include <iostream>
using namespace std;

const int SIZE = 10;
class TicketCombosBinary
{
private:
	int a[SIZE] = { 13579,26791,26792,33445,
				55555, 62483, 77777, 79422, 85647, 93121 };
public:
	TicketCombosBinary();
	void winner(int);
};
#endif
