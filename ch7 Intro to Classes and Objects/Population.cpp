#include "Population.h"

Population::Population(int p, int b, int d)
{
	population = p; annualBirths = b; annualDeaths = d;
	if (p < 2)
	{
		population = 2;
	}
	if (b < 0)
	{
		annualBirths = 0;
	}
	if (d < 0)
	{
	    annualDeaths = 0;
	}
}

Population::Population()
{
	population = annualBirths = annualDeaths = 0;
}

void Population::setPopulation(int p)
{
	if (p < 2)
		population = 2;
	else
		population = p;
}


void Population::setBirths(int b)
{
	if (b < 0)
		annualBirths = 0;
	else
		annualBirths = b;
}

void Population::setDeaths(int d)
{
	if (d < 0)
		annualDeaths = 0;
	else
		annualDeaths = d;
}

int Population::getPopulation()
{
	return population;
}

int Population::getBirths()
{
	return annualBirths;
}

int Population::getDeaths()
{
	return annualDeaths;
}

double Population::getBirthRate()
{
	return static_cast<double>(annualBirths)/population;
}

double Population::getDeathRate()
{
	return static_cast<double>(annualDeaths)/population;
}
