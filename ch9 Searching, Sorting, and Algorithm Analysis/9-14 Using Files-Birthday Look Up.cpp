#include <iostream>
#include <fstream>
#include <iomanip>
#include "BirthdayObject.h"

const int SIZE = 10;

void readInData(BirthdayObject[], int, ifstream&);
void selectionSort(BirthdayObject[], int);
void swap(BirthdayObject&, BirthdayObject&);
void displayNamesList(BirthdayObject[], int);
string getInput(BirthdayObject[], int);
bool validateInput(string, BirthdayObject[], int);
void binarySearch(BirthdayObject[], int, string);

int main()
{
	BirthdayObject a[SIZE];
	ifstream inFile("C:\\Users\\FM\\source\\repos\\start c++ ch9\\9-14 Using Files-Birthday Look Up\\9-14 Using Files-Birthday Look Up\\birthdays.dat");
	string value;
	char choice;

	if(inFile)
	{
		readInData(a, SIZE, inFile);
		selectionSort(a, SIZE);
		do
		{
			displayNamesList(a, SIZE);
			value = getInput(a, SIZE);
			if (validateInput(value, a, SIZE))
				binarySearch(a, SIZE, value);
			else
				cout << endl << "Name not found in list." << endl;
			cout << endl << "Would you like to enter another name? (Y/N)";
			cin >> choice;
			cin.ignore();
		} while (toupper(choice) == 'Y'); 		
	}
	else
		cout << "Error opening file." << endl;

	return 0;
}

void readInData(BirthdayObject a[], int size, ifstream& in)
{
	string input;
	for (int i = 0; i < SIZE; i++)
	{
		getline(in, input);
		a[i].setName(input);
		getline(in, input);
		a[i].setBirthday(input);
	}
}

void selectionSort(BirthdayObject a[], int size)
{
	int minIndex;
	string minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = a[start].getName();
		for (int index = start + 1; index < size; index++)
		{
			if (a[index].getName() < minValue)
			{
				minValue = a[index].getName();
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

void displayNamesList(BirthdayObject a[], int size)
{
	cout << endl << "List of names:" << endl;
	for (int i = 0; i < size; i++)
		cout << a[i].getName() << endl;
	cout << endl;
}

string getInput(BirthdayObject a[], int size)
{
	string in;
	cout << "Enter a name from the list to display their birthday: ";
	getline(cin, in);
	return in;
}

bool validateInput(string in, BirthdayObject a[], int size)
{
	for (int i = 0; i < size; i++)
		if (a[i].getName() == in)
			return true;
	return false;
}

void binarySearch(BirthdayObject a[], int size, string value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (a[middle].getName() == value)
		{
			found = true;
			position = middle;
		}
		else if (a[middle].getName() > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	cout << endl << value << "'s birthday is " << a[position].getBirthday() << endl;
}
