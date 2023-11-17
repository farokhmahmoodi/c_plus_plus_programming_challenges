#ifndef WIDGET_H
#define WIDGET_H

const double NUM_WIDGETS_PRODUCED_PER_DAY = 160.0;

class Widget
{
private:
	int numWidgets; 
	double numDays;
public:
	void setNumWidgets(int);
	void setNumDays();
	int getNumWidgets();
	double getNumDays();
};
#endif