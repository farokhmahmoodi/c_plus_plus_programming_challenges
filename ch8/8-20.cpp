// 

#include "TicketManager.h"

int main()
{
    ifstream prices("C:\\Users\\FM\\source\\repos\\start c++ ch8\\8-20\\8-20\\SeatPrices.dat");
    ifstream availability("C:\\Users\\FM\\source\\repos\\start c++ ch8\\8-20\\8-20\\SeatAvailability.dat");
    TicketManager b(prices, availability);
    int choice;

    do
    {
        do
        {
            cout << "Welcome to Theater Ticket Sales Program!" << endl;
            cout << "Select option from menu below." << endl;
            cout << "1. Display Seating Chart" << endl;
            cout << "2. Request Tickets" << endl;
            cout << "3. Print Sales Report" << endl;
            cout << "4. Quit" << endl;
            cin >> choice;
            if (choice < 1 || choice > 4)
                cout << "Input error. Please enter valid menu choice." << endl;
        } while (choice < 1 || choice > 4);
        switch (choice)
        {
        case 1:
            b.displaySeats();
            break;
        case 2:
            int numSeats, rowNum, seatNum;
            do
            {
                cout << "Enter number of seats you want to purchase(between 1 and 30) for a particular row: ";
                cin >> numSeats;
                if (numSeats < 1 || numSeats > 30)
                    cout << "Input error. Please enter valid number between 1 and 30." << endl;
            } while (numSeats < 1 || numSeats > 30);
            do
            {
                cout << "Enter desired row number for seats you want to purchase(between 1 and 15): ";
                cin >> rowNum;
                if (rowNum < 1 || rowNum > 15)
                    cout << "Input error. Please enter valid number between 1 and 15." << endl;
            } while (rowNum < 1 || rowNum > 15);
            do
            {
                cout << "Enter desired starting seat number for seats you want to purchase(between 1 and 30): ";
                cin >> seatNum;
                if (seatNum < 1 || seatNum > 30)
                    cout << "Input error. Please enter valid number between 1 and 30." << endl;
            } while (seatNum < 1 || seatNum > 30);
            b.ticketsRequest(numSeats, rowNum, seatNum);
            break;
        case 3:
            b.salesReport();
            break;
        }
    } while (toupper(choice) != 4);

    return 0;
}