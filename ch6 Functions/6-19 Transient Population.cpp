/*Modify Programming Challenge 17 to also consider the effect on population caused by people moving into or out of a geographic area. Given as input a starting population size, the annual birth rate, the annual death rate, the number of individuals that typically move into the area each year, and the number of individuals that typically leave the area each year, the program should project what the population will be numYears from now. 
You can either prompt the user to input a value for numYears, or you can set it within the program.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include<fstream>
#include<cctype>
#include<cmath> 
using namespace std;

int projectedPopulation(int, double, double, int, int);

int main()
{
    int startPopulation, projectPopulation, peopleIn, peopleOut, numYears;
    double annualBirthRate, annualDeathRate;

    do
    {
        cout << "starting size of population? (minimum 2):";
        cin >> startPopulation;
    } while (startPopulation < 2);
    do
    {
        cout << "annual birth rate per 1000 people expressed as decimal?(>= 0):";
        cin >> annualBirthRate;
    } while (annualBirthRate < 0);
    do
    {
        cout << "annual death rate per 1000 people expressed as decimal?(>= 0):";
        cin >> annualDeathRate;
    } while (annualDeathRate < 0);
    do
    {
        cout << "number of years to display?(minimum 1):";
        cin >> numYears;
    } while (numYears < 1);
    do
    {
        cout << "how many people typically moving in yearly?:";
        cin >> peopleIn;
    } while (peopleIn < 0);
    do
    {
        cout << "how many people typically moving out yearly?:";
        cin >> peopleOut;
    } while (peopleOut < 0);
    cout << "\nPopulation Report\n";
    cout << "-----------------------------------------------------------------\n";
    cout << "Year" << setw(30) << "Starting Population" << setw(30) << "Projected Population\n";
    for (int year = 1; year <= numYears; year++)
    {
        projectPopulation = projectedPopulation(startPopulation, annualBirthRate, annualDeathRate, peopleIn, peopleOut);
        cout << year << setw(30) << startPopulation << setw(30) << projectPopulation << endl;
        startPopulation = projectPopulation;
    }
    return 0;
}

int projectedPopulation(int startPopulation, double annualBirthRate, double annualDeathRate, int peopleIn, int peopleOut)
{
    return (startPopulation * (1 + annualBirthRate) * (1 - annualDeathRate)) - (peopleIn - peopleOut);
}



