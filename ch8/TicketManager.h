#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H
#include <iostream>
#include <iomanip>
#include <fstream>
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
	void purchaseTickets(int, int, int, double);
public:
	TicketManager(ifstream&, ifstream&);
	~TicketManager();
	void displaySeats();
	void ticketsRequest(int, int, int);
	void salesReport();
};
#endif