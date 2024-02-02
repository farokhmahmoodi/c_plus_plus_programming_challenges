/*Modify the DayOfYear class, written in an earlier Programming Challenge, to add a constructor that takes two parameters: 
a string representing a month and an integer in the range 0 through 31 representing the day of the month. The constructor 
should then initialize the integer member of the class to represent the day specified by the month and day of month 
parameters. The constructor should terminate the program with an appropriate error message if the number entered for a day 
is outside the range of days for the month given.*/

#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
private:
    int day;
    static string month[];
    static int daysInYear[], daysInEachMonth[];
public:
    DayOfYear(string m, int d)
    {
        for (int i = 0; i < 12; i++)
        {
            if ((m == month[i] && d <= daysInEachMonth[i]) && (d > 31)) //february-december
            {
                day = d;
                cout << m << " " << d << " is Day " << day << " of the year." << endl;
            }
            else if (m == month[i] && d <= daysInEachMonth[i]) //january
            {
                day = d;
                cout << m << " " << d << " is Day " << day << " of the year." << endl;
            }
            else
            {
                cout << "Error. Number entered is outside the range of days for the month given." << endl;
                exit(0); //terminates program
            }
        }
    }
    DayOfYear(int d)
    {
        if (d > 0 && d < 366)
        {
            day = d;
        }
        else
        {
            cout << "Please enter a day from 1-365." << endl;
        }
    }
    void print()
    {
        for (int i = 0; i < 12; i++)
        {
            if (day <= daysInYear[i] && day > 31)
            {
                cout << "Day " << day << " is " << month[i] << " " << day - daysInYear[i - 1] << endl;
                break;
            }
            else if (day <= daysInYear[i]) //january
            {
                cout << "Day " << day << " is " << month[i] << " " << day << endl;
                break;
            }
        }
    }
    DayOfYear operator++() //prefix increment
    {
        if (day == 365)
        {
            day = 1;
            return *this;
        }
        else
        {
            day++;
            return *this;
        }
    }
    DayOfYear operator--() //prefix decrement
    {
        if (day == 1)
        {
            day = 365;
            return *this;
        }
        else
        {
            day--;
            return *this;
        }
    }
    DayOfYear operator++(int) //postfix increment
    {
        if (day == 365)
        {
            DayOfYear temp = *this;
            day = 1;
            return temp;
        }
        else
        {
            DayOfYear temp = *this;
            day++;
            return temp;
        }
    }
    DayOfYear operator--(int) //postfix decrement
    {
        if (day == 1)
        {
            DayOfYear temp = *this;
            day = 365;
            return *this;
        }
        else
        {
            DayOfYear temp = *this;
            day--;
            return *this;
        }
    }
};

int DayOfYear::daysInYear[] = { 31,59,90,120,151,181,212,243,273,304,334,365 },
int DayOfYear::daysInEachMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
string DayOfYear::month[] = { "January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December" };

int main()
{
    int choice, d;
    string m;

    do
    {
        cout << "Enter a month and day and the program will translate" <<
            " it to a day of the year (from 1-365): ";
        cin >> m;
        cin >> d;
        DayOfYear a(m,d);
        cout << "Would you like to enter another month and day to translate? (1 for yes/2 for no): ";
        cin >> choice;
    } while (choice != 2);

    return 0;
}
