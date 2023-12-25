#include "Tips.h"

Tips::Tips(double t)
{
	if (t < 0)
		taxRate = .085;
	else
		taxRate = t;
}

Tips::Tips()
{
	taxRate = .085;
}

double Tips::computeTip(double bill, double tipRate)
{
	return (bill/(1+taxRate)) * tipRate;
}

double Tips::getTaxRate()
{
	return taxRate;
}