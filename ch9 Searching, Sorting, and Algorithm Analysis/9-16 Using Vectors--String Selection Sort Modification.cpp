/*Modify the program you wrote for Programming Challenge 15 so it stores the names in a vector of strings, rather than in an 
array of strings. Create the vector without specifying a size and then use the push_back member function to add an element 
holding each string to the vector as it is read in from a file. Instead of assuming there are always 20 strings, read in the 
strings and add them to the vector until there is no data left in the file. The data can be found in the names.dat file.*/

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