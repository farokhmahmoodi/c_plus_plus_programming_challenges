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
string amountWrittenOut(double);

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
        if (amount > 10000.0 || amount < 0.0)
            cout << "Invalid input." << endl;
    } while (amount > 10000.0 || amount < 0.0);
    cin.ignore();
    checkWriter(payeeName, date, amount);

    return 0;
}

void checkWriter(string name, string date, double amount)
{
    cout << setw(40) << "Date: " << date << endl;
    cout << "Pay to the Order of: " << name << setw(10) << fixed << showpoint
        << setprecision(2) << "$" << amount << endl;
    cout << amountWrittenOut(amount) << endl;
}

string amountWrittenOut(double amount)
{
    string str = "", convert[] = {"zero", "one",
    "two", "three", "four", "five", "six", "seven",
    "eight", "nine", "ten", "eleven", "twelve",
    "thirteen","fourteen", "fifteen", "sixteen",
    "seventeen", "eighteen", "nineteen", "twenty",
    "thirty", "forty", "fifty", "sixty", "seventy",
    "eighty", "ninety", "hundred", "thousand"},
    amountStr = to_string(amount);

    switch (amountStr.find('.'))
    {
    case 1:
        switch (amountStr[0])
        {
        case '0':
            cout << "zero dollars";
            break;
        case '1':
            cout << "one dollar";
            break;
        case '2':
            cout << "two dollars";
            break;
        case '3':
            cout << "three dollars";
            break;
        case '4':
            cout << "four dollars";
            break;
        case '5':
            cout << "five dollars";
            break;
        case '6':
            cout << "six dollars";
            break;
        case '7':
            cout << "seven dollars";
            break;
        case '8':
            cout << "eight dollars";
            break;
        case '9':
            cout << "nine dollars";
            break;
        }
        if (amountStr[2] != '0' && amountStr[3] != '0')
        {
            cout << " and " << amountStr[2]
                << amountStr[3] << " cents";
        }
        else if (amountStr[2] != '0')
        {
            cout << " and " << amountStr[2]
                << "0 cents";
        }
        else if (amountStr[3] != '0')
        {
            cout << " and " << amountStr[3]
                << " cents";
        }
        break;
    case 2:


        break;

    }

    return str;
}
