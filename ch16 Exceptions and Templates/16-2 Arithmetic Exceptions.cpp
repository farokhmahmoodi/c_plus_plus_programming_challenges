/*Write a function that accepts an integer parameter and returns its integer square root. The function should 
throw an exception if it is passed an integer that is not a perfect square. Demonstrate the function with a 
suitable driver program.*/

#include <iostream>
using namespace std;

int square(int a)
{
    if (sqrt(a) != static_cast<int>(sqrt(a)))
    {
        throw int(a);
    }
    else
    {
        return a * a;
    }
}

int main()
{
    int num;

    while (cout << "Enter an integer:" &&
        !(cin >> num)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer." << endl;
    }
    try
    {
        cout << "The integer " <<
            num << "'s square root is " << square(num) << endl;
    }
    catch(int a)
    {
        cout << "Integer " << a
            << " entered is not a perfect square.\n";
    }

    return 0;
}
