/*Modify the binarySearch function presented in this chapter so it searches an array of strings instead of an array of ints. Test the function with a driver program. 
Use Program 9-9 as a skeleton to complete. (The array must be sorted before the binary search will work.)*/

#include <iostream>
#include <string>
using namespace std;

void selectionSort(string[], int);
void swap(string&, string&);
int binarySearch(const string[], int, string);

int main()
{
	const int SIZE = 20;

	string name[SIZE] =
	{ "Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
	 "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	 "Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
	 "Moretti, Bella", "Wu, Eric", "Patel, Renee", "Harrison, Rose",
	 "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth" };
	string s;
	int results;

	cout << "The unsorted names:\n";
	for (string element : name)
		cout << element << endl;
	cout << endl;
	selectionSort(name, SIZE);
	cout << "The sorted names:\n";
	for (string element : name)
		cout << element << endl;
	cout << endl;
	cout << endl << "Enter name you wish to search for: ";
	getline(cin, s);
	results = binarySearch(name, SIZE, s);
	if (results == -1)
		cout << "That name is not in the array.\n";
	else
		cout << "Name " << s << " was found in element " << results << " of the array.\n";
	return 0;
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

int binarySearch(const string a[], int size, string value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (a[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (a[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}
