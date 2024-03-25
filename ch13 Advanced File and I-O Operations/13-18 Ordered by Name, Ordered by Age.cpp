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
using namespace std;

void selectionSortByName(string*, int*, int);
void selectionSortByAge(string*, int*, int);
void nameSwap(string&, string&);
void ageSwap(int&, int&);

int main()
{
    fstream infile("13-18.txt", ios::in),
        outfile("out.txt", ios::out);
    string* names = nullptr, in; 
    int* ages = nullptr, lineCount = 0;

    if (!infile || !outfile)
    {
        cout << "File open error.\n";
        return 0;
    }
    while (getline(infile,in))
    {
        lineCount++;
    }
    names = new string[lineCount];
    ages = new int[lineCount];
    infile.close();
    infile.open("13-18.txt", ios::in);
    int index = 0;
    while (!infile.eof() && index < lineCount)
    {
        infile >> names[index] >> ages[index];
        index++;
    }
    infile.close();
    selectionSortByName(names, ages, lineCount);
    cout << "Data sorted by names in alphabetical order below.\n";
    for (int i = 0; i < lineCount; i++)
    {
        cout << names[i] << " " << ages[i] << endl;
        outfile << names[i] << " " << ages[i] << endl;
    }
    outfile << endl;
    selectionSortByAge(names, ages, lineCount);
    cout << "Data sorted by ages in ascending order below.\n";
    for (int i = 0; i < lineCount; i++)
    {
        cout << names[i] << " " << ages[i] << endl;
        outfile << names[i] << " " << ages[i] << endl;
    }
    outfile.close();

    return 0;
}

void selectionSortByName(string* names, int* ages, int size)
{
    int minIndex;
    string minNameValue;
    int minAgeValue;
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minNameValue = names[start];
        minAgeValue = ages[start];
        for (int index = start + 1; index < size; index++)
        {
            if (names[index] < minNameValue)
            {
                minNameValue = names[index];
                minAgeValue = ages[index];
                minIndex = index;
            }
        }
        nameSwap(names[minIndex], names[start]);
        ageSwap(ages[minIndex], ages[start]);
    }
}

void selectionSortByAge(string* names, int* ages, int size)
{
    int minIndex;
    string minNameValue;
    int minAgeValue;
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minNameValue = names[start];
        minAgeValue = ages[start];
        for (int index = start + 1; index < size; index++)
        {
            if (ages[index] < minAgeValue)
            {
                minNameValue = names[index];
                minAgeValue = ages[index];
                minIndex = index;
            }
        }
        nameSwap(names[minIndex], names[start]);
        ageSwap(ages[minIndex], ages[start]);
    }
}

void ageSwap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void nameSwap(string& a, string& b)
{
    string temp = a;
    a = b;
    b = temp;
}
