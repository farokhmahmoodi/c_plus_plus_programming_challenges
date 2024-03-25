/*Write a program that processes a text file that contains names of people paired with ages. Each name–age pair is on a line 
by itself, with the name coming first and separated from the age by whitespace. The program prints out the data line by line, 
in alphabetical order of names, and then prints out the same data in ascending order of age. Here is a sample input file.

Mary  45
Anna   78
Sophia  5
Petros  12
The file may have any number of lines of such data. The output should be printed to the screen as well as to an output file.*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    fstream infile("13-18.txt", ios::in),
        outfile("out.txt", ios::out);

    if (!infile || !outfile)
    {
        cout << "File open error.\n";
        return 0;
    }
    
    infile.close();
    outfile.close();

    return 0;
}
