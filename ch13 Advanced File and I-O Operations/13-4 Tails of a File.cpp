/*Write a program that asks the user for the name of a text file. The program should display the
last 10 lines of the file on the screen (the “tail” of the file). If the file has less than 10 lines,
the entire file is displayed, with a message that the entire file has been displayed. The program should do
this by seeking to the end of the file and then backing up to the tenth line from the end.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    string filename, input;
    char ch;
    long position = 0;
    int lines = 0;
    bool entire = false;

    cout << "Enter file name:";
    getline(cin, filename);
    file.open(filename, ios::in);
    if (!file)
    {
        cout << "File failed to open." << endl;
        return 0;
    }
    file.seekg(0L, ios::end);
    while (file.seekg(--position, ios::end))
    {
        ch = file.get();
        if (ch == '\n' && file.peek() != EOF)
        {
            lines++;
        }
        if (file.tellg() == 0)
        {
            entire = true;
            break;
        }
        if (lines == 10)
        {
            break;
        }
        file.clear();
    }
    while (getline(file, input))
    {
        cout << input << endl;
    }
    if (entire)
        cout << "Entire file has been displayed." << endl;

    return 0;
}