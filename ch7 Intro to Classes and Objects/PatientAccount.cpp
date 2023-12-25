#include "PatientAccount.h"

PatientAccount::PatientAccount()
{
	totalCharges = 0.0; numDaysSpentInHospital = 0, dailyRate = 50.75;
}

void PatientAccount::addDailyRate()
{
	totalCharges += numDaysSpentInHospital * dailyRate;
}

void PatientAccount::addNumDays(int n)
{
	numDaysSpentInHospital += n;
}

void PatientAccount::addSurgeryCharges(int choice)
{
	if (choice == 1)
		totalCharges += b.getHeartSurgeryCharges();
	else if (choice == 2)
		totalCharges += b.getBrainSurgeryCharges();
	else if (choice == 3)
		totalCharges += b.getVascularSurgeryCharges();
	else if (choice == 4)
		totalCharges += b.getDigestiveSurgeryCharges();
	else
		totalCharges += b.getBoneSurgeryCharges();
}

void PatientAccount::addPharmacyCharges(int choice)
{
	if (choice == 1)
		totalCharges += c.getCapsuleCharges();
	else if (choice == 2)
		totalCharges += c.getLiquidCharges();
	else if (choice == 3)
		totalCharges += c.getTabletCharges();
	else if (choice == 4)
		totalCharges += c.getInjectionCharges();
	else
		totalCharges += c.getInhalerCharges();
}


double PatientAccount::getTotalCharges()
{
	return totalCharges;
}

int PatientAccount::getNumDaysSpentInHospital()
{
	return numDaysSpentInHospital;
}

double PatientAccount::getDailyRate()
{
	return dailyRate;
}




