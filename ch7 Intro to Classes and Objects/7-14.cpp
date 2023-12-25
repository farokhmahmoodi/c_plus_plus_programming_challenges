/*
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
#include <windows.h>
using namespace std;


int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD pos2 = { 28,10 };
	SetConsoleCursorPosition(screen, pos2);
	cout << "UP" << endl;

	COORD pos1 = { 32,0 }; //{col, row}
	SetConsoleCursorPosition(screen, pos1);
	cout << "DOWN" << endl;

	COORD pos3 = {60,5};
	SetConsoleCursorPosition(screen, pos3);
	cout << "LEFT" << endl;

	COORD pos4 = {0,4};
	SetConsoleCursorPosition(screen, pos4);
	cout << "RIGHT" << endl;
	Sleep(1000);

	while (pos1.Y <= 10 && pos2.Y >= 0 && pos3.X >= 0 && pos4.X <= 60)
	{
		if (pos1.Y == 10 && pos2.Y == 0 && pos3.X >= 0 && pos4.X <= 60)
		{
			SetConsoleCursorPosition(screen, pos2);
			cout << "    " << endl;
			SetConsoleCursorPosition(screen, pos1);
			cout << "    " << endl;
			SetConsoleCursorPosition(screen, pos3);
			cout << "    " << endl;
			SetConsoleCursorPosition(screen, pos4);
			cout << "     " << endl;
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

		SetConsoleCursorPosition(screen, pos3);
		cout << "    " << endl;
		pos3.X -= 6;
		SetConsoleCursorPosition(screen, pos3);
		cout << "LEFT" << endl;

		SetConsoleCursorPosition(screen, pos4);
		cout << "     " << endl;
		pos4.X += 6;
		SetConsoleCursorPosition(screen, pos4);
		cout << "RIGHT" << endl;
		Sleep(1000);
	}

	return 0;
}

