// 6_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
//
/*
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
