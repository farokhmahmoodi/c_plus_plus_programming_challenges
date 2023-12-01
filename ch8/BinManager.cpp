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
	
}

bool BinManager::removeParts(int binIndex, int q)
{


}
