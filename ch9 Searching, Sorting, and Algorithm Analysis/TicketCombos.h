#ifndef TICKETCOMBOS_H
#define TICKETCOMBOS_H
#include <iostream>
using namespace std;

const int SIZE = 10;
class TicketCombos
{
private:
	int a[SIZE] = { 13579,26791,26792,33445,
				55555, 62483, 77777, 79422, 85647, 93121 };
public:
	TicketCombos();
	void winner(int);
};
#endif
