/* Modify program 7-12 so that after disappearing off screen, 
* word "UP" reappears at bottom of screen and word "DOWN"
* reappears at top of screen. Have these words each
* traverse screen three times before program terminates.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD pos2 = { 98,10 };
	SetConsoleCursorPosition(screen, pos2);
	cout << "UP" << endl;

	COORD pos1 = { 102,0 }; //{col, row}
	SetConsoleCursorPosition(screen, pos1);
	cout << "DOWN" << endl;
	Sleep(1000);

	for (int i = 1; i <= 3; i++)
	{
		while (pos1.Y <= 10 && pos2.Y >= 0)
		{
			if (pos1.Y == 10 && pos2.Y == 0 && i == 3) //words UP and DOWN do not reappear on 3 traversal
			{
				SetConsoleCursorPosition(screen, pos2);
				cout << "    " << endl;
				SetConsoleCursorPosition(screen, pos1);
				cout << "    " << endl;
				break;
			}
			else if (pos1.Y == 10 && pos2.Y == 0)
			{
				SetConsoleCursorPosition(screen, pos2);
				cout << "    " << endl;
				SetConsoleCursorPosition(screen, pos1);
				cout << "    " << endl;
				Sleep(1000);

				pos2 = { 98,10 };
				SetConsoleCursorPosition(screen, pos2);
				cout << "UP" << endl;

				pos1 = { 102,0 };
				SetConsoleCursorPosition(screen, pos1);
				cout << "DOWN" << endl;
				Sleep(1000);

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

	}

	return 0;
}