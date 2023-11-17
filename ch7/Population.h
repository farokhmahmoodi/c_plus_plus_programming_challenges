#ifndef POPULATION_H
#define POPULATION_H

class Population
{
private:
	int population, annualBirths, annualDeaths;
public:
	Population(int, int, int);
	Population();
	void setPopulation(int);
	void setBirths(int);
	void setDeaths(int);
	int getPopulation();
	int getBirths();
	int getDeaths();
	double getBirthRate();
	double getDeathRate();
};
#endif

