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
    case 1: //$0.00-9.99
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
    case 2: //$10.00-99.99
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
            switch (amountStr[1])
            {
            case '0':
                cout << convert[27] << " dollars";
                break;
            case '1':
                cout << convert[27] << " " << convert[1] << " dollars";
                break;
            case '2':
                cout << convert[27] << " " << convert[2] << " dollars";
                break;
            case '3':
                cout << convert[27] << " " << convert[3] << " dollars";
                break;
            case '4':
                cout << convert[27] << " " << convert[4] << " dollars";
                break;
            case '5':
                cout << convert[27] << " " << convert[5] << " dollars";
                break;
            case '6':
                cout << convert[27] << " " << convert[6] << " dollars";
                break;
            case '7':
                cout << convert[27] << " " << convert[7] << " dollars";
                break;
            case '8':
                cout << convert[27] << " " << convert[8] << " dollars";
                break;
            case '9':
                cout << convert[27] << " " << convert[9] << " dollars";
                break;
            }
            break;
        }
        if (amountStr[3] != '0' && amountStr[4] != '0')
        {
            cout << " and " << amountStr[3]
                << amountStr[4] << " cents" << endl;
        }
        else if (amountStr[3] != '0')
        {
            cout << " and " << amountStr[3]
                << "0 cents" << endl;
        }
        else if (amountStr[4] != '0')
        {
            cout << " and " << amountStr[4]
                << " cents" << endl;
        }
        break;
    case 3: //$100.00-999.99
        switch (amountStr[0])
        {
        case '1': //$100.00-199.99
            cout << convert[1] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$100.00-109.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$110.00-119.99
                switch (amountStr[2])
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
            case '2': //$120.00-129.99
                switch (amountStr[2])
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
            case '3': //$130.00-139.99
                switch (amountStr[2])
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
            case '4': //$140.00-149.99
                switch (amountStr[2])
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
            case '5': //$150.00-159.99
                switch (amountStr[2])
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
            case '6': //$160.00-169.99
                switch (amountStr[2])
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
            case '7': //$170.00-179.99
                switch (amountStr[2])
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
            case '8': //$180.00-189.99
                switch (amountStr[2])
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
            case '9': //$190.00-199.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        case '2': //$200.00-299.99
            cout << convert[2] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$200.00-209.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$210.00-219.99
                switch (amountStr[2])
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
            case '2': //$220.00-229.99
                switch (amountStr[2])
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
            case '3': //$230.00-239.99
                switch (amountStr[2])
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
            case '4': //$240.00-249.99
                switch (amountStr[2])
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
            case '5': //$250.00-259.99
                switch (amountStr[2])
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
            case '6': //$260.00-269.99
                switch (amountStr[2])
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
            case '7': //$270.00-279.99
                switch (amountStr[2])
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
            case '8': //$280.00-289.99
                switch (amountStr[2])
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
            case '9': //$290.00-299.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        case '3': //$300.00-399.99
            cout << convert[3] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$300.00-309.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$310.00-319.99
                switch (amountStr[2])
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
            case '2': //$320.00-329.99
                switch (amountStr[2])
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
            case '3': //$330.00-339.99
                switch (amountStr[2])
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
            case '4': //$340.00-349.99
                switch (amountStr[2])
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
            case '5': //$350.00-359.99
                switch (amountStr[2])
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
            case '6': //$360.00-369.99
                switch (amountStr[2])
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
            case '7': //$370.00-379.99
                switch (amountStr[2])
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
            case '8': //$380.00-389.99
                switch (amountStr[2])
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
            case '9': //$390.00-399.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        case '4': //$400.00-499.99
            cout << convert[4] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$400.00-409.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$410.00-419.99
                switch (amountStr[2])
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
            case '2': //$420.00-429.99
                switch (amountStr[2])
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
            case '3': //$430.00-439.99
                switch (amountStr[2])
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
            case '4': //$440.00-449.99
                switch (amountStr[2])
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
            case '5': //$450.00-459.99
                switch (amountStr[2])
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
            case '6': //$460.00-469.99
                switch (amountStr[2])
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
            case '7': //$470.00-479.99
                switch (amountStr[2])
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
            case '8': //$480.00-489.99
                switch (amountStr[2])
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
            case '9': //$490.00-499.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        case '5': //$500.00-599.99
            cout << convert[5] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$500.00-509.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$510.00-519.99
                switch (amountStr[2])
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
            case '2': //$520.00-529.99
                switch (amountStr[2])
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
            case '3': //$530.00-539.99
                switch (amountStr[2])
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
            case '4': //$540.00-549.99
                switch (amountStr[2])
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
            case '5': //$550.00-559.99
                switch (amountStr[2])
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
            case '6': //$560.00-569.99
                switch (amountStr[2])
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
            case '7': //$570.00-579.99
                switch (amountStr[2])
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
            case '8': //$580.00-589.99
                switch (amountStr[2])
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
            case '9': //$590.00-599.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        case '6': //$600.00-699.99
            cout << convert[6] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$600.00-609.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$610.00-619.99
                switch (amountStr[2])
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
            case '2': //$620.00-629.99
                switch (amountStr[2])
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
            case '3': //$630.00-639.99
                switch (amountStr[2])
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
            case '4': //$640.00-649.99
                switch (amountStr[2])
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
            case '5': //$650.00-659.99
                switch (amountStr[2])
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
            case '6': //$660.00-669.99
                switch (amountStr[2])
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
            case '7': //$670.00-679.99
                switch (amountStr[2])
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
            case '8': //$680.00-689.99
                switch (amountStr[2])
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
            case '9': //$690.00-699.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        case '7': //$700.00-799.99
            cout << convert[7] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$700.00-709.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$710.00-719.99
                switch (amountStr[2])
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
            case '2': //$720.00-729.99
                switch (amountStr[2])
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
            case '3': //$730.00-739.99
                switch (amountStr[2])
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
            case '4': //$740.00-749.99
                switch (amountStr[2])
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
            case '5': //$750.00-759.99
                switch (amountStr[2])
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
            case '6': //$760.00-769.99
                switch (amountStr[2])
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
            case '7': //$770.00-779.99
                switch (amountStr[2])
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
            case '8': //$780.00-789.99
                switch (amountStr[2])
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
            case '9': //$790.00-799.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        case '8': //$800.00-899.99
            cout << convert[8] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$800.00-809.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$810.00-819.99
                switch (amountStr[2])
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
            case '2': //$820.00-829.99
                switch (amountStr[2])
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
            case '3': //$830.00-839.99
                switch (amountStr[2])
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
            case '4': //$840.00-849.99
                switch (amountStr[2])
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
            case '5': //$850.00-859.99
                switch (amountStr[2])
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
            case '6': //$860.00-869.99
                switch (amountStr[2])
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
            case '7': //$870.00-879.99
                switch (amountStr[2])
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
            case '8': //$880.00-889.99
                switch (amountStr[2])
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
            case '9': //$890.00-899.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        case '9': //$900-999.99
            cout << convert[9] << " " << convert[28] << " ";
            switch (amountStr[1])
            {
            case '0': //$900.00-909.99
                switch (amountStr[2])
                {
                case '0':
                    cout << "dollars";
                    break;
                case '1':
                    cout << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[9] << " dollars";
                    break;
                }
                break;
            case '1': //$910.00-919.99
                switch (amountStr[2])
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
            case '2': //$920.00-929.99
                switch (amountStr[2])
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
            case '3': //$930.00-939.99
                switch (amountStr[2])
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
            case '4': //$940.00-949.99
                switch (amountStr[2])
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
            case '5': //$950.00-959.99
                switch (amountStr[2])
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
            case '6': //$960.00-969.99
                switch (amountStr[2])
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
            case '7': //$970.00-979.99
                switch (amountStr[2])
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
            case '8': //$980.00-989.99
                switch (amountStr[2])
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
            case '9': //$990.00-999.99
                switch (amountStr[2])
                {
                case '0':
                    cout << convert[27] << " dollars";
                    break;
                case '1':
                    cout << convert[27] << " " << convert[1] << " dollars";
                    break;
                case '2':
                    cout << convert[27] << " " << convert[2] << " dollars";
                    break;
                case '3':
                    cout << convert[27] << " " << convert[3] << " dollars";
                    break;
                case '4':
                    cout << convert[27] << " " << convert[4] << " dollars";
                    break;
                case '5':
                    cout << convert[27] << " " << convert[5] << " dollars";
                    break;
                case '6':
                    cout << convert[27] << " " << convert[6] << " dollars";
                    break;
                case '7':
                    cout << convert[27] << " " << convert[7] << " dollars";
                    break;
                case '8':
                    cout << convert[27] << " " << convert[8] << " dollars";
                    break;
                case '9':
                    cout << convert[27] << " " << convert[9] << " dollars";
                    break;
                }
                break;
            }
            break;
        }
        if (amountStr[4] != '0' && amountStr[5] != '0')
        {
            cout << " and " << amountStr[4]
                << amountStr[5] << " cents" << endl;
        }
        else if (amountStr[4] != '0')
        {
            cout << " and " << amountStr[4]
                << "0 cents" << endl;
        }
        else if (amountStr[5] != '0')
        {
            cout << " and " << amountStr[5]
                << " cents" << endl;
        }
        break;
    }
}
