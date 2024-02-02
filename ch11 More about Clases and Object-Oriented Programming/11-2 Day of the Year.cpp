/*Assuming that a year has 365 days, write a class named DayOfYear that takes an integer representing a day of the year 
and translates it to a string consisting of the month followed by day of the month. For example,

Day 2 would be January 2.

Day 32 would be February 1.

Day 365 would be December 31.

The constructor for the class should take as parameter an integer representing the day of the year, and the 
class should have a member function print() that prints the day in the month-day format. The class should have an 
integer member variable to represent the day and should have static member variables of type string to assist in the 
translation from the integer format to the month–day format.

Test your class by inputting various integers representing days and printing out their representation in the month–day 
format.*/

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
                cout << month[i] << " " << day - daysInYear[i - 1] << endl;
                break;
            }
            else if (day <= daysInYear[i]) //january
            {
                cout << month[i] << " " << day << endl;
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
