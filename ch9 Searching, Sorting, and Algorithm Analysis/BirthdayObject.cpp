#include "BirthdayObject.h"

BirthdayObject::BirthdayObject()
{
	name = birthday = "";
}

void BirthdayObject::setName(string n)
{
	name = n;
}

void BirthdayObject::setBirthday(string b)
{
	birthday = b;
}

string BirthdayObject::getName()
{
	return name;
}

string BirthdayObject::getBirthday()
{
	return birthday;
}