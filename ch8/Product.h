#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>
using namespace std;

class Product
{
private:
	string name;
	int quantity;

public:
	Product();
	Product(string);
	Product(string, int);
	void setName(string);
	void setQuantity(int);
	string getName();
	int getQuantity();
};
#endif
