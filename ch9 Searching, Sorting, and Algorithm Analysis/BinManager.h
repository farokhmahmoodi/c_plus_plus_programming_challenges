#ifndef BINMANAGER_H
#define BINMANAGER_H
#include "InvBin.h"

class BinManager
{
private:
	InvBin bin[30];
	int numBins;
	int searchItemDescription(string);
public:
	BinManager()
	{
		numBins = 0; 
	}

	BinManager(int size, string d[], int q[])
	{
		numBins = size;
		for (int i = 0; i < size; i++)
		{
			bin[i].setDescription(d[i]);
			bin[i].setQty(q[i]);
		}
	}
	string getDescription(int);
	int getQuantity(int);
	bool addParts(int, int);
	bool removeParts(int, int);
	bool addParts(string, int);
	bool removeParts(string, int);
	int getQuantity(string);
};
#endif
