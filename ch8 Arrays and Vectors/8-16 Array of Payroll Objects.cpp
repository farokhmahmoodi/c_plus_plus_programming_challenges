/*Design a PayRoll class that has data members for an employee’s hourly pay rate and number of hours worked. Write a program with 
an array of seven PayRoll objects. The program should read the number of hours each employee worked and their hourly pay rate 
from a file and call class functions to store this information in the appropriate objects. It should then call a class function, 
once for each object, to return the employee’s gross pay, so this information can be displayed. Sample data to test this program 
can be found in the payroll.dat file located in the Chapter 8 programs folder on this book’s companion website.*/

#include <iostream>
#include "Payroll.h"
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	Payroll a[7];
	double p, n;
	ifstream in("C:\\Users\\FM\\source\\repos\\start c++ ch8\\8-16\\8-16\\payroll.dat");
	
	if (in)
	{
		for (int i = 0; i < 7; i++)
		{
			in >> n;
			a[i].setNumHours(n);
			in >> p;
			a[i].setPayRate(p);
		}
		in.close();

		cout << setw(30) << "Gross Pay Report" << endl;
		cout << "---------------------------------------------------" << endl;
		cout << fixed << showpoint << setprecision(2);
		for (int i = 0; i < 7; i++)
		{
			cout << "Employee " << (i + 1)
				<< ": $" << a[i].grossPay() << endl;
		}
	}
	else
		cout << "Error opening file." << endl;
	return 0;
}


