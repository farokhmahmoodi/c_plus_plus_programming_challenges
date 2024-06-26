/*Modify Programming Challenge 16, Overloaded Hospital, to write the report it creates to a file. 
Print the contents of the file to hand in to your instructor.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include<fstream>
#include<cctype>
#include<cmath> 
using namespace std;

void validateData(int&, double&, double&, double&);
double totalCharges(int, double, double, double);
double totalCharges(double, double);
void outFile(ofstream&, string, int, double, double, double);
void outFile(ofstream&, string, double, double);

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
            validateData(numDays, dailyRate, serviceCharges, medicationCharges);\
            ofstream outputFile("C:\\Users\\FM\\source\\repos\\start c++ ch6\\6_17\\report.txt");
            outFile(outputFile, patientType, numDays, dailyRate, serviceCharges, medicationCharges);
            outputFile.close();
        }
        else if (patientType == "outpatient") //outpatient
        {
            cout << "charges for hospital services?:";
            cin >> serviceCharges;
            cout << "charges for medication?:";
            cin >> medicationCharges;
            validateData(numDays, dailyRate, serviceCharges, medicationCharges);
            ofstream outputFile("C:\\Users\\FM\\source\\repos\\start c++ ch6\\6_17\\report.txt");
            outFile(outputFile, patientType, serviceCharges, medicationCharges);
            outputFile.close();
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

void outFile(ofstream& outFile, string patientType, int numDays, double dailyRate, double serviceCharges, double medicationCharges) //inpatient
{
    outFile << "Hospital Report\n";
    outFile << "-------------------\n";
    outFile << "Patient Type: " << patientType << '\n';
    outFile << "Number of Days Spent in Hospital: " << numDays << '\n';
    outFile << fixed << showpoint << setprecision(2);
    outFile << "Daily Rate: $" << dailyRate << '\n';
    outFile << "Service Charges: $" << serviceCharges << '\n';
    outFile << "Medication Charges: $" << medicationCharges << '\n';
    outFile << "Total Charges: $" << totalCharges(numDays, dailyRate, serviceCharges, medicationCharges) << '\n';
}

void outFile(ofstream& outFile, string patientType, double serviceCharges, double medicationCharges) //outpatient
{
    outFile << "Hospital Report\n";
    outFile << "-------------------\n";
    outFile << "Patient Type: " << patientType << '\n';
    outFile << fixed << showpoint << setprecision(2);
    outFile << "Service Charges: $" << serviceCharges << '\n';
    outFile << "Medication Charges: $" << medicationCharges<< '\n';
    outFile << "Total Charges: $" << totalCharges(serviceCharges, medicationCharges) << '\n';
}