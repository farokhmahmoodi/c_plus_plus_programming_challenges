#include "Product.h"

Product::Product()
{
	name = " ";
	quantity = 0;
}

Product::Product(string n)
{
	name = n;
	quantity = 0;
}

Product::Product(string n, int q)
{
	name = n;
	quantity = q;
}

void Product::setName(string n)
{
	name = n;
}

void Product::setQuantity(int q)
{
	quantity = q;
}

string Product::getName()
{
	return name;
}

int Product::getQuantity()
{
	return quantity;
}
