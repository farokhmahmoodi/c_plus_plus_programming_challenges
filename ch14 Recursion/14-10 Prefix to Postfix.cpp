/*Write a program that reads prefix expressions and converts them to postfix. Each prefix expression should be entered on a 
separate line. The program should keep reading prefix expressions and converting them to postfix until a blank line is 
entered.*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;



int main()
{
    string input;

    cout << "Enter prefix expressions to convert to postfix.\n"
        << "Press enter after each expression,\n"
        << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a prefic expression to convert to postfix: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        

        // Get next line of input
        cout << "Enter a prefix expression to convert to postfix: ";
        getline(cin, input);
    }

    return 0;
}
