// 
//

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;
bool isMagicSquare(const int[][COLS]);

int main()
{
	int a[ROWS][COLS] = { {4,9,2}, {3,5,7}, {8,1,6} };
	int b[ROWS][COLS] = { {5,8,4}, {9,3,4}, {2,3,1} };
	int c[ROWS][COLS] = { {3,7,6}, {8,0,4}, {5,10,2} };
	int d[ROWS][COLS] = { {1,1,1}, {1,1,1}, {1,1,1} };

	if (isMagicSquare(a))
		cout << "Array a is a Lo Shu Magic Square." << endl;
	else 
		cout << "Array a is not a Lo Shu Magic Square." << endl;
	if (isMagicSquare(b))
		cout << "Array b is a Lo Shu Magic Square." << endl;
	else
		cout << "Array b is not a Lo Shu Magic Square." << endl;
	if (isMagicSquare(c))
		cout << "Array c is a Lo Shu Magic Square." << endl;
	else
		cout << "Array c is not a Lo Shu Magic Square." << endl;
	if (isMagicSquare(d))
		cout << "Array d is a Lo Shu Magic Square." << endl;
	else
		cout << "Array d is not a Lo Shu Magic Square." << endl;

	return 0;
}

bool isMagicSquare(const int a[][COLS])
{
	int rowSum, colSum, diagonalSum, r1, r ,c;
	rowSum = colSum = diagonalSum = r1 = r = c = 0;
	diagonalSum += a[r1][COLS - 3] + a[r1 + 1][COLS - 2] + a[r1 + 2][COLS - 1];
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			if (a[row][col] < 1 || a[row][col] > 9)
				return false;
			colSum += a[row][col];
		}
		rowSum += a[r][c] + a[r + 1][c] + a[r + 2][c];
		if (colSum != rowSum && colSum != diagonalSum)
			return false;
		rowSum = colSum = 0;
		c++;
	}
	if (rowSum == colSum == diagonalSum)
		return true;
}