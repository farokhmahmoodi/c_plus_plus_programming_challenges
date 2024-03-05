/*Write a program that asks the user for the name of a file and a string to search for. The program will 
search the file for all occurrences of the specified string and display all lines that contain the string. 
After all occurrences have been located, the program should report the number of times the string appeared in 
the file.*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    fstream file;
    string filename, input, search, temp;
    int count = 0;

    cout << "Enter filename:";
    getline(cin, filename);
    file.open(filename, ios::in);
    if (!file)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    cout << "Enter a string to search for in the file:";
    getline(cin, search);
    while (getline(file, input))
    {
        
    }
    cout << "The string occured " << count << " times in the file." << endl;

    return 0;
}
