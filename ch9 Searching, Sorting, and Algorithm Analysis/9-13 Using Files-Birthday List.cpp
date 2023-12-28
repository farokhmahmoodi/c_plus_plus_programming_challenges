/*Write a program that produces a list of stored names and birthdays in date order. It should use a 10-element array of 
structures or class objects that each holds two string variables, name and birthday. The program should fill the array elements 
by reading in the data from the birthdays.dat file located in the Chapter 9 programs folder on the book’s companion website. 
The file contains 20 lines with a person’s name on one line, followed by his or her birthday on the next line in the form mm/dd. 
Once the data has been read in and stored, the program should sort the elements in ascending order of date and display the 
birthday list. Make the program modular with main calling different functions to read in the file data, perform the sort, swap 
two elements, and display the list.*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include "BirthdayObject.h"

const int SIZE = 10;

void readInData(BirthdayObject[], int, ifstream&);
void selectionSort(BirthdayObject[], int);
void swap(BirthdayObject&, BirthdayObject&);
void displayBirthdayList(BirthdayObject[], int);

int main()
{
	BirthdayObject a[SIZE];
	ifstream inFile("C:\\Users\\FM\\source\\repos\\start c++ ch9\\9-13\\9-13\\birthdays.dat");

	readInData(a, SIZE, inFile);
	selectionSort(a, SIZE);
	displayBirthdayList(a, SIZE);

	return 0;
}

void readInData(BirthdayObject a[], int size, ifstream& in)
{
	string input;
	if (in)
	{
		for (int i = 0; i < SIZE; i++)
		{
			getline(in, input);
			a[i].setName(input);
			getline(in, input);
			a[i].setBirthday(input);
		}
		cout << "Data successfully read into array from file." << endl;
	}
	else
		cout << "Error opening file." << endl;
}

void selectionSort(BirthdayObject a[], int size)
{
	int minIndex;
	string minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = a[start].getBirthday();
		for (int index = start + 1; index < size; index++)
		{
			if (a[index].getBirthday() < minValue)
			{
				minValue = a[index].getBirthday();
				minIndex = index;
			}
		}
		swap(a[minIndex], a[start]);
	}
}

void swap(BirthdayObject& a, BirthdayObject& b)
{
	BirthdayObject temp = a;
	a = b;
	b = temp;
}

void displayBirthdayList(BirthdayObject a[], int size)
{
	cout << endl << "Here is the Birthday List." << endl;
	for (int i = 0; i < size; i++)
		cout << a[i].getName() << setw(15) << a[i].getBirthday() << endl;
}
