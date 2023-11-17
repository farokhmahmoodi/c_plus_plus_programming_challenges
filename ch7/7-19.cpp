/*
*/

#include <iostream>
#include <iomanip>
#include "PatientAccount.h"
using namespace std;

int main()
{
	PatientAccount a;
	int mainMenuChoice, subMenuChoice,days;
	cout << "Welcome to Patient Hospital Bill Program." << endl;
	do{
		do {
			cout << "Enter choice from menu below." << endl;
			cout << "1. Surgery performed" << endl;
			cout << "2. Medication given" << endl;
			cout << "3. Check out of Hospital" << endl;
			cin >> mainMenuChoice;
			if (mainMenuChoice < 1 || mainMenuChoice > 3)
			{
				cout << "Input error." << endl;
			}
		} while (mainMenuChoice < 1 || mainMenuChoice > 3);
		switch (mainMenuChoice)
		{
		case 1:
			cout << "Enter type of surgery performed from menu below." << endl;
			cout << "1. Heart Surgery" << endl;
			cout << "2. Brain Surgery" << endl;
			cout << "3. Vascular Surgery" << endl;
			cout << "4. Digestive Surgery" << endl;
			cout << "5. Bone Surgery" << endl;
			cin >> subMenuChoice;
			while (subMenuChoice < 1 || subMenuChoice > 5)
			{
				cout << "Input error. Please enter valid choice from menu below." << endl;
				cout << "1. Heart Surgery" << endl;
				cout << "2. Brain Surgery" << endl;
				cout << "3. Vascular Surgery" << endl;
				cout << "4. Digestive Surgery" << endl;
				cout << "5. Bone Surgery" << endl;
				cin >> subMenuChoice;
			}
			switch (subMenuChoice)
			{
			case 1:
				a.addSurgeryCharges(subMenuChoice);
				break;
			case 2:
				a.addSurgeryCharges(subMenuChoice);
				break;
			case 3:
				a.addSurgeryCharges(subMenuChoice);
				break;
			case 4:
				a.addSurgeryCharges(subMenuChoice);
				break;
			case 5:
				a.addSurgeryCharges(subMenuChoice);
				break;
			}
			break;
		case 2:
			cout << "Enter type of medication given from menu below." << endl;
			cout << "1. Capsules" << endl;
			cout << "2. Liquid" << endl;
			cout << "3. Tablet" << endl;
			cout << "4. Injection" << endl;
			cout << "5. Inhaler" << endl;
			cin >> subMenuChoice;
			while (subMenuChoice < 1 || subMenuChoice > 5)
			{
				cout << "Input error. Please enter valid choice from menu below." << endl;
				cout << "1. Capsules" << endl;
				cout << "2. Liquid" << endl;
				cout << "3. Tablet" << endl;
				cout << "4. Injection" << endl;
				cout << "5. Inhaler" << endl;
				cin >> subMenuChoice;
			}
			switch (subMenuChoice)
			{
			case 1:
				a.addPharmacyCharges(subMenuChoice);
				break;
			case 2:
				a.addPharmacyCharges(subMenuChoice);
				break;
			case 3:
				a.addPharmacyCharges(subMenuChoice);
				break;
			case 4:
				a.addPharmacyCharges(subMenuChoice);
				break;
			case 5:
				a.addPharmacyCharges(subMenuChoice);
				break;
			}
			break;
		case 3:
			cout << "How many days was patient in hospital?: ";
			cin >> days;
			while (days < 0)
			{
				cout << "Input error. Please enter number of days patient was in hospital (greater than or equal to 0)";
				cin >> days;
			}
			a.addNumDays(days);
			a.addDailyRate();
			cout << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << setw(30) << "Hospital Bill Report" << endl;
			cout << "----------------------------------------" << endl;
			cout << "Daily Rate: $" << a.getDailyRate() << endl;
			cout << "Number of Days spent in hospital: " << a.getNumDaysSpentInHospital() << endl;
			cout << "Total Charges for hospital stay is $" << a.getTotalCharges() << endl;
			break;
		}
	} while (mainMenuChoice != 3);
	return 0;
}
