/*Write a program that asks the user for the name of a text file. The program should display the first 10 
lines of the file on the screen. If the file has fewer than 10 lines, the entire file should be displayed 
along with a message indicating the entire file has been displayed.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream f;
    string filename, input;
    int numOfLines = 0;

    cout << "Enter name of a text file:";
    getline(cin,filename);
    f.open(filename, ios::in);
    if (!f)
    {
        cout << "Error. Failed to open file." << endl;
        return 0;
    }
    while (numOfLines < 10)
    {
        if (getline(f, input))
        {
            cout << input << endl;
        }
        else
        {
            cout << "Entire file has been displayed." << endl;
            break;
        }
        numOfLines++;
    }
    f.close();

    return 0;
}

