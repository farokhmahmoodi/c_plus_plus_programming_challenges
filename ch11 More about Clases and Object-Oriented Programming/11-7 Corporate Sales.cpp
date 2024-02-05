/*A corporation has six divisions, each responsible for sales to different geographic locations. Design a DivSales class
that keeps sales data for a division, with the following members:

An array with four elements for holding four quarters of sales figures for the division.

A private static variable for holding the total corporate sales for all divisions for the entire year.

A member function that takes four arguments, each assumed to be the sales for a quarter. The value of the arguments
should be copied into the array that holds the sales data. The total of the four arguments should be added to the
static variable that holds the total yearly corporate sales.

A function that takes an integer argument within the range of 0 to 3. The argument is to be used as a subscript into
the division quarterly sales array. The function should return the value of the array element with that subscript.

Write a program that creates an array of six DivSales objects. The program should ask the user to enter the sales for
four quarters for each division. After the data is entered, the program should display a table showing the division
sales for each quarter. The program should then display the total corporate sales for the year.*/

#include <iostream>
#include <iomanip>
using namespace std;

class DivSales
{
private:
    double division[4];
    static double totalSales;
public:
    DivSales()
    {
        for (int i = 0; i < 4; i++)
            division[i] = 0;
    }
    void addSales(double q1, double q2, double q3, double q4)
    {
        division[0] = q1,
            division[1] = q2,
            division[2] = q3,
            division[3] = q4;
        totalSales += q1 + q2 + q3 + q4;
    }
    double getQuarterlySales(int index) const
    {
        if (index >= 0 && index <= 3)
        {
            return division[index];
        }
        else
        {
            cout << "Error. Integer entered is not between 0 and 3." << endl;
            return -1;
        }
    }
    static double getTotalSales()
    {
        return totalSales;
    }
};

double DivSales::totalSales = 0;

int main()
{
    DivSales test[6];

    for (int i = 0; i < 6; i++)
    {
        double quartSales[4];
        for (int x = 0; x < 4; x++)
        {
            do
            {
                cout << "Enter sales for quarter "
                    << (x + 1) << " of Division " << (i +1) << ":";
                cin >> quartSales[x];
                if (quartSales[x] < 0)
                    cout << "Error. Enter sales greater than or equal to 0." << endl;
            } while (quartSales[x] < 0);
        }
        test[i].addSales(quartSales[0], quartSales[1], quartSales[2], quartSales[3]);
    }
    cout << endl << "Here are division sales for each quarter." << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Division " << (i + 1) << endl;
        for (int x = 0; x < 4; x++)
        {
            cout << "Quarter " << (x + 1) << ": $"
                << fixed << showpoint <<
                setprecision(2) << test[i].getQuarterlySales(x) << endl;
        }
    }
    cout << "Total Corporate Sales for year: $" << fixed << showpoint
        << setprecision(2) << DivSales::getTotalSales() << endl;

    return 0;
}
