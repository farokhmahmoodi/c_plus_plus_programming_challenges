// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
dsfasf
asdfasdfasdfsad
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
using namespace std;

//NUMBER_GALLONS_PAINT_PER_160_SQFT = 1.0;
const double HOURLY_LABOR_CHARGE = 28.0;
const double NUMBER_HOURS_LABOR_PER_160_SQFT = 3.0;

double numberGallonsNeeded(int);
double costPaintForJob(double, double);
double hoursLaborRequired(int);
double laborCharges(double);
double totalCost(double, double);
void printReport(double, double, double, double, double);

int main()
{
	int numRooms, sqFtForEachRoom, totalSqFtForJob = 0;
	double numGallonsNeeded, pricePaintPerGallon, paintCostForJob,
		hoursOfLaborForJob, laborCostForJob, totalCostForJob;

	cout << "Enter num of rooms (greater than 0): ";
	cin >> numRooms;
	while (numRooms <= 0)
	{
		cout << "error. please enter num of rooms greater than 0: ";
		cin >> numRooms;
	}
	for (int count = 1; count <= numRooms; count++)
	{
		cout << "enter sq ft of room " << count << ": ";
		cin >> sqFtForEachRoom;
		while (sqFtForEachRoom <= 0)
		{
			cout << "input error. enter sq ft for room " << count << " greater than 0:";
			cin >> sqFtForEachRoom;
		}
		totalSqFtForJob += sqFtForEachRoom;
	}
	numGallonsNeeded = numberGallonsNeeded(totalSqFtForJob);
	cout << "price of paint per gallon: ";
	cin >> pricePaintPerGallon;
	while (pricePaintPerGallon <= 0)
	{
		cout << "input error. enter price of paint per gallon greater than 0: ";
		cin >> pricePaintPerGallon;
	}
	paintCostForJob = costPaintForJob(pricePaintPerGallon, numGallonsNeeded);
	hoursOfLaborForJob = hoursLaborRequired(totalSqFtForJob);
	laborCostForJob = laborCharges(hoursOfLaborForJob);
	totalCostForJob = totalCost(paintCostForJob, laborCostForJob);
	printReport(numGallonsNeeded, hoursOfLaborForJob, paintCostForJob, laborCostForJob, totalCostForJob);

	return 0;
}

double numberGallonsNeeded(int sqft)
{
	return round(sqft / 160.0);
}


double costPaintForJob(double pricePaintPerGallon, double numGallonsNeeded)
{
	return pricePaintPerGallon * numGallonsNeeded;
}

double hoursLaborRequired(int sqft)
{
	return (sqft / 160.0) * NUMBER_HOURS_LABOR_PER_160_SQFT;
}

double laborCharges(double hoursOfLaborForJob)
{
	return hoursOfLaborForJob * HOURLY_LABOR_CHARGE;
}

double totalCost(double paintCostForJob, double laborCostForJob)
{
	return paintCostForJob + laborCostForJob;
}

void printReport(double numGal, double hoursLabor, double paintCost, double laborCharges, double totalCost)
{
	cout << setw(20) << "\nArtistic Solutions Paint Company Estimator\n";
	cout << "-------------------------------------------------------------\n";
	cout << "Number of Gallons of Paint Required(rounded up to next full gallon): " << numGal << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Hours of Labor Required: " << hoursLabor << endl;
	cout << "Cost of Paint: $" << paintCost << endl;
	cout << "Labor Charges: $" << laborCharges << endl;
	cout << "Total Cost of Paint Job: $" << totalCost << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
