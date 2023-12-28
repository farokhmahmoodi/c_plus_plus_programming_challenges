/*Design a class for a widget manufacturing plant. Assuming that 10 widgets may be produced each hour, the class object will calculate how many days it will take to produce any number of widgets. 
(The plant operates two 8-hour shifts per day.) Write a program that asks the user for the number of widgets that have been ordered and then displays the number of days it will take to produce them. 
Think about what values your program should accept for the number of widgets ordered.
*/

#include <iostream>
#include <iomanip>
#include <string>
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


