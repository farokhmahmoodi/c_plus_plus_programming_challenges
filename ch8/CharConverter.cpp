#include "CharConverter.h"

string CharConverter::uppercase(string a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (islower(a[i]))
			a[i] = toupper(a[i]);
	}
	return a;
}


string CharConverter::properWords(string a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if(i == 0 && isalpha(a[i]) && i== 0 && islower(a[i]))
			a[i] = toupper(a[i]);
		else if (islower(a[i]) && !isalpha(a[i - 1]))
			a[i] = toupper(a[i]);
	}
	return a;
}