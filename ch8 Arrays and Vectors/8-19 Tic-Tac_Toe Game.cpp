/*Write a modular program that allows two players to play a game of tic-tac-toe. Use a two-dimensional char array with three rows 
and three columns as the game board. Each element of the array should be initialized with an asterisk (*). The program should 
display the initial board configuration and then start a loop that does the following:

Have player 1 select a board location for an X by entering a row and column number. Then redisplay the board with an X replacing 
the * in the chosen location.

If there is no winner yet and the board is not yet full, have player 2 select a board location for an O by entering a row and 
column number. Then redisplay the board with an O replacing the * in the chosen location.

The loop should continue until a player has won or a tie has occurred, then display a message indicating who won, or reporting 
that a tie occurred.

Player 1 wins when there are three Xs in a row, a column, or a diagonal on the game board.

Player 2 wins when there are three Os in a row, a column, or a diagonal on the game board.

A tie occurs when all of the locations on the board are full, but there is no winner.

Input Validation: Only allow legal moves to be entered. The row and column must be 1, 2, or 3. The selected board location must 
currently be empty (i.e., still have an asterisk in it).*/

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
	int across, down, diagLToR, diagRToL;
	across = down = diagLToR = diagRToL = 0;

	for (int row = 0; row < NUM_ROWS_AND_COLS; row++)
	{
		for (int col = 0; col < NUM_ROWS_AND_COLS; col++)
		{
			if (board[row][col] == 'X')
				across++;
			if (col == 2 && across != 3)
				across = 0;
			if (across == 3)
				return true;
		}
	}

	for (int col = 0; col < NUM_ROWS_AND_COLS; col++)
	{
		for (int row = 0; row < NUM_ROWS_AND_COLS; row++)
		{
			if (board[row][col] == 'X')
				down++;
			if (row == 2 && down != 3)
				down = 0;
			if (down == 3)
				return true;
		}
	}

	for (int i = 0; i < NUM_ROWS_AND_COLS; i++)
	{
		if (board[i][i] == 'X')
			diagLToR++;
		if (diagLToR == 3)
			return true;
	}

	for (int row = 0, col = NUM_ROWS_AND_COLS - 1; row < NUM_ROWS_AND_COLS; row++, col--)
	{
		if (board[row][col] == 'X')
			diagRToL++;
		if (diagRToL == 3)
			return true;
	}
	return false;
}

bool owinner(const char board[][NUM_ROWS_AND_COLS])
{
	int across, down, diagLToR, diagRToL;
	across = down = diagLToR = diagRToL = 0;

	for (int row = 0; row < NUM_ROWS_AND_COLS; row++)
	{
		for (int col = 0; col < NUM_ROWS_AND_COLS; col++)
		{
			if (board[row][col] == 'O')
				across++;
			if (col == 2 && across != 3)
				across = 0;
			if (across == 3)
				return true;
		}
	}

	for (int col = 0; col < NUM_ROWS_AND_COLS; col++)
	{
		for (int row = 0; row < NUM_ROWS_AND_COLS; row++)
		{
			if (board[row][col] == 'O')
				down++;
			if (row == 2 && down != 3)
				down = 0;
			if (down == 3)
				return true;
		}
	}

	for (int i = 0; i < NUM_ROWS_AND_COLS; i++)
	{
		if (board[i][i] == 'O')
			diagLToR++;
		if (diagLToR == 3)
			return true;
	}

	for (int row = 0, col = NUM_ROWS_AND_COLS - 1; row < NUM_ROWS_AND_COLS; row++, col--)
	{
		if (board[row][col] == 'O')
			diagRToL++;
		if (diagRToL == 3)
			return true;
	}
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