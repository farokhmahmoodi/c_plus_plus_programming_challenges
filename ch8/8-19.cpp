// 

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void displayBoard(const char[][COLS]);
//void selectLocation(char[][COLS]);
bool boardFull(const char[][COLS]);
bool winner(const char[][COLS]);

int main()
{
	char board[ROWS][COLS] = {{'*','*','*'}, {'*','*','*'} , {'*','*','*'} };
	
	cout << "Welcome to Tic-Tac-Toe!" << endl << endl;
	displayBoard(board);


	return 0;
}

void displayBoard(const char board[][COLS])
{
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			cout << board[r][c];
			if (c == 2)
				cout << endl;
		}
	}
}

//void selectLocation(char board[][COLS])
//{
//	int rowSelection, colSelection;
//	
//	do
//	{
//
//
//
//	} while ( );
//}

bool boardFull(const char board[][COLS])
{
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			if (board[r][c] == '*')
				return false;
		}
	}
	return true;
}

bool winner(const char board[][COLS])
{

	if ((board[0][0] == 'X' && board[1][0] == 'X'
		&& board[2][0] == 'X') || (board[0][0] == 'X' && board[0][1] == 'X'
			&& board[0][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X'
				&& board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X'
					&& board[2][2] == 'X') || (board[0][0] == 'X' && board[1][1] == 'X'
						&& board[2][2] == 'X') || (board[0][0] == 'O' && board[1][0] == 'O'
							&& board[2][0] == 'O') || (board[0][0] == 'O' && board[0][1] == 'O'
								&& board[0][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O'
									&& board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O'
										&& board[2][2] == 'O') || (board[0][0] == 'O' && board[1][1] == 'O'
											&& board[2][2] == 'O'))
		return true;
	else
		return false;
}