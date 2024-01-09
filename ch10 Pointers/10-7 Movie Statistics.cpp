/*Write a program that can be used to gather statistical data about the number of movies college students see in a month. 
The program should ask the user how many students were surveyed and dynamically allocate an array of that size. 
The program should then allow the user to enter the number of movies each student has seen. The program should then 
calculate the average, median, and mode of the values entered.*/

#include <iostream>
#include <iomanip>
using namespace std;

void getData(int*, int);
void selectionSort(int*, int);
void swap(int&, int&);
void displayArray(const int*, int);
double findMedian(const int*, int);
double calcAverage(const int*, int);
int findMode(int*, int);

int main()
{
	int* a = nullptr, size;
	
	do
	{
		cout << "How many students were surveyed?";
		cin >> size;
		if (size <= 0)
			cout << "Error. Students surveyed must be greater than 0." << endl;
	} while (size <= 0);
	a = new int[size];
	getData(a, size);
	selectionSort(a, size);
	cout << "Mode:" << findMode(a, size) << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Average:" << calcAverage(a, size) << endl;
	cout << "Median:" << findMedian(a, size) << endl;

	return 0;
}

void getData(int* a, int size)
{
	cout << "Enter how many movies each student has seen per month below." << endl;
	for (int i = 0; i < size; i++)
	{
		do
		{
			cout << "Student " << (i + 1) << ":";
			cin >> *(a + i);
			if (*(a + i) < 0)
				cout << "Input error. number of movies seen cannot be negative." << endl;
		} while (*(a + i) < 0); 
	}
}

void selectionSort(int* a, int size)
{
	int minIndex;
	int minValue;
	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = *(a + start);
		for (int index = start + 1; index < size; index++)
		{
			if (*(a + index) < minValue)
			{
				minValue = *(a + index);
				minIndex = index;
			}
		}
		swap(*(a + minIndex), *(a + start));
	}
	cout << "Sorted array in ascending order below." << endl;
	displayArray(a, size);
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void displayArray(const int* a, int size)
{
	for (int i = 0; i < size; i++)
		cout << *(a + i) << " ";
	cout << endl;
}

double findMedian(const int* a, int size)
{
	int middleIndex = (size - 1) / 2;
	double median;
	if (size % 2 == 0) //even sized array
		median = static_cast<double>(*(a + middleIndex) + *(a + middleIndex + 1)) / 2;
	else //odd sized array
		median = static_cast<double>(*(a + middleIndex));
	return median;
}

double calcAverage(const int* a, int size)
{
	double avg;
	int total = 0;

	for (int i = 0; i < size; i++)
		total += *(a + i);
	avg = static_cast<double>(total) / size;

	return avg;
}

int findMode(int* a, int size)
{
	int count, max, mode;
	count = max = mode = 0;

	for (int i = 0; i < size; i++)
	{
		count++;
		if (*(a + i) < *(a + (i + 1)))
		{
			if (count > max)
			{
				max = count;
				mode = *(a + i);
			}
			count = 0;
		}
	}

	return mode;
}
