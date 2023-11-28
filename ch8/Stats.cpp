#include "Stats.h"

Stats::Stats()
{
	size = 0;
}

double Stats::total()
{
	double total = 0.0;
	for (int i = 0; i < size; i++)
	{
		total += a[i];
	}
	return total;
}

double Stats::average()
{
	return total() / size;
}

int Stats::lowest()
{
	double lowest = a[0];
	int low = 0;
	for (int i = 1; i < size; i++)
	{
		if (a[i] < lowest)
		{
			lowest = a[i];
			low = i;
		}
	}
	return low;
}

int Stats::highest()
{
	double highest = a[0];
	int high = 0;
	for (int i = 1; i < size; i++)
	{
		if (a[i] > highest)
		{
			highest = a[i];
			high = i;

		}
	}
	return high;
}

bool Stats::storeValue(double v)
{
	if (size < 30)
	{
		a[size] = v;
		size++;
		return true;
	}
	else
		return false;
}

double Stats::getValue(int v)
{
	return a[v];
}
