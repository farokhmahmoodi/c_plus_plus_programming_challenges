/*Write a program that displays a simulated paycheck. The program should ask the user to enter the date,
the payee’s name, and the amount of the check. It should then display a simulated check with the dollar
amount spelled out, as shown here:

                                 Date: 12/24/2016
Pay to the Order of: John Phillips           $1920.85
One thousand nine hundred twenty and 85 cents

You may assume the amount is no greater than $10000. Be sure to format the numeric value of the check in
fixed-point notation with two decimal places of precision. Be sure the decimal place always displays,
even when the number is zero or has no fractional part. Use either C-strings or string class objects in
this program.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void checkWriter(string, string, double);

int main()
{
    string date, payeeName;
    double amount;

    cout << "Enter payee name:";
    getline(cin, payeeName);
    cout << "Enter date formatted as MM/DD/YYYY:";
    getline(cin, date);
    do
    {
        cout << "Enter amount of check no greater than $10000 "
            << " or less than $0:";
        cin >> amount;
        if (amount > 10000 || amount < 0)
            cout << "Invalid input." << endl;
    } while (amount > 10000 || amount < 0);
    cin.ignore();
    checkWriter(payeeName, date, amount);

    return 0;
}

void checkWriter(string name, string date, double amount)
{



}
