/*Design a class called NumDays. The class’s purpose is to store a value that represents a number of work hours and
convert it to a number of days. For example, 8 hours would be converted to 1 day, 12 hours would be converted to 1.5 days,
and 18 hours would be converted to 2.25 days. The class should have a constructor that accepts a number of hours, as well
as member functions for storing and retrieving the hours and days. The class should also have the following overloaded
operators:

The addition operator +. The number of hours in the sum of two objects is the sum of the number of hours in the individual
objects.

The subtraction operator −. The number of hours in the difference of two objects X and Y is the number of hours in X
minus the number of hours in Y.

Prefix and postfix increment operators ++. The number of hours in an object is incremented by 1.

Prefix and postfix decrement operators −−. The number of hours in an object is decremented by 1.*/

#include <iostream>
#include <iomanip>
using namespace std;

class NumDays
{
private:
    double hours, days;
public:
    NumDays(double h)
    {
        hours = h;
        setDays();
    }
    void setHours(double h)
    {
        hours = h;
    }
    double getHours() const
    {
        return hours;
    }
    void setDays() 
    {
        days = hours / 8.0;
    }
    double getDays() const
    {
        return days;
    }
    friend NumDays operator+(NumDays a, NumDays b)
    {
        return NumDays(a.hours + b.hours);
    }
    friend NumDays operator-(NumDays a, NumDays b)
    {
        return NumDays(a.hours - b.hours);
    }
    NumDays operator++()
    {
        hours++;
        return *this;
    }
    NumDays operator++(int)
    {
        NumDays temp = *this;
        hours++;
        return temp;
    }
    NumDays operator--()
    {
        hours--;
        return *this;
    }
    NumDays operator--(int)
    {
        NumDays temp = *this;
        hours--;
        return temp;
    }
};

int main()
{
    double h1, h2; 
    int choice;
    do
    {
        do
        {
            cout << "Enter 2 number of hours(for objects a and b) worked and the program" <<
                " will convert it to a number of days:";
            cin >> h1 >> h2;
            if (h1 < 0.0 || h2 < 0.0)
                cout << "Invalid input. Hours must be greater than or equal to 0." << endl;
        } while (h1 < 0.0 || h2 < 0.0);
        NumDays a(h1), b(h2), c(0.0);
        cout << a.getHours() << " hours worked is " << a.getDays() << " days." << endl;
        cout << b.getHours() << " hours worked is " << b.getDays() << " days." << endl;
        cout << "Demonstrating addition operator below." << endl;
        c = a + b;
        cout << "Objects a and b hours summed equals " << c.getHours() << endl;
        cout << "Demonstrating subtraction operator below." << endl;
        c = a - b;
        cout << "Objects a and b hours subtracted equals " << c.getHours() << endl;
        do
        {
            cout << "Would you like to run the program again (1 for yes/2 for no)?:";
            cin >> choice;
            if (choice != 1 && choice != 2)
                cout << "Invalid input." << endl;
        } while (choice != 1 && choice != 2);
    } while (choice != 2);

    return 0;
}