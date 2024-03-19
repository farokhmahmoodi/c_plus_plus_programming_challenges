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
    int highest = 0, lowest = 0;

    if (!file)
    {
        cout << "Error opening file." << endl;
        return 0;
    }
    for (int i = 0; i < DIVISION_LENGTH; i++) //stepping through each division
    {
        for (int x = 0; x < DIVISION_LENGTH; x++) //stepping through each quarter
        {
            file.read(reinterpret_cast<char*>(&a), sizeof(a));
            totalYearlyCorpSales += a.sales;
            totalCorpSalesForEachQuarter[x] += a.sales;
            totalYearlySalesForEachDivision[i] += a.sales;
            avgQuartlySalesForDivisions[i] += a.sales;
        }
        avgQuartlySalesForDivisions[i] /= 4.0;
    }
    highestQuarterForCorp = lowestQuarterForCorp = totalCorpSalesForEachQuarter[0];
    for (int i = 0; i < DIVISION_LENGTH; i++)
    {
        cout << "Total corporate sales for quarter "
            << a.quarter[i] << ": $"
            << fixed << showpoint << setprecision(2) << totalCorpSalesForEachQuarter[i] << endl;
        if (totalCorpSalesForEachQuarter[i] > highestQuarterForCorp)
            highest = i + 1;
        if (totalCorpSalesForEachQuarter[i] < lowestQuarterForCorp)
            lowest = i + 1;
        cout << "Total yearly sales for " << a.name[i]
            << " division: $" << fixed << showpoint << setprecision(2) 
            << totalYearlySalesForEachDivision[i] << endl;
        cout << "Average Quarterly Sales for " << a.name[i]
            << " division: $" << fixed << showpoint << setprecision(2) 
            << avgQuartlySalesForDivisions[i] << endl;
    }
    cout << "Total yearly corporate sales: $" << fixed << showpoint 
        << setprecision(2) << totalYearlyCorpSales << endl;
    cout << "Highest quarter for corporation:" << highest << endl;
    cout << "Lowest quarter for corporation:" << lowest << endl;
    file.close();

    return 0;
}
