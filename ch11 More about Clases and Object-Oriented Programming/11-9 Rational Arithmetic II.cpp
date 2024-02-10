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
        int high,divisor = 2;

        if (numerator > denominator)
        {
            high = numerator;
        }
        else
        {
            high = denominator;
        }
        while (divisor <= high) //finding common divisor
        {
            if (numerator % divisor == 0 && denominator % divisor == 0)
            {
                numerator /= divisor;
                denominator /= divisor;
                divisor = 2;
            }
            else
            {
                divisor++;
            }
        }
        if (denominator < 0)
        {
            denominator *= -1;
            numerator *= -1;
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
        out << a.numerator << "/" << a.denominator;
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
        result.reduce();

        return result;
    }
    friend Rational operator-(Rational a, Rational b)
    {
        Rational result;

        if (a.denominator != b.denominator)
        {
            result.denominator = a.denominator * b.denominator;
            result.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
        }
        else
        {
            result.denominator = a.denominator;
            result.numerator = a.numerator - b.numerator;
        }
        result.reduce();

        return result;
    }
    friend Rational operator*(Rational a, Rational b)
    {
        Rational result;

        result.denominator = a.denominator * b.denominator;
        result.numerator = a.numerator * b.numerator;
        result.reduce();

        return result;
    }
    friend Rational operator/(Rational a, Rational b)
    {
        Rational result;

        result.denominator = a.denominator * b.numerator;
        result.numerator = a.numerator * b.denominator;
        result.reduce();

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
        cout << "Reduced form rational number of " << a << "/"
            << b << " is " << test << endl;
        cout << "Enter another numerator and denominator for a quotient"
            << " of two integers and the program will transform it to reduced rational "
            << " form of the quotient:";
        cin >> a >> b;
        Rational test2(a, b);
        cout << "Reduced form rational number of " << a << "/"
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
                cout << test << " + " << test2 << " = " <<
                    test + test2 << endl;
                break;
            case 2:
                cout << test << " - " << test2 << " = " <<
                    test - test2 << endl;
                break;
            case 3:
                cout << test << " * " << test2 << " = " <<
                    test * test2 << endl;
                break;
            case 4:
                cout << test << " / " << test2 << " = " <<
                    test / test2 << endl;
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