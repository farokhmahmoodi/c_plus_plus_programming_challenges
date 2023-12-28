/*Create a program with a function that accepts three arguments: an integer array, an integer size that indicates how many elements are in the array, and an integer n. 
The function should display all of the numbers in the array that are greater than the number n.
*/

#include <iostream>
using namespace std;

void displayGreaterThanN(int[], int, int);

int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	int n;
	cout << "This program has you enter integers into a 5 element array " << 
	"and pick another integer to display which elements are larger than " << 
	"the integer you picked." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "enter integer in element " << (i + 1) << ": ";
		cin >> arr[i];
	}
	cout << "enter integer to compare which elements in array it is larger than: ";
	cin >> n;
	displayGreaterThanN(arr, SIZE, n);
	return 0;
}

void displayGreaterThanN(int arr[], int size, int n)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > n)
			cout << arr[i] << " is greater than " << n << endl;
	}
}
