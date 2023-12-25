#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
private:
	int year;
	string make;
	int speed; 
public:
	Car(int y, string m)
	{
		year = y; make = m; speed = 0;
	}
	int getYear();
	string getMake();
	int getSpeed();
	void accelerate();
	void brake();
};
#endif
