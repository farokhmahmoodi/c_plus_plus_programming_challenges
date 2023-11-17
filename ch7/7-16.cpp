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
#include "Coin.h"
using namespace std;




int main()
{
	Coin a;
	cout << "side facing up is initially " <<  a.getSideUp() << endl;
	int hcount, tcount;
	hcount = tcount = 0;
	for (int i = 1; i <= 20; i++)
	{
		a.toss();
		cout << a.getSideUp() << endl;
		if (a.getSideUp() == "heads")
			hcount++;
		else
			tcount++;
	}
	cout << "number of times heads facing up: " << hcount << endl;
	cout << "number of times tails facing up: " << tcount << endl;
	return 0;
}

