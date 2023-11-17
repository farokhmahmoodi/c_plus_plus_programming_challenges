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

class Date
{
private:
	int month, day, year;

public:
	Date()
	{
		month = 1; day = 1; year = 2001;
	}
	Date(int m, int d, int y)
	{
		if ((m == 2 && d > 29) || m < 1 || m > 12 || d < 1 || d > 31 || y < 0) //invalid values
		{
			month = 1; day = 1; year = 2001;
		}
		else
		{
			month = m; day = d; year = y;
		}
	}
	void displayDate()
	{
		cout << month << "/" << day << "/" << year << endl;
	}
	void displayDate2()
	{
		switch (month)
		{
		case 1:
			cout << "January " << day << ", " << year << endl;
			break;
		case 2:
			cout << "February " << day << ", " << year << endl;
			break;
		case 3:
			cout << "March " << day << ", " << year << endl;
			break;
		case 4:
			cout << "April " << day << ", " << year << endl;
			break;
		case 5:
			cout << "May " << day << ", " << year << endl;
			break;
		case 6:
			cout << "June " << day << ", " << year << endl;
			break;
		case 7:
			cout << "July " << day << ", " << year << endl;
			break;
		case 8:
			cout << "August " << day << ", " << year << endl;
			break;
		case 9:
			cout << "September " << day << ", " << year << endl;
			break;
		case 10:
			cout << "October " << day << ", " << year << endl;
			break;
		case 11:
			cout << "November " << day << ", " << year << endl;
			break;
		case 12:
			cout << "December " << day << ", " << year << endl;
			break;
		}
	}
	void displayDate3()
	{
		switch (month)
		{
		case 1:
			cout  << day << " January " << year << endl;
			break;
		case 2:
			cout  << day << " February " << year << endl;
			break;
		case 3:
			cout  << day << " March " << year << endl;
			break;
		case 4:
			cout << day << " April " << year << endl;
			break;
		case 5:
			cout  << day << " May " << year << endl;
			break;
		case 6:
			cout  << day << " June " <<  year << endl;
			break;
		case 7:
			cout  << day << " July " << year << endl;
			break;
		case 8:
			cout  << day << " August " << year << endl;
			break;
		case 9:
			cout  << day << " September " << year << endl;
			break;
		case 10:
			cout  << day << " October " << year << endl;
			break;
		case 11:
			cout  << day << " November " << year << endl;
			break;
		case 12:
			cout  << day << " December " << year << endl;
			break;
		}
	}
	
};


int main()
{
	Date d1;
	d1.displayDate();
	d1.displayDate2();
	d1.displayDate3();
	cout << endl;

	Date d2(1, 1, -2); 
	d2.displayDate();
	d2.displayDate2();
	d2.displayDate3();
	cout << endl;

	Date d3(2, 30, 2027);
	d3.displayDate();
	d3.displayDate2();
	d3.displayDate3();
	cout << endl;

	Date d4(5, 25, 2028);
	d4.displayDate();
	d4.displayDate2();
	d4.displayDate3();

	
	return 0;
}
