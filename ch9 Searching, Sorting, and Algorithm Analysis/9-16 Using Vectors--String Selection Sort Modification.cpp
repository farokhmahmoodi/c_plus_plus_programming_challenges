#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void readInData(vector<string> &, ifstream&);
void selectionSort(vector<string> &);
void swap(string&, string&);

int main()
{
	vector<string> names;
	ifstream in("C:\\Users\\FM\\source\\repos\\start c++ ch9\\9-16 Using Vectors--String Selection Sort Modification\\9-16 Using Vectors--String Selection Sort Modification\\names.dat");

	if (in)
	{
		readInData(names, in);
		cout << "The unsorted names:\n";
		for (string element : names)
			cout << element << endl;
		cout << endl;
		selectionSort(names);
		cout << "The sorted names:\n";
		for (string element : names)
			cout << element << endl;
	}
	else
		cout << "Error opening file." << endl;

	return 0;
}

void readInData(vector<string> &a, ifstream& in)
{
	string n;
	while (getline(in, n))
		a.push_back(n);
}

void selectionSort(vector<string> &a)
{
	int minIndex;
	string minValue;

	for (int start = 0; start < (a.size() - 1); start++)
	{
		minIndex = start;
		minValue = a[start];
		for (int index = start + 1; index < a.size(); index++)
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