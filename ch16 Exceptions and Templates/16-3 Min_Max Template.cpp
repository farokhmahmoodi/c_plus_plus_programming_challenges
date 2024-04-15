/*Write templates for the two functions min and max. min should accept two arguments and return the value 
of the argument that is the lesser of the two. max should accept two arguments and return the value 
of the argument that is the greater of the two. Design a simple driver program that demonstrates the 
templates with various data types.*/

#include <iostream>
using namespace std;

template<class Min>
Min minValue(Min a, Min b)
{
    if (a <= b)
        return a;
    else
        return b;
}

template<class Max>
Max maxValue(Max a, Max b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int main()
{
    double x = 52.34, y = 42.3;
    int a = -4, b = -12;
    string c = "Hi", d = "Bye";
    char ch = 'u', ch2 = 'o';

    cout << "Minimum value between " << x << " and "
        << y << " is " << minValue(x, y) << endl;
    cout << "Max value between " << x << " and "
        << y << " is " << maxValue(x, y) << endl;
    cout << "Minimum value between " << a << " and "
        << b << " is " << minValue(a, b) << endl;
    cout << "Max value between " << a << " and "
        << b << " is " << maxValue(a, b) << endl;
    cout << "Minimum value between " << c << " and "
        << d << " is " << minValue(c, d) << endl;
    cout << "Max value between " << c << " and "
        << d << " is " << maxValue(c, d) << endl;
    cout << "Minimum value between " << ch << " and "
        << ch2 << " is " << minValue(ch, ch2) << endl;
    cout << "Max value between " << ch << " and "
        << ch2 << " is " << maxValue(ch, ch2) << endl;

    return 0;
}
