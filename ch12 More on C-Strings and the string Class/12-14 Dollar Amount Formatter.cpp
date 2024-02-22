/*Modify Program 12-16 by adding a function

string dollarFormat(double amount)

that takes a dollar amount in numeric form and returns a string formatted in currency notation, with a $
sign and commas inserted at the appropriate locations. Test your function using suitable inputs.*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string dollarFormat(double);

int main(void)
{
    double amount;

    // Get the dollar amount from the user
    cout << "Enter a dollar amount in the form nnnnn.nn : ";
    cin >> amount;

    // Display the formatted dollar amount
    cout << "Formatted amount:   " << dollarFormat(amount) << endl;
    return 0;
}

string dollarFormat(double amount)
{
    ostringstream ostr;
    string str;
    ostr << amount;
    string amt = ostr.str();
    istringstream istr(amt);
    istr >> str;
    int dp = str.find('.');  // Position of decimal point
    int pos = dp;            // Search for comma position

    while (pos > 3)
    {
        pos = pos - 3;
        str.insert(pos, ",");
    }
    str.insert(0, "$");


    return str;
}
