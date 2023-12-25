#ifndef HEADING_H
#define HEADING_H
#include <string>
using namespace std;

class Heading
{
private:
	string companyName, reportName;

public:
	Heading(string, string);
	Heading();
	void print1Line();
	void printBoxedLine();

};
#endif