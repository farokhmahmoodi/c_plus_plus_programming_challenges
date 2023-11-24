#include "Stats.h"

Stats::Stats()
{
	for (int i = 0; i < 30; i++)
		a[i] = 0;
}

double Stats::total()
{
	double total = 0.0;
	for (int i = 0; i < 30; i++)
	{
		total += a[i];
	}
	return total;
}

double Stats::average()
{
	return total() / 30;
}

double Stats::lowest()
{
	double lowest = a[0];
	for (int i = 1; i < 30; i++)
	{
		if (a[i] < lowest)
			lowest = a[i];
	}
	return lowest;
}

double Stats::highest()
{
	double highest = a[0];
	for (int i = 1; i < 30; i++)
	{
		if (a[i] > highest)
			highest = a[i];
	}
	return highest;
}

bool Stats::storeValue(double v)
{
	for (int i = 0; i < 30; i++)
	{
		if (a[i] == 0)
		{
			a[i] = v;

			if (i == 29)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}
