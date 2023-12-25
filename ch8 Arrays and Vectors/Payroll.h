#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll
{
private:
	double payRate, numHours;
public:
	Payroll();
	void setPayRate(double);
	void setNumHours(double);
	double getPayRate();
	double getNumHours();
	double grossPay();
};
#endif
