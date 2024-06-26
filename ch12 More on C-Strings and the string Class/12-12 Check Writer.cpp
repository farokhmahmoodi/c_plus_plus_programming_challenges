/*Write a program that displays a simulated paycheck. The program should ask the user to enter the date,
the payee�s name, and the amount of the check. It should then display a simulated check with the dollar
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
string amountWrittenOut(double);

int main()
{
    string date, payeeName;
    double amount;
    char choice;

    do
    {
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
        do
        {
            cout << "Would you like to enter create another check? (Y for yes/N for no):";
            cin >> choice;
            if (toupper(choice) != 'Y' && toupper(choice) != 'N')
                cout << "Invalid input for choice." << endl;
        } while (toupper(choice) != 'Y' && toupper(choice) != 'N');
        cin.ignore();
    } while (toupper(choice) != 'N');

    return 0;
}

void checkWriter(string name, string date, double amount)
{
    cout << setw(30) << "Date: " << date << endl;
    cout << "Pay to the Order of: " << name << setw(10) << fixed << showpoint
        << setprecision(2) << "$" << amount << endl;
    cout << amountWrittenOut(amount) << endl;
}

string amountWrittenOut(double amount)
{
    string str = "";
    int amt = static_cast<int>(amount), thousands = amt / 1000, 
        hundreds = (amt % 1000) / 100,tens = (amt % 100) / 10, 
        ones = amt % 10, decimal = (amount - amt) * 100;

    if (thousands != 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i == thousands)
            {
                str += convert[i], str += " ", str += convert[29];
                break;
            }
        }
    }
    if (hundreds != 0)
    {
        for (int i = 1; i <= 9; i++)
        {
            if (i == hundreds)
            {
                if (thousands > 0)
                    str += " ";
                str += convert[i]; 
                str += " "; 
                str += convert[28];
                break;
            }
        }
    }
    switch (tens)
    {
    case 0:
        for (int i = 1; i <= 9; i++)
        {
            if (i == ones)
            {
                if(thousands > 0 || hundreds > 0)
                    str += " ";
                str += convert[i];
                break;
            }
        }
        if (thousands == 0 && hundreds == 0 && ones == 0)
            str += convert[0];
        break;
    case 1:
        for (int i = 0; i <= 9; i++)
        {
            if (i == ones)
            {
                if (thousands > 0 || hundreds > 0)
                    str += " ";
                str += convert[10 + i];
                break;
            }
        }
        break;
    case 2:
        if (thousands > 0 || hundreds > 0)
            str += " ";
        str += convert[20];
        if (ones > 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    str += " ";
                    str += convert[i];
                    break;
                }
            }
        }
        break;
    case 3:
        if (thousands > 0 || hundreds > 0)
            str += " ";
        str += convert[21];
        if (ones > 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    str += " ";
                    str += convert[i];
                    break;
                }
            }
        }
        break;
    case 4:
        if (thousands > 0 || hundreds > 0)
            str += " ";
        str += convert[22];
        if (ones > 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    str += " ";
                    str += convert[i];
                    break;
                }
            }
        }
        break;
    case 5:
        if (thousands > 0 || hundreds > 0)
            str += " ";
        str += convert[23];
        if (ones > 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    str += " ";
                    str += convert[i];
                    break;
                }
            }
        }
        break;
    case 6:
        if (thousands > 0 || hundreds > 0)
            str += " ";
        str += convert[24];
        if (ones > 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    str += " ";
                    str += convert[i];
                    break;
                }
            }
        }
        break;
    case 7:
        if (thousands > 0 || hundreds > 0)
            str += " ";
        str += convert[25];
        if (ones > 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    str += " ";
                    str += convert[i];
                    break;
                }
            }
        }
        break;
    case 8:
        if (thousands > 0 || hundreds > 0)
            str += " ";
        str += convert[26];
        if (ones > 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    str += " ";
                    str += convert[i];
                    break;
                }
            }
        }
        break;
    case 9:
        if (thousands > 0 || hundreds > 0)
            str += " ";
        str += convert[27];
        if (ones > 0)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i == ones)
                {
                    str += " ";
                    str += convert[i];
                    break;
                }
            }
        }
        break;
    }
    if (decimal != 0)
    {
        str += " and ";
        str += to_string(decimal);
        str += " cents";
    }

    return str;
}