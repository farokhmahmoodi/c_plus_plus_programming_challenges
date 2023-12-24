#include "BattingAvg.h"

BattingAvg::BattingAvg()
{
	name = "";
	avg = 0.0;
}

void BattingAvg::setName(string n)
{
	name = n;
}

void BattingAvg::setAvg(double b)
{
	avg = b;
}

string BattingAvg::getName() const
{
	return name;
}

double BattingAvg::getAvg() const
{
	return avg;
}