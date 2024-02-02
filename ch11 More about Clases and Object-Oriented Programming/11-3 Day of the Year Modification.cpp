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
public:
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
        int daysInYear[] = { 31,59,90,120,151,181,212,243,273,304,334,365 },
            daysInEachMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

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
};

string DayOfYear::month[] = { "January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December" };

int main()
{
    int choice, d;

    do
    {
        cout << "Enter an integer to represent day of the year and" <<
            " the program will translate it to a string consisting of the month" <<
            " followed by day of the month: ";
        cin >> d;
        DayOfYear a(d);
        if (d > 0 && d < 366)
        {
            a.print();
        }
        cout << "Would you like to enter another integer to translate? (1 for yes/2 for no): ";
        cin >> choice;
    } while (choice != 2);

    return 0;
}
