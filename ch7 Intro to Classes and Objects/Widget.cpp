#include "Widget.h"

void Widget::setNumWidgets(int w)
{
	numWidgets = w;
}

void Widget::setNumDays()
{
	numDays = numWidgets / NUM_WIDGETS_PRODUCED_PER_DAY;
}

int Widget::getNumWidgets()
{
	return numWidgets;
}

double Widget::getNumDays()
{
	return numDays;
}