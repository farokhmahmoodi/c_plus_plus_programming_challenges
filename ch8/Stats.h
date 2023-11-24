#ifndef STATS_H
#define STATS_H

class Stats
{
private:
	double a[30];
public:
	Stats();
	double total();
	double average();
	double lowest();
	double highest();
	bool storeValue(double);

};
#endif
