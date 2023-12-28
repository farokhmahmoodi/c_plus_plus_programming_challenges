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

bool BinManager::addParts(string itemDescription, int q)
{
	if (q < 1)
		return false;
	else
	{
		bin[searchItemDescription(itemDescription)].setQty(q);
		return true;
	}
}

bool BinManager::removeParts(string itemDescription, int q)
{
	if (q < 1)
		return false;
	else if (bin[searchItemDescription(itemDescription)].getQty() < q)
		return false;
	else
	{
		bin[searchItemDescription(itemDescription)].removeQty(q);
		return true;
	}
}

int BinManager::getQuantity(string itemDescription)
{
	if (searchItemDescription(itemDescription) == -1)
		return -1;
	else
		return bin[searchItemDescription(itemDescription)].getQty();
}

int BinManager::searchItemDescription(string itemDescription) //linear search
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < 30 && !found)
	{
		if (bin[index].getDescription() == itemDescription)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}