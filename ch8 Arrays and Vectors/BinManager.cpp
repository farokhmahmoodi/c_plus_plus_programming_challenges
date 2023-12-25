#include "BinManager.h"

string BinManager::getDescription(int index)
{
	return bin[index].getDescription();
}

int BinManager::getQuantity(int index)
{
	return bin[index].getQty();
}

bool BinManager::addParts(int binIndex, int q)
{
	if (q < 1)
		return false;
	else
	{
		bin[binIndex].setQty(q);
		return true;
	}
}

bool BinManager::removeParts(int binIndex, int q)
{
	if (q < 1)
		return false;
	else if (bin[binIndex].getQty() < q)
		return false;
	else
	{
		bin[binIndex].removeQty(q);
		return true;
	}
}
