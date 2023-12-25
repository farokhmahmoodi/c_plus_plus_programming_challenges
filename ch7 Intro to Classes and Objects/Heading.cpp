#include "Heading.h"
#include <iostream>
#include <iomanip>
using namespace std;

Heading::Heading(string c, string r)
{
	companyName = c; reportName = r;
}

Heading::Heading()
{
	companyName = "ABC Industries"; reportName = "Report";
}

void Heading::print1Line()
{
	cout << setw(20) << companyName << " " << reportName << endl;
}

void Heading::printBoxedLine()
{
	int count = 0;
	if (companyName.length() > reportName.length())
	{
		for (int i = 1; i < companyName.length() * 4; i++)
		{
			cout << "*";
			count++;
		}
		cout << endl;
		cout << setw(count/1.7) << companyName << endl;
		cout << setw(count/2) << reportName << endl;
		for (int i = 1; i < companyName.length() * 4; i++)
		{
			cout << "*";
			count++;
		}
		cout << endl;
	}
	else if (reportName.length() > companyName.length())
	{
		for (int i = 1; i < reportName.length() * 4; i++)
		{
			cout << "*";
			count++;
		}
		cout << endl;
		cout << setw(count/2) << companyName << endl;
		cout << setw(count/1.7) << reportName << endl;
		for (int i = 1; i < reportName.length() * 4; i++)
		{
			cout << "*";
			count++;
		}
		cout << endl;
	}
	else
	{
		for (int i = 1; i < companyName.length() * 4; i++)
		{
			cout << "*";
			count++;
		}
		cout << endl;
		cout << setw(count/1.8) << companyName << endl;
		cout << setw(count/1.8) << reportName << endl;
		for (int i = 1; i < companyName.length() * 4; i++)
		{
			cout << "*";
			count++;
		}
		cout << endl;
	}
}
