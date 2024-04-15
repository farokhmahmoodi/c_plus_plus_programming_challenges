/*Write a function

T accum(vector <T>  v)

that forms and returns the “sum” of all items in the vector v passed to it. For example, if T is a numeric type
such as int or double, the numeric sum will be returned, and if T represents the STL string type, then the
result of concatenation is returned.

Note
For any type T, the expression T() yields the value or object created by the default constructor. For example,
T() yields the empty string object if T is the string class. If T represents a numeric type such as int, then
T() yields 0. Use this fact to initialize your “accumulator.”

Test your function with a driver program that asks the user to enter three integers, uses accum to
compute the sum, and prints out the sum. The program than asks the user to enter three strings, uses
accum to concatenate the strings, and prints the result.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<class T>
T accum(vector <T> v)
{
    T sum = T();
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    return sum;
}

int main()
{
    vector <int> v1 (3);
    vector <string> v2 (3);

    for (int i = 0; i < v1.size(); i++)
    {
        while (cout << "Enter an integer:" &&
            !(cin >> v1[i])) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer." << endl;
        }
    }
    cout << "The sum of the integers is " << accum(v1) << endl;
    cin.ignore();
    for (int i = 0; i < v2.size(); i++)
    {
        cout << "Enter a string:";
        getline(cin, v2[i]);
    }
    cout << "The sum of the strings is " << accum(v2) << endl;

    return 0;
}
