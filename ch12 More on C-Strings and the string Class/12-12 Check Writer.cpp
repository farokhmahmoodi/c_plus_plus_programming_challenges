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

const string convert[] = { "zero", "one",
"two", "three", "four", "five", "six", "seven",
"eight", "nine", "ten", "eleven", "twelve",
"thirteen","fourteen", "fifteen", "sixteen",
"seventeen", "eighteen", "nineteen", "twenty",
"thirty", "forty", "fifty", "sixty", "seventy",
"eighty", "ninety", "hundred", "thousand" };

void checkWriter(string, string, double);
void amountWrittenOut(double);

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
    amountWrittenOut(amount);
}

void amountWrittenOut(double amount)
{
    string amountStr = to_string(amount);

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
                << amountStr[3] << " cents" << endl;
        }
        else if (amountStr[2] != '0')
        {
            cout << " and " << amountStr[2]
                << "0 cents" << endl;
        }
        else if (amountStr[3] != '0')
        {
            cout << " and " << amountStr[3]
                << " cents" << endl;
        }
        break;
    case 2:
        string s = to_string(amountStr[0] - 48);
        s.append(1, amountStr[1]);
        int st = stoi(s);
        switch (amountStr[0])
        {
        case '1':
            switch (amountStr[1])
            {
            case '0':
                cout << convert[10] << " dollars";
                break;
            case '1':
                cout << convert[11] << " dollars";
                break;
            case '2':
                cout << convert[12] << " dollars";
                break;
            case '3':
                cout << convert[13] << " dollars";
                break;
            case '4':
                cout << convert[14] << " dollars";
                break;
            case '5':
                cout << convert[15] << " dollars";
                break;
            case '6':
                cout << convert[16] << " dollars";
                break;
            case '7':
                cout << convert[17] << " dollars";
                break;
            case '8':
                cout << convert[18] << " dollars";
                break;
            case '9':
                cout << convert[19] << " dollars";
                break;
            }
            break;
        case '2':
            switch (amountStr[1])
            {
            case '0':
                cout << convert[20] << " dollars";
                break;
            case '1':
                cout << convert[20] << " " << convert[1] << " dollars";
                break;
            case '2':
                cout << convert[20] << " " << convert[2] << " dollars";
                break;
            case '3':
                cout << convert[20] << " " << convert[3] << " dollars";
                break;
            case '4':
                cout << convert[20] << " " << convert[4] << " dollars";
                break;
            case '5':
                cout << convert[20] << " " << convert[5] << " dollars";
                break;
            case '6':
                cout << convert[20] << " " << convert[6] << " dollars";
                break;
            case '7':
                cout << convert[20] << " " << convert[7] << " dollars";
                break;
            case '8':
                cout << convert[20] << " " << convert[8] << " dollars";
                break;
            case '9':
                cout << convert[20] << " " << convert[9] << " dollars";
                break;
            }
            break;
        case '3':
            switch (amountStr[1])
            {
            case '0':
                cout << convert[21] << " dollars";
                break;
            case '1':
                cout << convert[21] << " " << convert[1] << " dollars";
                break;
            case '2':
                cout << convert[21] << " " << convert[2] << " dollars";
                break;
            case '3':
                cout << convert[21] << " " << convert[3] << " dollars";
                break;
            case '4':
                cout << convert[21] << " " << convert[4] << " dollars";
                break;
            case '5':
                cout << convert[21] << " " << convert[5] << " dollars";
                break;
            case '6':
                cout << convert[21] << " " << convert[6] << " dollars";
                break;
            case '7':
                cout << convert[21] << " " << convert[7] << " dollars";
                break;
            case '8':
                cout << convert[21] << " " << convert[8] << " dollars";
                break;
            case '9':
                cout << convert[21] << " " << convert[9] << " dollars";
                break;
            }
            break;
        case '4':
            switch (amountStr[1])
            {
            case '0':
                cout << convert[22] << " dollars";
                break;
            case '1':
                cout << convert[22] << " " << convert[1] << " dollars";
                break;
            case '2':
                cout << convert[22] << " " << convert[2] << " dollars";
                break;
            case '3':
                cout << convert[22] << " " << convert[3] << " dollars";
                break;
            case '4':
                cout << convert[22] << " " << convert[4] << " dollars";
                break;
            case '5':
                cout << convert[22] << " " << convert[5] << " dollars";
                break;
            case '6':
                cout << convert[22] << " " << convert[6] << " dollars";
                break;
            case '7':
                cout << convert[22] << " " << convert[7] << " dollars";
                break;
            case '8':
                cout << convert[22] << " " << convert[8] << " dollars";
                break;
            case '9':
                cout << convert[22] << " " << convert[9] << " dollars";
                break;
            }
            break;
        case '5':
            switch (amountStr[1])
            {
            case '0':
                cout << convert[23] << " dollars";
                break;
            case '1':
                cout << convert[23] << " " << convert[1] << " dollars";
                break;
            case '2':
                cout << convert[23] << " " << convert[2] << " dollars";
                break;
            case '3':
                cout << convert[23] << " " << convert[3] << " dollars";
                break;
            case '4':
                cout << convert[23] << " " << convert[4] << " dollars";
                break;
            case '5':
                cout << convert[23] << " " << convert[5] << " dollars";
                break;
            case '6':
                cout << convert[23] << " " << convert[6] << " dollars";
                break;
            case '7':
                cout << convert[23] << " " << convert[7] << " dollars";
                break;
            case '8':
                cout << convert[23] << " " << convert[8] << " dollars";
                break;
            case '9':
                cout << convert[23] << " " << convert[9] << " dollars";
                break;
            }
            break;
        case '6':
            switch (amountStr[1])
            {
            case '0':
                cout << convert[24] << " dollars";
                break;
            case '1':
                cout << convert[24] << " " << convert[1] << " dollars";
                break;
            case '2':
                cout << convert[24] << " " << convert[2] << " dollars";
                break;
            case '3':
                cout << convert[24] << " " << convert[3] << " dollars";
                break;
            case '4':
                cout << convert[24] << " " << convert[4] << " dollars";
                break;
            case '5':
                cout << convert[24] << " " << convert[5] << " dollars";
                break;
            case '6':
                cout << convert[24] << " " << convert[6] << " dollars";
                break;
            case '7':
                cout << convert[24] << " " << convert[7] << " dollars";
                break;
            case '8':
                cout << convert[24] << " " << convert[8] << " dollars";
                break;
            case '9':
                cout << convert[24] << " " << convert[9] << " dollars";
                break;
            }
            break;
        case '7':
            switch (amountStr[1])
            {
            case '0':
                cout << convert[25] << " dollars";
                break;
            case '1':
                cout << convert[25] << " " << convert[1] << " dollars";
                break;
            case '2':
                cout << convert[25] << " " << convert[2] << " dollars";
                break;
            case '3':
                cout << convert[25] << " " << convert[3] << " dollars";
                break;
            case '4':
                cout << convert[25] << " " << convert[4] << " dollars";
                break;
            case '5':
                cout << convert[25] << " " << convert[5] << " dollars";
                break;
            case '6':
                cout << convert[25] << " " << convert[6] << " dollars";
                break;
            case '7':
                cout << convert[25] << " " << convert[7] << " dollars";
                break;
            case '8':
                cout << convert[25] << " " << convert[8] << " dollars";
                break;
            case '9':
                cout << convert[25] << " " << convert[9] << " dollars";
                break;
            }
            break;
        case '8':
            switch (amountStr[1])
            {
            case '0':
                cout << convert[26] << " dollars";
                break;
            case '1':
                cout << convert[26] << " " << convert[1] << " dollars";
                break;
            case '2':
                cout << convert[26] << " " << convert[2] << " dollars";
                break;
            case '3':
                cout << convert[26] << " " << convert[3] << " dollars";
                break;
            case '4':
                cout << convert[26] << " " << convert[4] << " dollars";
                break;
            case '5':
                cout << convert[26] << " " << convert[5] << " dollars";
                break;
            case '6':
                cout << convert[26] << " " << convert[6] << " dollars";
                break;
            case '7':
                cout << convert[26] << " " << convert[7] << " dollars";
                break;
            case '8':
                cout << convert[26] << " " << convert[8] << " dollars";
                break;
            case '9':
                cout << convert[26] << " " << convert[9] << " dollars";
                break;
            }
            break;
        case '9':

            break;
        }


        break;

    }
}
