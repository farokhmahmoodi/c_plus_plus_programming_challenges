#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
	int number;
	static string convert[];
public:
	Numbers(int a)
	{
		if (a >= 0)
			number = a;
		else
			number = 0;
	}
	string print()
	{
        string str = "";
        int thousands = number / 1000,
            hundreds = (number % 1000) / 100, tens = (number % 100) / 10,
            ones = number % 10;

        if (thousands != 0)
        {
            for (int i = 1; i <= 10; i++)
            {
                if (i == thousands)
                {
                    str += convert[i], str += " ", str += convert[29];
                    break;
                }
            }
        }
        if (hundreds != 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == hundreds)
                {
                    if (thousands > 0)
                        str += " ";
                    str += convert[i];
                    str += " ";
                    str += convert[28];
                    break;
                }
            }
        }
        switch (tens)
        {
        case 0:
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    if (thousands > 0 || hundreds > 0)
                        str += " ";
                    str += convert[i];
                    break;
                }
            }
            if (thousands == 0 && hundreds == 0 && ones == 0)
                str += convert[0];
            break;
        case 1:
            for (int i = 0; i <= 9; i++)
            {
                if (i == ones)
                {
                    if (thousands > 0 || hundreds > 0)
                        str += " ";
                    str += convert[10 + i];
                    break;
                }
            }
            break;
        case 2:
            if (thousands > 0 || hundreds > 0)
                str += " ";
            str += convert[20];
            if (ones > 0)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        str += " ";
                        str += convert[i];
                        break;
                    }
                }
            }
            break;
        case 3:
            if (thousands > 0 || hundreds > 0)
                str += " ";
            str += convert[21];
            if (ones > 0)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        str += " ";
                        str += convert[i];
                        break;
                    }
                }
            }
            break;
        case 4:
            if (thousands > 0 || hundreds > 0)
                str += " ";
            str += convert[22];
            if (ones > 0)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        str += " ";
                        str += convert[i];
                        break;
                    }
                }
            }
            break;
        case 5:
            if (thousands > 0 || hundreds > 0)
                str += " ";
            str += convert[23];
            if (ones > 0)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        str += " ";
                        str += convert[i];
                        break;
                    }
                }
            }
            break;
        case 6:
            if (thousands > 0 || hundreds > 0)
                str += " ";
            str += convert[24];
            if (ones > 0)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        str += " ";
                        str += convert[i];
                        break;
                    }
                }
            }
            break;
        case 7:
            if (thousands > 0 || hundreds > 0)
                str += " ";
            str += convert[25];
            if (ones > 0)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        str += " ";
                        str += convert[i];
                        break;
                    }
                }
            }
            break;
        case 8:
            if (thousands > 0 || hundreds > 0)
                str += " ";
            str += convert[26];
            if (ones > 0)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        str += " ";
                        str += convert[i];
                        break;
                    }
                }
            }
            break;
        case 9:
            if (thousands > 0 || hundreds > 0)
                str += " ";
            str += convert[27];
            if (ones > 0)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        str += " ";
                        str += convert[i];
                        break;
                    }
                }
            }
            break;
        }

        return str;
	}
};
#endif