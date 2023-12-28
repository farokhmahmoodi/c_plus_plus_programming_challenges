/* Write a program that displays word UP on bottom line of screen couple of inches 
* to left of center and displays word DOWN on top line of screen couple of inches 
* to right of center. Moving about once a second, move word UP up a line and word
* DOWN down a line until UP disappears at top of screen and DOWN disappears at
* bottom of screen.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD pos2 = { 28,10 };
	SetConsoleCursorPosition(screen, pos2);
	cout << "UP" << endl;

	COORD pos1 = {32,0}; //{col, row}
	SetConsoleCursorPosition(screen, pos1);
	cout << "DOWN" << endl;
	Sleep(1000);

	while (pos1.Y <= 10 && pos2.Y >= 0)
	{
		if (pos1.Y == 10 && pos2.Y == 0)
		{
			SetConsoleCursorPosition(screen, pos2);
			cout << "    " << endl;
			SetConsoleCursorPosition(screen, pos1);
			cout << "    " << endl;
			break;
		}
		SetConsoleCursorPosition(screen, pos2);
		cout << "    " << endl;
		pos2.Y--;
		SetConsoleCursorPosition(screen, pos2);
		cout << "UP" << endl;
		
		SetConsoleCursorPosition(screen, pos1);
		cout << "    " << endl;
		pos1.Y++;
		SetConsoleCursorPosition(screen, pos1);
		cout << "DOWN" << endl;
		Sleep(1000);
	}

	return 0;
}


