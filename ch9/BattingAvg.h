#ifndef BATTINGAVG_H
#define BATTINGAVG_H
#include <string>
using namespace std;

class BattingAvg
{
private:
	string name;
	double avg;
public:
	BattingAvg();
	void setName(string);
	void setAvg(double);
	string getName() const;
	double getAvg() const;
};
#endif
