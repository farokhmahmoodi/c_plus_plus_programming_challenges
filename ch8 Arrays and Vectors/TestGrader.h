#ifndef TESTGRADER_H
#define TESTGRADER_H
#include <iostream>
#include <string>
using namespace std;

class TestGrader
{
private:
	char answers[20];
public:
	TestGrader();
	void setKey(const string);
	string grade(const char[]);
};
#endif
