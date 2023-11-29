#ifndef TESTGRADER_H
#define TESTGRADER_H
#include <string>
using namespace std;

class TestGrader
{
private:
	string answers[20];
public:
	TestGrader();
	void setKey(const string[]);
	string grade(const char[]);
};
#endif
