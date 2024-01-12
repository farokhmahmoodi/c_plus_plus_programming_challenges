/*Write a program that can determine the number of days in a month for a specified month and year. 
The program should allow a user to enter two integers representing a month and a year, and it should determine 
how many days are in the specified month. The integers 1 through 12 will be used to identify the months of January 
through December. The user indicates the end of input by entering 0 0 for the month and year. At that point, the program 
prints the number of days in the current month and terminates.

Use the following criteria to identify leap years:

A year Y is divisible by 100. Then Y is a leap year if and only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.

A year Y is not divisible by 100. Then Y is a leap year if and only if it is divisible by 4. For example, 2008 is a leap year but 2009 is not.

Here is sample run of the program:

Enter month and year: 2 2008[Enter]
29 days
Enter month and year: 0 0[Enter]

The current month, September 2009, has 30 days.*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

string days(int, int);

int main()
{
    int  mIn, yIn; //month and year input
    string monthName[12] = {"January", "February", "March", "April", "May"
    ,"June", "July", "August", "September", "October", "November", "December" }; 
    time_t epSeconds; //Seconds since epoch (January 1, 1970)
    tm* pCalendarTime = nullptr; //Pointer to calendar time
    epSeconds = time(NULL); //Seconds since epoch
    pCalendarTime = localtime(&epSeconds); //Convert to local time

    do
    {
        do
        {
            cout << "Enter month and year: ";
            cin >> mIn >> yIn;
            if (mIn < 0 || mIn > 12)
                cout << "Error. Input for month must be greater than or equal to 0 and less than or equal to 12." << endl;
        } while (mIn < 0 || mIn > 12);
        if(mIn != 0 && yIn != 0)
            cout << days(mIn, yIn) << endl;
    } while (mIn != 0 && yIn != 0);
    cout << "The current month, " << monthName[pCalendarTime->tm_mon] << " "
        << 1900 + pCalendarTime->tm_year << " has "
        << days((pCalendarTime->tm_mon + 1), (1900 + pCalendarTime->tm_year)) << "." << endl;

    return 0;
}

string days(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return "31 days";
    case 4:
    case 6:
    case 9:
    case 11:
        return "30 days";
    case 2:  //test for leap year
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return "29 days";
            else
                return "28 days";
        }
        else if (year % 100 != 0)
        {
            if (year % 4 == 0)
                return "29 days";
            else
                return "28 days";
        }
    }
}
