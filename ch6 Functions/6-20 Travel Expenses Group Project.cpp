/*This program should be designed and written by a team of students.

Start by analyzing the program requirements. Decide what functions are needed and what each one must do. Divide the work so that each student is given about the same workload. For example, one student might design the main function while others design individual functions that main will call. Then, before beginning to write any code, decide on function names, parameters, and return types so all the completed modules will properly work together when they are combined into the final program.

Here is the assignment. Write a program that calculates and displays the total travel expenses of a company employee on a trip. The program should have functions that ask for and return the following:

The trip dates

The total number of nights spent away from home on the trip

The amount of any round-trip airfare

The amount of any car rentals

Miles driven, if a private vehicle was used. Vehicle allowance is $0.58 per mile.

Parking fees

Taxi fees

Conference or seminar registration fees

Hotel expenses. The company allows up to $120 per night for lodging.

The cost of meals

The program should perform any necessary calculations, such as computing mileage reimbursement and allowed hotel reimbursement. It should then create a nicely formatted expense report that includes the amount spent in each category, as well as the total amount spent for the entire trip. This report should be written to a file.
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

//function prototypes
string tripDates();
int totalNightsAwayFromHome();
double roundTripAirfare();
double carRentals();
int milesDriven();
double mileReimburse(int);
double parkFees();
double taxiFees();
double conferenceFees();
double hotelExpenses();
double hotelReimburse(int);
double mealCosts();
ofstream outFile(string, int, double, double, int, double, double, double, double, double, double, double);

//main 
int main()
{
    string tripsDates;
    int totalNightsAway, milesDrove;
    double airfareFees, carRentalFees, mileageReimburse, parkingFees, taxiCosts,
        conferenceCosts, hotelCosts, hotelReimbursement, mealFees;
    tripsDates = tripDates();
    totalNightsAway = totalNightsAwayFromHome();
    milesDrove = milesDriven();
    airfareFees = roundTripAirfare();
    carRentalFees = carRentals();
    mileageReimburse = mileReimburse(milesDrove);
    parkingFees = parkFees();
    taxiCosts = taxiFees();
    conferenceCosts = conferenceFees();
    hotelCosts = hotelExpenses();
    hotelReimbursement = hotelReimburse(totalNightsAway);
    mealFees = mealCosts();
    outFile(tripsDates, totalNightsAway, airfareFees, carRentalFees, milesDrove, mileageReimburse, parkingFees, taxiCosts, conferenceCosts, hotelCosts,
        hotelReimbursement, mealFees);
    

    return 0;
}

//function definitions
string tripDates()
{
    string tripDates;
    cout << "Enter trip dates: ";
    getline(cin, tripDates);
    return tripDates;
}

int totalNightsAwayFromHome()
{
    int nights;
    do
    {
        cout << "enter num of nights spent away from home (>= 0):";
        cin >> nights;
    } while (nights <= 0);
    return nights;
}

double roundTripAirfare()
{
    double airfare;
    do
    {
        cout << "enter cost of round trip airfare (>= 0):";
        cin >> airfare;
    } while (airfare < 0);
    return airfare;
}

double carRentals()
{
    double carRentals;
    do
    {
        cout << "enter cost of any car rentals (>= 0):";
        cin >> carRentals;
    } while (carRentals < 0);
    return carRentals;
}

int milesDriven() //if private vehicle was used
{
    int milesDriven;
    do
    {
        cout << "enter miles driven if a private vehicle was used (>= 0):";
        cin >> milesDriven;
    } while (milesDriven < 0);
    return milesDriven;
}

double mileReimburse(int milesDriven)
{
    return .58 * milesDriven;
}

double parkFees()
{
    double parkF;
    do
    {
        cout << "enter parking fees (>= 0):";
        cin >> parkF;
    } while (parkF < 0);
    return parkF;
}

double taxiFees()
{
    double taxiF;
    do
    {
        cout << "enter taxi fees (>= 0):";
        cin >> taxiF;
    } while (taxiF < 0);
    return taxiF;
}

double conferenceFees()
{
    double confF;
    do
    {
        cout << "enter conference and seminar registration fees (>= 0):";
        cin >> confF;
    } while (confF < 0);
    return confF;
}

double hotelExpenses()
{
    double hotel;
    do
    {
        cout << "enter hotel expenses (>= 0):";
        cin >> hotel;
    } while (hotel < 0);
    return hotel;
}

double hotelReimburse(int nights)
{
    return 120 * nights;
}

double mealCosts()
{
    double meal;
    do
    {
        cout << "enter meal costs (>= 0):";
        cin >> meal;
    } while (meal < 0);
    return meal;
}

ofstream outFile(string tripDates, int totalNightsAway, double airfare, double carRental, int milesDriven, double milesRe, double park
        , double taxi, double conf, double hotelExp, double hotelRe, double meals)
{
    ofstream outFile("C:\\Users\\FM\\source\\repos\\start c++ ch6\\6_20\\report.txt");
    outFile << "Travel Expenses Report\n";
    outFile << "------------------------------------------------------\n";
    outFile << "Trip Dates: " << tripDates << endl;
    outFile << "Total Number of Nights Spent Away From Home on Trip: " << setw(40) << totalNightsAway << endl;
    outFile << "Amount of any Round-Trip Airfare: $" << fixed << showpoint << setprecision(2) << setw(40) << airfare << endl;
    outFile << "Amount of any Car Rentals: $" << fixed << showpoint << setprecision(2) << setw(40) << carRental << endl;
    outFile << "Miles Driven, if a private vehicle was used: " << setw(40) << milesDriven << endl;
    outFile << "Private Vehicle Mileage Reimbursement: $" << fixed << showpoint << setprecision(2) << setw(40) << milesRe << endl;
    outFile << "Parking Fees: $" << fixed << showpoint << setprecision(2) << setw(40) << park << endl;
    outFile << "Taxi Fees: $" << fixed << showpoint << setprecision(2) << setw(40) << taxi << endl;
    outFile << "Conference or seminar registration Fees: $" << fixed << showpoint << setprecision(2) << setw(40) << conf << endl;
    outFile << "Hotel Expenses: $" << fixed << showpoint << setprecision(2) << setw(40) << hotelExp << endl;
    outFile << "Allowed Hotel Reimbursement: $" << fixed << showpoint << setprecision(2) << setw(40) << hotelRe << endl;
    if(hotelExp > hotelRe)
        outFile << "Hotel Expenses you pay: $" << fixed << showpoint << setprecision(2) << setw(40) << hotelExp - hotelRe << endl;
    outFile << "Cost of Meals: $" << fixed << showpoint << setprecision(2) << setw(40) << meals << endl;
    outFile << "Total Expenses: $" << fixed << showpoint << setprecision(2) << setw(40) << airfare + carRental + milesRe + park + taxi + conf + hotelExp + meals << endl;
    outFile.close();
    return outFile;
}
