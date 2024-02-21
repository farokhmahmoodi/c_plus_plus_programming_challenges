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
    cout << setw(30) << "Date: " << date << endl;
    cout << "Pay to the Order of: " << name << setw(10) << fixed << showpoint
        << setprecision(2) << "$" << amount << endl;
    amountWrittenOut(amount);
}

void amountWrittenOut(double amount)
{
    int amt = static_cast<int>(amount);
    int thousands = amt / 1000, hundreds = (amt % 1000) / 100,
        tens = (amt % 100) / 10, ones = amt % 10,
        decimal = (amount - amt) * 100;

    for (int i = 1; i <= 10; i++)
    {
        if (i == thousands)
        {
            cout << convert[i] << " " << convert[29];
            for (int x = 1; x <= 9; x++)
            {
                if (x == hundreds)
                {
                    cout << convert[i] << " " << convert[28];
                    switch (tens)
                    {
                    case 1:
                        switch (ones)
                        {
                        case 0:
                            cout << convert[10];
                            break;
                        case 1:
                            cout << convert[11];
                            break;
                        case 2:
                            cout << convert[12];
                            break;
                        case 3:
                            cout << convert[13];
                            break;
                        case 4:
                            cout << convert[14];
                            break;
                        case 5:
                            cout << convert[15];
                            break;
                        case 6:
                            cout << convert[16];
                            break;
                        case 7:
                            cout << convert[17];
                            break;
                        case 8:
                            cout << convert[18];
                            break;
                        case 9:
                            cout << convert[19];
                            break;
                        }
                        break;
                    case 2:
                        cout << convert[20];
                        for (int i = 1; i <= 9; i++)
                        {
                            if (i == ones)
                            {
                                cout << " " << convert[i];
                                break;
                            }
                        }
                        break;
                    case 3:
                        cout << convert[21];
                        for (int i = 1; i <= 9; i++)
                        {
                            if (i == ones)
                            {
                                cout << " " << convert[i];
                                break;
                            }
                        }
                        break;
                    case 4:
                        cout << convert[22];
                        for (int i = 1; i <= 9; i++)
                        {
                            if (i == ones)
                            {
                                cout << " " << convert[i];
                                break;
                            }
                        }
                        break;
                    case 5:
                        cout << convert[23];
                        for (int i = 1; i <= 9; i++)
                        {
                            if (i == ones)
                            {
                                cout << " " << convert[i];
                                break;
                            }
                        }
                        break;
                    case 6:
                        cout << convert[24];
                        for (int i = 1; i <= 9; i++)
                        {
                            if (i == ones)
                            {
                                cout << " " << convert[i];
                                break;
                            }
                        }
                        break;
                    case 7:
                        cout << convert[25];
                        for (int i = 1; i <= 9; i++)
                        {
                            if (i == ones)
                            {
                                cout << " " << convert[i];
                                break;
                            }
                        }
                        break;
                    case 8:
                        cout << convert[26];
                        for (int i = 1; i <= 9; i++)
                        {
                            if (i == ones)
                            {
                                cout << " " << convert[i];
                                break;
                            }
                        }
                        break;
                    case 9:
                        cout << convert[27];
                        for (int i = 1; i <= 9; i++)
                        {
                            if (i == ones)
                            {
                                cout << " " << convert[i];
                                break;
                            }
                        }
                        break;
                    }
                    break;
                }
            }
            break;
        }
        else if (i == hundreds)
        {
            cout << convert[i] << " " << convert[28];
            break;
        }
        else if (i == tens)
        {
            switch (tens)
            {
            case 1:
                switch (ones)
                {
                case 0:
                    cout << convert[10];
                    break;
                case 1:
                    cout << convert[11];
                    break;
                case 2:
                    cout << convert[12];
                    break;
                case 3:
                    cout << convert[13];
                    break;
                case 4:
                    cout << convert[14];
                    break;
                case 5:
                    cout << convert[15];
                    break;
                case 6:
                    cout << convert[16];
                    break;
                case 7:
                    cout << convert[17];
                    break;
                case 8:
                    cout << convert[18];
                    break;
                case 9:
                    cout << convert[19];
                    break;
                }
                break;
            case 2:
                cout << convert[20];
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        cout << " " << convert[i];
                        break;
                    }
                }
                break;
            case 3:
                cout << convert[21];
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        cout << " " << convert[i];
                        break;
                    }
                }
                break;
            case 4:
                cout << convert[22];
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        cout << " " << convert[i];
                        break;
                    }
                }
                break;
            case 5:
                cout << convert[23];
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        cout << " " << convert[i];
                        break;
                    }
                }
                break;
            case 6:
                cout << convert[24];
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        cout << " " << convert[i];
                        break;
                    }
                }
                break;
            case 7:
                cout << convert[25];
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        cout << " " << convert[i];
                        break;
                    }
                }
                break;
            case 8:
                cout << convert[26];
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        cout << " " << convert[i];
                        break;
                    }
                }
                break;
            case 9:
                cout << convert[27];
                for (int i = 1; i <= 9; i++)
                {
                    if (i == ones)
                    {
                        cout << " " << convert[i];
                        break;
                    }
                }
                break;
            }
        }
        else if(i == ones)
        {
            cout << convert[i];
            break;
        }
    }
}
