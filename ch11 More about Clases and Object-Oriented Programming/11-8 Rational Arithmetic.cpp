/*A rational number is a quotient of two integers. For example, 12/5, 12/–4, –3/4, and 4/6 are all rational numbers.
A rational number is said to be in reduced form if its denominator is positive and its numerator and denominator have
no common divisor other than 1. For example, the reduced forms of the rational numbers given above are 12/5, –3/1, –3/4,
and 2/3.

Write a class called Rational with a constructor Rational(int, int) that takes two integers, a numerator and a denominator,
and stores those two values in reduced form in corresponding private members. The class should have a private member
function void reduce() that is used to accomplish the transformation to reduced form. The class should have an overloaded
insertion operator << that will be used for output of objects of the class.*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Rational
{
private:
    int numerator, denominator;
    void reduce()
    {
        int high, divisor = 2;

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
        out << a.numerator << "/" << a.denominator << "." << endl;
        return out;
    }
};

int main()
{
    int a, b, choice;

    do
    {
        cout << "Enter a numerator and denominator for a quotient"
            << " of two integers and the program will transform it to reduced rational "
            << " form of the quotient:";
        cin >> a >> b;
        Rational test(a, b);
        cout << "Reduced form rational number of " << a << "/"
            << b << " is " << test << endl;
        do
        {
            cout << "Would you like to run this program again? (1 for yes/ 2 for no)";
            cin >> choice;
            if (choice != 1 && choice != 2)
                cout << "Invalid input for choice." << endl;
        } while (choice != 1 && choice != 2);
    } while (choice != 2);

    return 0;
}