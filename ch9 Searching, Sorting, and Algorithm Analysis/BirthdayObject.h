#ifndef BIRTHDAYOBJECT_H
#define BIRTHDAYOBJECT_H
#include<string>
using namespace std;

class BirthdayObject
{
private:
	string name, birthday;
public:
	BirthdayObject();
	void setName(string);
	void setBirthday(string);
	string getName();
	string getBirthday();
};
#endif
