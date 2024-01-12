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

bool leapYear(int);
int days(int *,int *, int, int);

int main()
{
    int month[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, 
        day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, mIn, yIn;
    int *m = month, *d = day;
    string monthName[12] = {"January", "February", "March", "April", "May"
    ,"June", "July", "August", "September", "October", "November", "December" };
    string* n = monthName;
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
            if (mIn < 0)
                cout << "Error. Input for month must be greater than or equal to 0." << endl;
        } while (mIn < 0);
        if(mIn != 0 && yIn != 0)
            cout << days(m, d, mIn, yIn) << " days" << endl;
    } while (mIn != 0 && yIn != 0);


    return 0;
}

bool leapYear(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            return true;
        return false;
    }
    else if (year % 4 == 0)
        return true;
    else
        return false;
}

int days(int *m,int *d, int month, int year)
{
    int days;

    for (int i = 0; i < 12; i++)
    {      
        if (month == *(m + 1)) //february
        {
            if (leapYear(year)) //test for leap year
                days = 29;
            else
                days = *(d + 1);
            break;
        }
        else if (month == *(m + i)) //any other month
        {
            days = *(d + i);
            break;
        }
    }

    return days;
}


