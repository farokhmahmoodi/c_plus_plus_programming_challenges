#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class TicketManager
{
private:
	struct SeatStructures
	{
		double price;
		char availability;
	};
	SeatStructures a[15][30];
public:
	TicketManager(ifstream&, ifstream&);

};
#endif
