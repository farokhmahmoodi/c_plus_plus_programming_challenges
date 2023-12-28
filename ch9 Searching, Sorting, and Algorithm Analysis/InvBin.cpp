#include "InvBin.h"

void InvBin::setDescription(string d)
{
	description = d;
}

string InvBin::getDescription()
{
	return description;
}

void InvBin::setQty(int q)
{
	qty += q;
}

void InvBin::removeQty(int q)
{
	qty -= q;
}

int InvBin::getQty()
{
	return qty;
}
