/*Modify Program 12-16 by adding a function

string dollarFormat(double amount)

that takes a dollar amount in numeric form and returns a string formatted in currency notation, with a $ 
sign and commas inserted at the appropriate locations. Test your function using suitable inputs.*/
    
#include <iostream>
#include <string>
using namespace std;

string dollarFormat(string);  // Prototype

int main(void)
{
    string input;    // User input

    // Get the dollar amount from the user
    cout << "Enter a dollar amount in the form nnnnn.nn : ";
    cin >> input;

    // Display the formatted dollar amount
    cout << "Formatted amount:   " << dollarFormat(input) << endl;
    return 0;
}

//******************************************************
// Returns a $-formatted version of the input string.  *
//******************************************************
string dollarFormat(string original)
{
    string formatted = original;
    int dp = formatted.find('.');  // Position of decimal point
    int pos = dp;                  // Search for comma position
    while (pos > 3)
    {
        pos = pos - 3;
        formatted.insert(pos, ",");
    }
    formatted.insert(0, "$");
    return formatted;
}
