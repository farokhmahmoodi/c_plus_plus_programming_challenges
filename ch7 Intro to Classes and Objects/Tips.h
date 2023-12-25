#ifndef TIPS_H
#define TIPS_H

class Tips
{
private:
	double taxRate;
public:
	Tips(double);
	Tips();
	double computeTip(double, double);
	double getTaxRate();
};
#endif