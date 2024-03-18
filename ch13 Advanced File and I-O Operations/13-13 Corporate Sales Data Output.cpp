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

const int LENGTH = 4;

struct Company {
    static string name[LENGTH];
    static int quarter[LENGTH];
    double sales = 0.0;
};

string Company::name[LENGTH] = {"East", "West", "North", "South"};
int Company::quarter[LENGTH] = { 1,2,3,4 };

int main()
{
    Company a;
    fstream file("13-12.dat", ios::out | ios::binary);

    if (!file)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    for (int i = 0; i < LENGTH; i++)
    {
        for (int x = 0; x < LENGTH; x++)
        {
            do
            {
                while (cout << "Enter sales for quarter " <<
                    x + 1 << " for " << a.name[i] << " Division:"
                    && !(cin >> a.sales)) {
                    cin.clear(); //clear bad input flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                    cout << "Invalid input for sales." << endl;
                }
            } while (a.sales < 0);
        }
    }
    file.write(reinterpret_cast<char*>(&a), sizeof(a));
    file.close();

    return 0;
}
