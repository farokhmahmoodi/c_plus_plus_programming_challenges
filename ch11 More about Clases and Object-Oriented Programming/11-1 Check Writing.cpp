/*Design a class Numbers that can be used to translate whole dollar amounts in the range 0 through 9999 into an English
description of the number. For example, the number 713 would be translated into the string seven hundred thirteen, and
8203 would be translated into eight thousand two hundred three.

The class should have a single integer member variable

int number;

and a collection of static string members that specify how to translate key dollar amounts into the desired format.
For example, you might use static strings such as

string lessThan20[ ] =
    {"zero", "one", …, "eighteen", "nineteen" };
string hundred = "hundred";
string thousand = "thousand";

The class should have a constructor that accepts a non-negative integer and uses it to initialize the Numbers object.
It should have a member function print() that prints the English description of the Numbers object. Demonstrate the class
by writing a main program that asks the user to enter a number in the proper range and then prints out its English
description.*/

#include "Numbers.h"

int main()
{
    int choice, num;

    cout << "This program converts a number between 0 and 9999 to an english description." << endl;
    do {
        do {
            cout << "Enter a number between 0 and 9999: ";
            cin >> num;
            if (num < 0 || num > 9999)
                cout << "Input error. Number must be between 0 and 9999." << endl;
        } while (num < 0 || num > 9999);
        Numbers a(num);
        cout << a.print() << endl;
        do
        {
            cout << "Would you like to enter another number? (1 for yes/2 for no)?";
            cin >> choice;
            if (choice != 1 && choice != 2)
                cout << "Invalid input for choice." << endl;
        } while (choice != 1 && choice != 2);
    } while (choice != 2);

    return 0;
}