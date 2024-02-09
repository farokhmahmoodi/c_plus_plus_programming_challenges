/*Modify the class Rational of Programming Challenge 8 to add overloaded operators +, −, *, and / to be used for addition,
subtraction, multiplication, and division. Test the class by reading and processing from the keyboard (or from a file) a
series of rational expressions such as

2 / 3 + 2 / 8
2 / 3 * – 2 / 8
2 / 3 – 2/ 8
2 / 3 / 2 / 8

To facilitate parsing of the input, you may assume that numbers and arithmetic operators are separated by whitespace.*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Rational
{
private:
    int numerator, denominator;
    void reduce()
    {
        if (abs(numerator) % denominator == 0) //numerator divided by denominator remainder = 0
        {
            numerator = numerator / denominator;
            denominator = denominator / denominator;
            if (denominator < 0)
            {
                denominator = 1;
                numerator = numerator * -1;
            }
            if (numerator < 0 && denominator < 0)
            {
                denominator = 1;
                numerator = numerator * -1;
            }
        }
        else if (abs(denominator) % abs(numerator) == 0) //denominator divided by numerator remainder = 0
        {
            denominator = denominator / numerator;
            numerator = numerator / numerator;
            if (denominator < 0)
            {
                denominator = denominator * -1;
                numerator = numerator * -1;
            }
            if (numerator < 0 && denominator < 0)
            {
                denominator = denominator * -1;
                numerator = numerator * -1;
            }
        }
        else
        {
            for (int i = 10; i >= 2; i--) //finding common divisors for numerator and denominator
            {
                while (numerator % i == 0 && denominator % i == 0)
                {
                    numerator = numerator / i;
                    denominator = denominator / i;
                }
            }
            if (denominator < 0)
            {
                denominator = denominator * -1;
                numerator = numerator * -1;
            }
            if (numerator < 0 && denominator < 0)
            {
                denominator = denominator * -1;
                numerator = numerator * -1;
            }
        }
    }
public:
    Rational()
    {
        numerator = 0,
        denominator = 0;
    }
    Rational(int n, int d)
    {
        if (d != 0)
        {
            numerator = n, denominator = d;
            reduce();
        }
        else
        {
            cout << "Denominator cannot equal zero." << endl;
            numerator = 0,
            denominator = 0;
        }
    }
    friend ostream& operator<<(ostream& out, Rational a)
    {
        out << a.numerator << " / " << a.denominator << endl;
        return out;
    }
    friend Rational operator+(Rational a, Rational b)
    {
        Rational result;
        
        if (a.denominator != b.denominator)
        {
            result.denominator = a.denominator * b.denominator;
            result.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
        }
        else
        {
            result.denominator = a.denominator;
            result.numerator = a.numerator + b.numerator;
        }

        return result;
    }
};

int main()
{
    int a, b, choice, subchoice;

    do
    {
        cout << "Enter a numerator and denominator for a quotient"
            << " of two integers and the program will transform it to reduced rational "
            << " form of the quotient:";
        cin >> a >> b;
        Rational test(a, b);
        cout << "Reduced form rational number of " << a << " / "
            << b << " is " << test << endl;
        cout << "Enter another numerator and denominator for a quotient"
            << " of two integers and the program will transform it to reduced rational "
            << " form of the quotient:";
        cin >> a >> b;
        Rational test2(a, b);
        cout << "Reduced form rational number of " << a << " / "
            << b << " is " << test2 << endl;
        do
        {
            do
            {
                cout << "Select an option below to perform operations on rational numbers "
                    << test << " and " << test2 << ":" << endl;
                cout << "1. Addition" << endl;
                cout << "2. Subtraction" << endl;
                cout << "3. Multiplication" << endl;
                cout << "4. Division" << endl;
                cout << "5. Quit" << endl;
                cin >> subchoice;
                if (subchoice < 1 || subchoice > 5)
                    cout << "Invalid input for choice." << endl;
            } while (subchoice < 1 || subchoice > 5);
            switch (subchoice)
            {
            case 1:
                cout << test + test2 << endl;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            }
            if (subchoice == 5)
                break;
            do
            {
                cout << "Would you like to perform another operation on rational numbers "
                    << test << " and " << test2 << "? (1 for yes/2 for no):";
                cin >> subchoice;
                if (subchoice < 1 || subchoice > 2)
                    cout << "Invalid input for choice." << endl;
            } while (subchoice < 1 || subchoice > 2);
        } while (subchoice != 2);
        do
        {
            cout << "Would you like to run this program again? (1 for yes/2 for no)";
            cin >> choice;
            if (choice != 1 && choice != 2)
                cout << "Invalid input for choice." << endl;
        } while (choice != 1 && choice != 2);
    } while (choice != 2);

    return 0;
}
