#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H
#include <fstream>
#include <string>
using namespace std;

class TicketManager
{
private:
	struct SeatStructures
	{
		double price = 0;
		string availability = " ";
	};
	SeatStructures a[15][30];
public:
	TicketManager(ifstream, ifstream);
	string displaySeats();
	string ticketRequest(int, int, int);

};
#endif
