/*Write a program that asks the user for the name of a file. The program should display the contents of the 
file on the screen. If the file’s contents won’t fit on a single screen, the program should display 24 lines 
of output at a time and then pause. Each time the program pauses, it should wait for the user to type a key 
before the next 24 lines are displayed.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream f;
    string filename, input;
    char next;
    int lines = 0;

    cout << "Enter name of file:";
    getline(cin, filename);
    f.open(filename, ios::in | ios::out | ios::app);
    if (!f)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    while (getline(f, input))
    {
        cout << input << endl;
        lines++;
        if (lines == 24)
        {
            system("pause");
            cin.ignore();
            lines = 0;
        }
    }
    f.close();

    return 0;
}
