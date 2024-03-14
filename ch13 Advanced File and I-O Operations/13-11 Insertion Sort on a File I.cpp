/*Write a program that uses an initially empty file to store a sorted list of integers entered by the user. The
integers are stored in binary form. Each time the program is run, it opens the file and outputs the list of
stored integers onto the screen. The program then asks the user to enter a new integer X. The program then
looks at the integer at the end of the file. If that integer is less than or equal to X, the program stores X
at the end of the file and closes the file. Otherwise, the program starts at the end of the file and works
toward the beginning, moving each value in the file that is greater than X up by one until it reaches the
position in the file where X should be stored. The program then writes X at that position and closes the file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int in,out;
	long pos = 0;

	fstream file("13-11.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "Error opening file.";
		return 0;
	}
	file.read(reinterpret_cast<char*>(&in), sizeof(in));
	if (!file.fail()) //if file is not empty
	{
		cout << in << " ";
		while (file.read(reinterpret_cast<char*>(&in), sizeof(in)))
		{
			cout << in << " ";
		}
		cout << endl;
	}
	file.clear();
	while (cout << "Enter a new integer X:"
		&& !(cin >> out)) {
		cin.clear(); //clear bad input flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
		cout << "Invalid input for new integer X." << endl;
	}
	file.seekg(0L, ios::beg);
	file.read(reinterpret_cast<char*>(&in), sizeof(in));
	if (file.fail()) //if file is empty
	{
		file.close();
		file.open("13-11.dat", ios::out | ios::app | ios::binary);
		file.write(reinterpret_cast<char*>(&out), sizeof(out));
		file.close();
		file.clear();
	}
	else
	{
		while (file.seekg(--pos, ios::end))
		{
			if (pos % 4 == 0) //if new integer is largest in the sorted list
			{
				file.read(reinterpret_cast<char*>(&in), sizeof(in));
				if (in <= out && pos == -4)
				{
					file.close();
					file.open("13-11.dat", ios::out | ios::app | ios::binary);
					file.write(reinterpret_cast<char*>(&out), sizeof(out));
					file.close();
					break;
				}
				else
				{

				}
			}
		}

	}

	return 0;
}