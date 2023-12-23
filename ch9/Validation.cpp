#include "Validation.h"

Validation::Validation()
{

}

void Validation::linearSearch(int value)
{
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < SIZE && !found)
	{
		if (a[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	if (position == -1)
	{
		cout << "The number is not valid." << endl;
	}
	else
	{
		cout << "The number is valid." << endl;
	}
}
