// 

//#include <iostream>
#include "TicketManager.h"


int main()
{
    ifstream prices("C:\\Users\\p3209584\\source\\repos\\start c++ ch 8\\8-20\\8-20\\SeatPrices.dat");
    ifstream availability("C:\\Users\\p3209584\\source\\repos\\start c++ ch 8\\8-20\\8-20\\SeatAvailability.dat");

    TicketManager b(prices, availability);

    return 0;
}


