/*Write a program that computes a patient’s bill for a hospital stay. The different components of the program are

The PatientAccount class, which will keep a total of the patient’s charges. It will also keep track of the number of days spent in the hospital. The group must decide on the hospital’s daily rate.

The Surgery class, which will have stored within it the charges for at least five types of surgery. It can update the charges variable of the PatientAccount class.

The Pharmacy class, which will have stored within it the price of at least five types of medication. It can update the charges variable of the PatientAccount class.

The client program (i.e., the main program).

Divide the work so that each student is given about the same workload. For example, one or two students might design the client program, while other individuals or pairs design each class it will use. Then, before beginning to write any code, the group should decide on function names, parameters, and return types so all the completed modules will properly work together when they are combined into the final program.

The main program should include a menu that allows the user to enter a type of surgery, enter one or more types of medication, and check the patient out of the hospital. When the patient checks out, the total charges should be displayed.
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
