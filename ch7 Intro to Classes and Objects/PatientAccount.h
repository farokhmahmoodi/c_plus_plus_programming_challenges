#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
#include "Surgery.h"
#include "Pharmacy.h"

class PatientAccount
{
private:
	double totalCharges, dailyRate;
	int numDaysSpentInHospital;
	Surgery b;
	Pharmacy c;
public:
	PatientAccount();
	void addDailyRate();
	void addNumDays(int);
	void addSurgeryCharges(int);
	void addPharmacyCharges(int);
	int getNumDaysSpentInHospital();
	double getDailyRate();
	double getTotalCharges();
};
#endif