/*Write a program that reads the information in the file created by the program in Programming Challenge 13.
The program should calculate and display the following figures:

Total corporate sales for each quarter

Total yearly sales for each division

Total yearly corporate sales

Average quarterly sales for the divisions

The highest and lowest quarters for the corporation*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int DIVISION_LENGTH = 4;

struct Company {
    static string name[DIVISION_LENGTH];
    static int quarter[DIVISION_LENGTH];
    double sales;
};

string Company::name[DIVISION_LENGTH] = { "East", "West", "North", "South" };
int Company::quarter[DIVISION_LENGTH] = { 1,2,3,4 };

int main()
{
    Company a;
    fstream file("13-14.dat", ios::in | ios::binary);
    double totalCorpSalesForEachQuarter[DIVISION_LENGTH] = { 0.0 },
        totalYearlySalesForEachDivision[DIVISION_LENGTH] = { 0.0 },
        totalYearlyCorpSales = 0.0, avgQuartlySalesForDivisions[DIVISION_LENGTH] = { 0.0 },
        highestQuarterForCorp = 0.0, lowestQuarterForCorp = 0.0;

    if (!file)
    {
        cout << "Error opening file." << endl;
        return 0;
    }
    for (int i = 0; i < DIVISION_LENGTH; i++)
    {
        for (int x = 0; x < DIVISION_LENGTH; x++)
        {
            file.read(reinterpret_cast<char*>(&a), sizeof(a));
            totalYearlyCorpSales += a.sales;

        }
    }
    cout << fixed << showpoint << setprecision(2);
    highestQuarterForCorp = lowestQuarterForCorp = totalCorpSalesForEachQuarter[0];
    for (int i = 0; i < DIVISION_LENGTH; i++)
    {
        cout << "Total corporate sales for quarter "
            << a.quarter[i] << ":$"
            << totalCorpSalesForEachQuarter[i] << endl;
        if (totalCorpSalesForEachQuarter[i] > highestQuarterForCorp)
            highestQuarterForCorp = totalCorpSalesForEachQuarter[i];
        if (totalCorpSalesForEachQuarter[i] < lowestQuarterForCorp)
            lowestQuarterForCorp = totalCorpSalesForEachQuarter[i];
    }
    file.close();

    return 0;
}
