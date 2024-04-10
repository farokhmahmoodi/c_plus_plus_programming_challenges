/*A sequence of integers such as 1, 3, 5, 7, … can be represented by a function that takes a non-negative integer as 
parameter and returns the corresponding term of the sequence. For example, the sequence of odd numbers just cited can be 
represented by the function

    int odd(int k) {return 2 * k + 1;}

Write an abstract class AbstractSeq that has a pure virtual member function

    virtual int fun(int k) = 0;

as a stand-in for an actual sequence, and two member functions

    void printSeq(int k, int m);
    int sumSeq(int k, int m)

that are passed two integer parameters k and m, where k < m. The function printSeq will print all the terms fun(k) through 
fun(m) of the sequence, and likewise, the function sumSeq will return the sum of those terms. Demonstrate your AbstractSeq 
class by creating subclasses that you use to sum the terms of at least two different sequences. Determine what kind of output 
best shows off the operation of these classes, and write a program that produces that kind of output.*/

#include <iostream>
using namespace std;

class AbstractSeq {
public:
    virtual int fun(int k) = 0;
    void printSeq(int k, int m)
    {
        if (k > m)
        {
            cout << "Error. Integer k is greater than integer m.\n";
        }
        else
        {
            for (int i = k; k < m; i++, k++)
            {
                cout << fun(i) << " ";
            }
            cout << endl;
        }
    }
    int sumSeq(int k, int m)
    {
        if (k > m)
            return 0;
        else
        {
            int sum = 0;
            for (int i = k; k < m; i++, k++)
            {
                sum += fun(i);
            }
            return sum;
        }
    }
};

class OddSeq : public AbstractSeq {
public:
    virtual int fun(int k)
    {
        return 2 * k + 1;
    }
};

class EvenSeq : public AbstractSeq {
public:
    virtual int fun(int k)
    {
        return 2 * k + 2;
    }
};

int main()
{
    OddSeq a;
    EvenSeq b;
    int k, m, choice;

    do
    {
        do
        {
            while (cout << "Enter a nonnegative integer k:" &&
                !(cin >> k)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for integer." << endl;
            }
            if (k < 0)
                cout << "Integer must be nonnegative." << endl;
        } while (k < 0);
        do
        {
            while (cout << "Enter a nonnegative integer m that is greater"
                << " than integer k:" &&
                !(cin >> m)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for integer." << endl;
            }
            if (m < 0)
                cout << "Integer must be nonnegative." << endl;
        } while (m < 0);
        cout << "Sequence and sum of odd numbers from integer " <<
            k << " to " << m << " below.\n";
        a.printSeq(k, m);
        cout << "Sum:" << a.sumSeq(k, m) << endl;
        cout << "Sequence and sum of odd numbers from integer " <<
            k << " to " << m << " below.\n";
        b.printSeq(k, m);
        cout << "Sum:" << b.sumSeq(k, m) << endl;       
        while (cout << "Would you like to run program again?" 
            << "(1 for yes/ 2 for no):" &&
            !(cin >> choice)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for choice." << endl;
        }
        if (choice != 1 && choice != 2)
            cout << "Choice must be 1 or 2.\n";
    } while (choice != 2);

    return 0;
}
