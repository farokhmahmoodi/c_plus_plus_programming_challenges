/*A friend of yours who is an educator is conducting research into the effectiveness of teaching the spelling rule
“I before e except after c” to students. She wishes to analyze writing samples from two groups of students, only one
of which was taught the rule. Write a program that will take a file containing a writing sample and print a list of
all words in the file that contain at least one of the strings “ie” or “ei”.*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

void printWordsWithIEandEI(ifstream&);

int main()
{
    ifstream infile;
    string filename;
    char choice;

    do
    {
        cout << "This program takes in a file containing a writing sample" << endl
            << "and print a list of all words in the file that contain at least one of the strings ie or ei"
            << endl;
        cout << "Enter name of file:";
        cin >> filename;
        infile.open(filename);
        if (infile)
        {
            printWordsWithIEandEI(infile);
            infile.close();
        }
        else
            cout << "Error opening file." << endl;     
        do
        {           
            cout << "Would you like to enter another file?(Y for yes/N for no)";
            cin >> choice;
            if (toupper(choice) != 'Y' && toupper(choice) != 'N')
                cout << "Invalid input for choice." << endl;
        } while (toupper(choice) != 'Y' && toupper(choice) != 'N');
        cin.ignore();
    } while (toupper(choice) != 'N');

    return 0;
}

void printWordsWithIEandEI(ifstream& in)
{
    istringstream istr;
    ostringstream ostr;
    string word;

    while (in >> word)
    {
        if (word.find("ie", 0) != -1 || word.find("ei", 0) != -1 ||
            word.find("IE", 0) != -1 || word.find("EI", 0) != -1)
        {
            istr >> word;
            ostr << word << " ";
        }
    }
    cout << ostr.str() << endl;
}