/*Write a modular program that accepts up to 20 integer test scores in the range of 0 to 100 from the user and stores them in an array. Then main 
should report how many perfect scores were entered (i.e., scores of 100), using a value-returning countPerfect function to help it. Hint: Have the program count the scores as they are entered. 
Your program may need this information later.
*/

#include <iostream>
#include <cctype>
using namespace std;

int getScores(int[], int);
int countPerfect(int [], int);

int main()
{
	const int MAX_NUM_SCORES = 20;
	char choice;
	do {
		int arr[MAX_NUM_SCORES];
		int numScores = getScores(arr, MAX_NUM_SCORES);
		cout << "There were " << numScores << " scores entered. Of those entered "
			<< countPerfect(arr, numScores) << " are perfect scores." << endl
			<< "Would you like to run this program again? (y for yes/n for no): ";
		cin >> choice;
	} while (toupper(choice) == 'Y');
	return 0;
}

int getScores(int arr[], int max)
{
	int num, count = 0;
	do
	{
		cout << "enter score for test " << (count + 1) << " between 0 and 100 (or -1 to quit): ";
		cin >> num;
		while (num < -1 || num > 100)
		{
			cout << "INPUT ERROR. enter score for test " << (count + 1) << " between 0 and 100 (or -1 to quit) : ";
			cin >> num;
		}
		if (num != -1)
		{
			arr[count] = num;
			count++;
		}
	} while (num != -1 && count < max);
	return count;
}

int countPerfect(int arr[], int numScores)
{
	int count = 0;
	for (int i = 0; i < numScores; i++)
	{
		if (arr[i] == 100)
			count++;
	}
	return count;
}
