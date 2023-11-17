//
/*
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
//#include <windows.h>
using namespace std;

struct MovieData
{
	string title, director;
	int year, runtime;
	double prodCosts, firstYearRevenue;

	MovieData(string t, string d, int y, int r, double p, double f)
	{
		title = t; director = d; year = y; runtime = r; prodCosts = p; firstYearRevenue = f;
	}
};


void displayInfo(const MovieData &);


int main()
{
	MovieData a("dark knight", "christopher nolan", 2008, 140, 200000000.32, 300000000);
	MovieData b("star wars", "george lucas", 1977, 120, 15000000.25, 250000000);

	displayInfo(a);
	cout << endl;
	displayInfo(b);


	return 0;
}

void displayInfo(const MovieData &a)
{
	cout << setw(20) << "Movie Data" << endl;
	cout << "-------------------------------------" << endl;
	cout << "Title: " << a.title << endl;
	cout << "Director: " << a.director << endl;
	cout << "Year: " << a.year << endl;
	cout << "Runtime (in minutes): " << a.runtime << endl;
	cout << "Production Costs: $" << fixed << showpoint << setprecision(2) << a.prodCosts << endl;
	cout << "First Year Revenue: $" << fixed << showpoint << setprecision(2)  <<  a.firstYearRevenue << endl;
}