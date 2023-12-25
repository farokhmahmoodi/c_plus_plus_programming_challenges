//
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MIN = 0;
const int MAX = 9;

int main()
{
	unsigned seed;
	seed = time(0);
	srand(seed);
	int winningDigits[5], player[5], count = 0;
	for (int i = 0; i < 5; i++)
		winningDigits[i] = rand() % (MAX - MIN + 1) + MIN;
	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Enter digit " << (i + 1) << " for your lottery numbers: ";
			cin >> player[i];
			if (player[i] < 0)
				cout << "input error. digit must be greater than or equal to 0." << endl;
		} while (player[i] < 0);
	}

	for (int i = 0; i < 5; i++)
	{
		if (winningDigits[i] == player[i])
			count++;
	}

	cout << endl <<  "Winning Digits are ";
	for (int i = 0; i < 5; i++)
		cout << winningDigits[i] << " ";
	cout << endl;
	cout << "Your digits are ";
	for (int i = 0; i < 5; i++)
		cout << player[i] << " ";
	cout << endl;
	cout << "Number of matching digits is " << count << endl;
	return 0;
}
