/*Modify the program you wrote for Programming Challenge 6 so it reads in the 20 strings from a file. The data can be found in 
the names.dat file located in the Chapter 9 programs folder on the book’s companion website.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 20;

void readInData(string[], int, ifstream&);
void selectionSort(string[], int);
void swap(string&, string&);

int main()
{
	string names[SIZE];
	ifstream in("C:\\Users\\FM\\source\\repos\\start c++ ch9\\9-15 Using Files--String Selection Sort Modification\\9-15 Using Files--String Selection Sort Modification\\names.dat");

	if (in)
	{
		readInData(names, SIZE, in);
		cout << "The unsorted names:\n";
		for (string element : names)
			cout << element << endl;
		cout << endl;
		selectionSort(names, SIZE);
		cout << "The sorted names:\n";
		for (string element : names)
			cout << element << endl;
	}
	else
		cout << "Error opening file." << endl;

	return 0;
}

void readInData(string names[], int size, ifstream& in)
{
	string a;
	for (int i = 0; i < size; i++)
	{
		getline(in, a);
		names[i] = a;
	}
}

void selectionSort(string a[], int size)
{
	int minIndex;
	string minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = a[start];
		for (int index = start + 1; index < size; index++)
		{
			if (a[index] < minValue)
			{
				minValue = a[index];
				minIndex = index;
			}
		}
		swap(a[minIndex], a[start]);
	}
}

void swap(string& a, string& b)
{
	string temp = a;
	a = b;
	b = temp;
}