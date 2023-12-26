#include <iostream>
#include <string>
using namespace std;

void selectionSort(string[], int);
void swap(string&, string&);

int main()
{
	const int SIZE = 20;

	string name[SIZE] =
	{ "Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
	 "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	 "Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
	 "Moretti, Bella", "Wu, Eric", "Patel, Renee", "Harrison, Rose",
	 "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth" };

	cout << "The unsorted names:\n";
	for (string element : name)
		cout << element << endl;
	selectionSort(name, SIZE);
	cout << "The sorted names:\n";
	for (string element : name)
		cout << element << endl;
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
