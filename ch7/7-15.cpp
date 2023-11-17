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
	COORD pos = {0,0}; //{column, row}
	COORD pos2 = {0,1};
	COORD pos3 = {0,2};
	SetConsoleCursorPosition(screen, pos);
	cout << "        \\/" << endl;
	cout << "        00" << endl;
	cout << "~000000000" << endl;
	Sleep(1000);

	while (pos.X <= 10 && pos2.X <= 10 && pos3.X <= 10)
	{
		if (pos.X == 10 && pos2.X == 10 && pos3.X == 10) //start position
		{
			SetConsoleCursorPosition(screen, pos);
			cout << "          " << endl;
			SetConsoleCursorPosition(screen, pos2);
			cout << "          " << endl;
			SetConsoleCursorPosition(screen, pos3);
			cout << "          " << endl;
			pos = { 0,0 };
			pos2 = { 0,0 };
			pos3 = { 0,0 };
			SetConsoleCursorPosition(screen, pos);
			cout << "        \\/" << endl;
			cout << "        00" << endl;
			cout << "~000000000" << endl;
			Sleep(1000);
			break;
		}
		else if (pos.X % 2 == 0 && pos2.X % 2 == 0 && pos3.X % 2 == 0)
		{
			SetConsoleCursorPosition(screen, pos);
			cout << "          " << endl;
			pos.X++;
			SetConsoleCursorPosition(screen, pos);
			cout << "        \\/" << endl;

			SetConsoleCursorPosition(screen, pos2);
			cout << "          " << endl;
			pos2.X++;
			SetConsoleCursorPosition(screen, pos2);
			cout << "     0  00" << endl;

			SetConsoleCursorPosition(screen, pos3);
			cout << "          " << endl;
			pos3.X++;
			SetConsoleCursorPosition(screen, pos3);
			cout << "~0000 0000" << endl;
			Sleep(1000);
		}
		else 
		{
			SetConsoleCursorPosition(screen, pos);
			cout << "          " << endl;
			pos.X++;
			SetConsoleCursorPosition(screen, pos);
			cout << "        \\/" << endl;

			SetConsoleCursorPosition(screen, pos2);
			cout << "          " << endl;
			pos2.X++;
			SetConsoleCursorPosition(screen, pos2);
			cout << "    000 00" << endl;

			SetConsoleCursorPosition(screen, pos3);
			cout << "          " << endl;
			pos3.X++;
			SetConsoleCursorPosition(screen, pos3);
			cout << "~000   000" << endl;
			Sleep(1000);
		}
	}


	return 0;
}

