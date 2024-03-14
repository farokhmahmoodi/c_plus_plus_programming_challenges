/*Write a program that uses an initially empty file to store a sorted list of integers entered by the user. The
integers are stored in binary form. Each time the program is run, it opens the file and outputs the list of
stored integers onto the screen. The program then asks the user to enter a new integer X. The program then
looks at the integer at the end of the file. If that integer is less than or equal to X, the program stores X
at the end of the file and closes the file. Otherwise, the program starts at the end of the file and works
toward the beginning, moving each value in the file that is greater than X up by one until it reaches the
position in the file where X should be stored. The program then writes X at that position and closes the file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int num;

    fstream file("13-11.dat",  ios::in | ios::binary);
    if (!file)
    {
        cout << "Error opening file.";
        return 0;
    }
    while (file.read(reinterpret_cast<char*>(&num), sizeof(num)))
    {
        cout << num << " ";
    }
    cout << endl;
    file.close();
    file.open("13-11.dat", ios::out | ios::app | ios::binary);
    while (cout << "Enter a new integer X:"
        && !(cin >> num)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for new integer X." << endl;
    }
    file.write(reinterpret_cast<char*>(&num), sizeof(num));
    file.close();

    return 0;
}