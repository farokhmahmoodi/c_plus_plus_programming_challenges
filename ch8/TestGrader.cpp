#include "TestGrader.h"

TestGrader::TestGrader()
{
	for (int i = 0; i < 20; i++)
		answers[i] = ' ';
}

void TestGrader::setKey(const string a[])
{
	for (int i = 0; i < 20; i++)
		answers[i] = a[i];
}

string TestGrader::grade(const char a[])
{


}