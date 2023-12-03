#ifndef INVBIN_H
#define INVBIN_H
#include <string>
using namespace std;

class InvBin
{
private:
	string description;
	int qty;

public:
	InvBin(string d = "empty", int q = 0)
	{
		description = d;
		qty = q;
	}

	void setDescription(string);
	string getDescription();
	void setQty(int);
	void removeQty(int);
	int getQty();
};
#endif
