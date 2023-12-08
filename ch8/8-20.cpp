// 

#include "TicketManager.h"

int main()
{
    ifstream prices("C:\\Users\\p3209584\\source\\repos\\start c++ ch 8\\8-20\\8-20\\SeatPrices.dat");
    ifstream availability("C:\\Users\\p3209584\\source\\repos\\start c++ ch 8\\8-20\\8-20\\SeatAvailability.dat");
    TicketManager b(prices, availability);
    b.displaySeats();
    b.ticketsRequest(5, 3, 8);
    return 0;
}