#ifndef COIN_H
#define COIN_H
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <windows.h>
using namespace std;

class Coin
{
private:
	string sideUp;
public:
	Coin();
	void toss();
	string getSideUp();
};
#endif
