#include "Payroll.h"

Payroll::Payroll()
{
	payRate = numHours = 0.0;
}

void Payroll::setPayRate(double p)
{
	payRate = p;
}

void Payroll::setNumHours(double n)
{
	numHours = n;
}

double Payroll::getPayRate()
{
	return payRate;
}

double Payroll::getNumHours()
{
	return numHours;
}

double Payroll::grossPay()
{
	return numHours * payRate;
}