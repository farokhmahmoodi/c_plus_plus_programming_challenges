/*Write a program that computes and displays the charges for a patient’s hospital stay. First, the program should ask if the patient was admitted as an inpatient or an outpatient. If the patient was an inpatient, the following data should be entered:

The number of days spent in the hospital

The daily rate

Charges for hospital services (lab tests, etc.)

Hospital medication charges

If the patient was an outpatient, the following data should be entered:

Charges for hospital services (lab tests, etc.)

Hospital medication charges

Use a single, separate function to validate that no input is less than zero. If it is, it should be reentered before being returned.

Once the required data has been input and validated, the program should use two overloaded functions to calculate the total charges. One of the functions should accept arguments for the inpatient data, while the other function accepts arguments for outpatient data. Both functions should return the total charges.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include<fstream>
#include<cctype>
#include<cmath> 
#include <windows.h> //for colored text
using namespace std;

void validateData(int&, double&, double&, double&);
double totalCharges(int, double, double, double);
double totalCharges(double, double);

int main()
{
    string patientType;
    int numDays = 0;
    double dailyRate = 0.0, serviceCharges, medicationCharges;
    do
    {
        cout << "patient admitted inpatient or outpatient?:";
        cin >> patientType;
        if (patientType == "inpatient")
        {
            cout << "num days spent in hospital?:";
            cin >> numDays;
            cout << "daily rate?:";
            cin >> dailyRate;
            cout << "charges for hospital services?:";
            cin >> serviceCharges;
            cout << "charges for medication?:";
            cin >> medicationCharges;
            validateData(numDays, dailyRate, serviceCharges, medicationCharges);
            cout << fixed << showpoint << setprecision(2);
            cout << "total charges is $" << totalCharges(numDays, dailyRate, serviceCharges, medicationCharges) << ".\n";
        }
        else if (patientType == "outpatient") //outpatient
        {
            cout << "charges for hospital services?:";
            cin >> serviceCharges;
            cout << "charges for medication?:";
            cin >> medicationCharges;
            validateData(numDays, dailyRate, serviceCharges, medicationCharges);
            cout << fixed << showpoint << setprecision(2);
            cout << "total charges is $" << totalCharges(serviceCharges, medicationCharges) << ".\n";
        }
        else
        {
            cout << "input error.\n";
        }
    } while (patientType != "inpatient" && patientType != "outpatient");
    return 0;
}

void validateData(int& numDays, double& dailyRate, double& serviceCharges, double& medicationCharges)
{
    while (numDays < 0)
    {
        cout << "enter num days greater than or equal to 0:";
        cin >> numDays;
    }
    while (dailyRate < 0)
    {
        cout << "enter daily Rate greater than or equal to 0:";
        cin >> dailyRate;
    }
    while (serviceCharges <= 0)
    {
        cout << "enter service charges greater than 0:";
        cin >> serviceCharges;
    }
    while (medicationCharges <= 0)
    {
        cout << "enter medication charges greater than 0:";
        cin >> medicationCharges;
    }
}

double totalCharges(int numDays, double dailyRate, double serviceCharges, double medicationCharges)
{
    return (numDays * dailyRate) + serviceCharges + medicationCharges;
}

double totalCharges(double serviceCharges, double medicationCharges)
{
    return serviceCharges + medicationCharges;
}
