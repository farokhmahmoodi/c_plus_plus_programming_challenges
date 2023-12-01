#ifndef BINMANAGER_H
#define BINMANAGER_H
#include "InvBin.h"

class BinManager
{
private:
	InvBin bin[30];
	int numBins;

public:
	BinManager()
	{
		numBins = 0; 
	}

	BinManager(int size, string d[], int q[]);
	string getDescription(int);
	int getQuantity(int);
	bool addParts(int, int);
	bool removeParts(int, int);
};
#endif
