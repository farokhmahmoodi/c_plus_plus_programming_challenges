// 
//

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


