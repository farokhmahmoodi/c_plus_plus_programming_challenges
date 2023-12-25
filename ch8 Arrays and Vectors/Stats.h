#ifndef STATS_H
#define STATS_H

class Stats
{
private:
	double a[30];
	int size;
public:
	Stats();
	double total();
	double average();
	int lowest();
	int highest();
	bool storeValue(double);
	double getValue(int);
};
#endif
