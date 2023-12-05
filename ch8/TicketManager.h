#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H

class TicketManager
{
private:
	struct SeatStructures
	{
		double price;
		char sold;
	};
	SeatStructures a[15][30];
public:
	TicketManager();

};
#endif
