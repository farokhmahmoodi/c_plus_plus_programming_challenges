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
#include "Heading.h"
using namespace std;



int main()
{
	Heading a;
	Heading b("target", "profit report");
	Heading c("walmart", "payroll");
	a.print1Line();
	b.print1Line();
	a.printBoxedLine();
	b.printBoxedLine();
	c.print1Line();
	c.printBoxedLine();

	return 0;
}

