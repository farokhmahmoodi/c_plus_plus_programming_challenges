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
#include "Widget.h"
using namespace std;



int main()
{
	int w;
	cout << "number of widgets ordered? (greater than 0): ";
	cin >> w;
	while (w < 0)
	{
		cout << "enter number of widgets ordered greater than 0: ";
		cin >> w;
	}
	Widget a;
	a.setNumWidgets(w);
	a.setNumDays();

	cout << "It will take " << fixed << showpoint << setprecision(2) << a.getNumDays() << " days to produce " << a.getNumWidgets() << " widgets." << endl;

	return 0;
}


