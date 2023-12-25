#ifndef SNOWREPORT_H
#define SNOWREPORT_H

class SnowReport
{
private:
	int date;
	double inches;
public:
	SnowReport();
	void setDate(int);
	void setInches(double);
	int getDate() const;
	double getInches() const;
};
#endif
