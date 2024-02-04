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
    void getQuarterlySales(int index)
    {
        //if(index > -1 && index < 4)
            
    }
};

double DivSales::totalSales = 0;

int main()
{
    

    return 0;
}
