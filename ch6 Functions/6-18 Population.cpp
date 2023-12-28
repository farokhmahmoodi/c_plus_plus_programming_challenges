/*In a population, the birth rate is the percentage increase of the population due to births, and the death rate is the percentage decrease of the population due to deaths. Write a program that asks for the following:

The starting size of a population (minimum 2)

The annual birth rate

The annual death rate

The number of years to display (minimum 1)

The program should then display the starting population and the projected population at the end of each year. It should use a function that calculates and returns the projected new size of the population after a year. The formula is

     N = P(1+B)(1-D)

where

N is the new population size,

P is the previous population size,

B is the birth rate,

and D is the death rate.

Annual birth rate and death rate are the typical number of births and deaths in a year per 1,000 people, expressed as a decimal. So, for example, if there are normally about 32 births and 26 deaths per 1,000 people in a given population, the birth rate would be .032 and the death rate would be .026.
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

int projectedPopulation(int, double, double);

int main()
{
    int startPopulation, projectPopulation, numYears;
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
    cout << "\nPopulation Report\n";
    cout << "-----------------------------------------------------------------\n";
    cout << "Year" << setw(30) << "Starting Population" << setw(30) << "Projected Population\n";
    for (int year = 1; year <= numYears; year++)
    {
        projectPopulation = projectedPopulation(startPopulation, annualBirthRate, annualDeathRate,peopleIn, peopleOut);
        cout << year << setw(30) << startPopulation << setw(30) << projectPopulation << endl;
        startPopulation = projectPopulation;
    }

    return 0;
}

int projectedPopulation(int startPopulation, double annualBirthRate, double annualDeathRate)
{
    return (startPopulation * (1 + annualBirthRate) * (1 - annualDeathRate));
}

