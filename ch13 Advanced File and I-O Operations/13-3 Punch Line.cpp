/*Write a program that reads and prints a joke and its punch line from two different files.
The first file contains a joke but not its punch line. The second file has the punch line as its last line,
preceded by “garbage.” The main function of your program should open the two files and then call two functions,
passing each one the file it needs. The first function should read and display each line in the file it is
passed (the joke file). The second function should display only the last line of the file it is passed (the
punch line file). It should find this line by seeking to the end of the file and then backing up to the
beginning of the last line. Data to test your program can be found in the joke.dat and punchline.dat files.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readJoke(fstream&, string&);
void readPunchline(fstream&, string&, char&);

int main()
{
    fstream joke("joke.dat", ios::in | ios::out | ios::app),
        punchline("punchline.dat", ios::in | ios::out | ios::app);
    string input;
    char ch;

    if (!joke || !punchline)
    {
        cout << "Error opening files." << endl;
        return 0;
    }
    readJoke(joke, input);
    readPunchline(punchline, input, ch);

    return 0;
}

void readJoke(fstream& joke, string& input)
{
    while (getline(joke, input))
    {
        cout << input << endl;
    }
}

void readPunchline(fstream& punchline, string& input, char& ch)
{
    long pos = -1;
    while (punchline.seekg(--pos, ios::end))
    {
        if (punchline.get() == '\n')
        {
            getline(punchline, input);
            cout << input << endl;
            break;
        }
    }
}
