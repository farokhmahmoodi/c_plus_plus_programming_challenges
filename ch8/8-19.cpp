// 

#include <iostream>
using namespace std;

const int NUM_ROWS_AND_COLS = 3;

void displayBoard(const char[][NUM_ROWS_AND_COLS]);
void selectLocation(char[][NUM_ROWS_AND_COLS]);
bool boardFull(const char[][NUM_ROWS_AND_COLS]);
bool xwinner(const char[][NUM_ROWS_AND_COLS]);
bool owinner(const char [][NUM_ROWS_AND_COLS]);
void displayMessage(const char [][NUM_ROWS_AND_COLS]);

int main()
{
	char board[NUM_ROWS_AND_COLS][NUM_ROWS_AND_COLS] = {{'*','*','*'},{'*','*','*'},{'*','*','*'}};

	cout << "Welcome to Tic-Tac-Toe!" << endl;
	displayBoard(board);
	do
	{
		selectLocation(board);
	} while ((!boardFull(board) && !xwinner(board)) && (!owinner(board)));
	displayMessage(board);

	return 0;
}

void displayBoard(const char board[][NUM_ROWS_AND_COLS])
{
	cout << endl;
	for (int r = 0; r < NUM_ROWS_AND_COLS; r++)
	{
		for (int c = 0; c < NUM_ROWS_AND_COLS; c++)
		{
			cout << board[r][c];
			if (c == 2)
				cout << endl;
		}
	}
	cout << endl;
}

void selectLocation(char board[][NUM_ROWS_AND_COLS])
{
	int r, c;
	do
	{
		do
		{
			cout << "Player 1 enter a board location to place an X starting with row selection (1-3):";
			cin >> r;
			if (r < 1 || r > 3)
				cout << "input error. Row selection must be between 1-3." << endl;
		} while (r < 1 || r > 3);
		do
		{
			cout << "Player 1 enter column selection (1-3):";
			cin >> c;
			if (c < 1 || c > 3)
				cout << "input error. Column selection must be between 1-3." << endl;
		} while ((c < 1 || c > 3));
		if (board[r-1][c-1] != '*')
			cout << "input error. location is already filled." << endl;
	} while (board[r-1][c-1] != '*');
	board[r - 1][c - 1] = 'X';
	displayBoard(board);
	if ((!boardFull(board) && !xwinner(board)) && (!owinner(board)))
	{
		do
		{
			do
			{
				cout << "Player 2 enter a board location to place an O starting with row selection (1-3):";
				cin >> r;
				if (r < 1 || r > 3)
					cout << "input error. Row selection must be between 1-3." << endl;
			} while (r < 1 || r > 3);
			do
			{
				cout << "Player 2 enter column selection (1-3):";
				cin >> c;
				if (c < 1 || c > 3)
					cout << "input error. Column selection must be between 1-3." << endl;
			} while ((c < 1 || c > 3));
			if (board[r-1][c-1] != '*')
				cout << "input error. location is already filled." << endl;
		} while (board[r-1][c-1] != '*');
		board[r-1][c-1] = 'O';
		displayBoard(board);
	}
}

bool boardFull(const char board[][NUM_ROWS_AND_COLS])
{
	for (int r = 0; r < NUM_ROWS_AND_COLS; r++)
	{
		for (int c = 0; c < NUM_ROWS_AND_COLS; c++)
		{
			if (board[r][c] == '*')
				return false;
		}
	}
	return true;
}

bool xwinner(const char board[][NUM_ROWS_AND_COLS])
{
	if ((board[0][0] == 'X' && board[0][1] == 'X') && (board[0][2] == 'X'))
		return true;
	else if ((board[1][0] == 'X' && board[1][1] == 'X') && (board[1][2] == 'X'))
		return true;
	else if ((board[2][0] == 'X' && board[2][1] == 'X') && (board[2][2] == 'X'))
		return true;
	else if ((board[0][0] == 'X' && board[1][0] == 'X') && (board[2][0] == 'X'))
		return true;
	else if ((board[0][1] == 'X' && board[1][1] == 'X') && (board[2][1] == 'X'))
		return true;
	else if ((board[0][2] == 'X' && board[1][2] == 'X') && (board[2][2] == 'X'))
		return true;
	else if ((board[0][0] == 'X' && board[1][1] == 'X') && (board[2][2] == 'X'))
		return true;
	else if ((board[0][2] == 'X' && board[1][1] == 'X') && (board[2][0] == 'X'))
		return true;
	else
		return false;
}

bool owinner(const char board[][NUM_ROWS_AND_COLS])
{
	if ((board[0][0] == 'O' && board[0][1] == 'O') && (board[0][2] == 'O'))
		return true;
	else if ((board[1][0] == 'O' && board[1][1] == 'O') && (board[1][2] == 'O'))
		return true;
	else if ((board[2][0] == 'O' && board[2][1] == 'O') && (board[2][2] == 'O'))
		return true;
	else if ((board[0][0] == 'O' && board[1][0] == 'O') && (board[2][0] == 'O'))
		return true;
	else if ((board[0][1] == 'O' && board[1][1] == 'O') && (board[2][1] == 'O'))
		return true;
	else if ((board[0][2] == 'O' && board[1][2] == 'O') && (board[2][2] == 'O'))
		return true;
	else if ((board[0][0] == 'O' && board[1][1] == 'O') && (board[2][2] == 'O'))
		return true;
	else if ((board[0][2] == 'O' && board[1][1] == 'O') && (board[2][0] == 'O'))
		return true;
	else
		return false;
}

void displayMessage(const char board[][NUM_ROWS_AND_COLS])
{
	if (xwinner(board))
		cout << "Player 1 won." << endl;
	else if (owinner(board))
		cout << "Player 2 won." << endl;
	else
		cout << "Tie game." << endl;
}
