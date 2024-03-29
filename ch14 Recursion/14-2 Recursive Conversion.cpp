/*Convert the following function to one that uses recursion.


void sign(int n)
{
   while (n > 0)
   {
      cout << "No Parking
";
      n−−;
   }
}
Demonstrate the function with a driver program.*/

#include <iostream>
using namespace std;

void sign(int);

int main()
{
    int n;

    while (cout << "Enter an integer:"
        && !(cin >> n)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer." << endl;
    }
    sign(n);

    return 0;
}

void sign(int n)
{
    cout << "No Parking";
    while (n > 0)
    {
        sign(--n);
    }
}

//void sign(int n)
//{
//    while (n > 0)
//    {
//        cout << "No Parking";
//        n--;
//    }
//}
