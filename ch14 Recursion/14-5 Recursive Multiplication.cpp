/*Write a recursive function that accepts two arguments into the parameters x and y. The function should return the value of 
x times y. Remember, multiplication can be performed as repeated addition:

7 * 4 = 4 + 4 + 4 + 4 + 4 + 4 + 4*/

#include <iostream>
using namespace std;

int recursiveMultiply(int, int);

int main()
{
    int x, y;
    
    while (cout << "Enter an integer x to multiply:"
        && !(cin >> x)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer x." << endl;
    }
    while (cout << "Enter an integer y to multiply:"
        && !(cin >> y)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer y." << endl;
    }
    cout << "The product of integers x and y is " << recursiveMultiply(x, y) << endl;

    return 0;
}

int recursiveMultiply(int x, int y)
{
    int product;

    if (x == 0 || y == 0)
    {
        return 0;
    }
    else if (abs(y) > 0)
    {
        product = x + recursiveMultiply(x, --y);
    }
    
    return product;
}
