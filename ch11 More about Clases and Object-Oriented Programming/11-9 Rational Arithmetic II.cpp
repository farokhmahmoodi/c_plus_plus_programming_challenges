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
            for (int i = 2; i <= 10; i++) //finding common divisors for numerator and denominator
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
