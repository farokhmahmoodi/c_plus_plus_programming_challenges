#include "SnowReport.h"

SnowReport::SnowReport()
{
	date = 0;
	inches = 0.0;
}

void SnowReport::setDate(int d)
{
	date = d;
}

void SnowReport::setInches(double i)
{
	inches = i;
}

int SnowReport::getDate() const
{
	return date;
}

double SnowReport::getInches() const
{
	return inches;
}