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

const int DIVISION_LENGTH = 4;
const int SALES_LENGTH = 16;

struct Company {
    static string name[DIVISION_LENGTH];
    static int quarter[DIVISION_LENGTH];
    double sales[DIVISION_LENGTH] = { 0 };
};

string Company::name[DIVISION_LENGTH] = {"East", "West", "North", "South"};
int Company::quarter[DIVISION_LENGTH] = { 1,2,3,4 };

int main()
{
    Company a;
    fstream file("13-12.dat", ios::out | ios::binary);

    if (!file)
    {
        cout << "File failed to open." << endl;
        return 0;
    } 
    for (int i = 0, y = 0; i < DIVISION_LENGTH; i++)
    {
        for (int x = 0; x < DIVISION_LENGTH; x++, y++)
        {          
            do
            {
                while (cout << "Enter sales for quarter " <<
                    a.quarter[x] << " for " << a.name[i] << " Division:"
                    && !(cin >> a.sales[y])) {
                    cin.clear(); //clear bad input flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                    cout << "Invalid input for sales." << endl;
                }
            } while (a.sales[y] < 0);
        }
    }
    file.write(reinterpret_cast<char*>(&a), sizeof(a));
    //file.read(reinterpret_cast<char*>(&a), sizeof(a));
    //for (int i = 0, y = 0; i < DIVISION_LENGTH; i++)
    //{
    //    for (int x = 0; x < DIVISION_LENGTH; x++)
    //    {
    //        cout << "Sales for Quarter " << a.quarter[x]
    //            << " of " << a.name[i] << " Division:$"
    //            << a.sales[y] << endl;
    //        y++;
    //    }
    //}
    file.close();

    return 0;
}
