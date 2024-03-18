/*Write a program that uses a structure to store the following information on a company division:

Division name (such as East, West, North, or South)

Quarter (1, 2, 3, or 4)

Quarterly sales

The user should be asked for the four quarters’ sales figures for the East, West, North, and South divisions. The information
for each quarter for each division should be written to a file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Division {
    string name;
    int quarter = 0;
    double sales = 0.0;
};

int main()
{
    Division a;
    fstream file("13-12.dat", ios::out | ios::binary);

    if (!file)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    for (int i = 0; i < 4; i++)
    {
        do
        {
            while (cout << "Enter sales for quarter " <<
                i + 1 << " for East division:"
                && !(cin >> a.sales)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for sales." << endl;
            }
        } while (a.sales < 0);
        a.quarter = i + 1;
        a.name = "East";
        file.write(reinterpret_cast<char*>(&a), sizeof(a));
    }
    for (int i = 0; i < 4; i++)
    {
        do
        {
            while (cout << "Enter sales for quarter " <<
                i + 1 << " for West division:"
                && !(cin >> a.sales)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for sales." << endl;
            }
        } while (a.sales < 0);
        a.quarter = i + 1;
        a.name = "West";
        file.write(reinterpret_cast<char*>(&a), sizeof(a));
    }
    for (int i = 0; i < 4; i++)
    {
        do
        {
            while (cout << "Enter sales for quarter " <<
                i + 1 << " for North division:"
                && !(cin >> a.sales)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for sales." << endl;
            }
        } while (a.sales < 0);
        a.quarter = i + 1;
        a.name = "East";
        file.write(reinterpret_cast<char*>(&a), sizeof(a));
    }
    for (int i = 0; i < 4; i++)
    {
        do
        {
            while (cout << "Enter sales for quarter " <<
                i + 1 << " for South division:"
                && !(cin >> a.sales)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for sales." << endl;
            }
        } while (a.sales < 0);
        a.quarter = i + 1;
        a.name = "East";
        file.write(reinterpret_cast<char*>(&a), sizeof(a));
    }
    file.close();

    return 0;
}
