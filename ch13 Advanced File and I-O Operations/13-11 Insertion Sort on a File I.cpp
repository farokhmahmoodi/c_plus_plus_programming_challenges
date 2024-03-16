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
#include <vector>
using namespace std;
int main()
{
	int out;
	vector<int> buffer, readIn(1);
	long readPos = 0, writePos = -1;

	fstream file("13-11.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "Error opening file.";
		return 0;
	}
	file.read(reinterpret_cast<char*>(&readIn[0]), readIn.size());
	if (!file.fail()) //if file is not empty
	{
		cout << readIn[0] << " ";
		while (file.read(reinterpret_cast<char*>(&readIn[0]), readIn.size()))
		{
			cout << readIn[0] << " ";
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
	file.read(reinterpret_cast<char*>(&readIn[0]), readIn.size());
	if (file.fail()) //if file is empty
	{
		file.close();
		file.open("13-11.dat", ios::out | ios::binary);
		readIn[0] = out;
		file.write(reinterpret_cast<char*>(&readIn[0]), readIn.size()); //store first integer into the file
		file.close();
		file.clear();
	}
	else //if file is not empty
	{	
		while (file.seekg(--readPos, ios::end))
		{
			file.read(reinterpret_cast<char*>(&readIn[0]), readIn.size());
			if (readIn[0] <= out && readPos == -1) //if new integer is largest in file
			{
				file.close();
				file.open("13-11.dat", ios::out | ios::app | ios::binary);
				readIn[0] = out;
				file.write(reinterpret_cast<char*>(&readIn[0]), readIn.size()); 
				file.close();
				break;
			}
			else if (readIn[0] <= out)
			{
				while (file.seekg(++writePos, ios::beg)) //adding smaller integers than new integer to buffer vector
				{
					file.read(reinterpret_cast<char*>(&readIn[0]), readIn.size());
					if (readIn[0] <= out)
						buffer.push_back(readIn[0]);
					else if (readIn[0] > out)
						break;
				}
				buffer.push_back(out);
				buffer.push_back(readIn[0]);
				while (file.seekg(++writePos, ios::beg)) //adding larger integers than new integer to buffer vector
				{
					file.read(reinterpret_cast<char*>(&readIn[0]), readIn.size());
					if(readIn[0] > out && !file.eof())
						buffer.push_back(readIn[0]);
				}
				file.close();
				writePos = -1;
				int i = 0;
				file.open("13-11.dat", ios::out | ios::binary);
				while (file.seekp(++writePos, ios::beg) && i < buffer.size()) //writing buffer vector to file
				{
					file.write(reinterpret_cast<char*>(&buffer[i]), 1);
					i++;
				}
				file.close();
				break;
			}
			else if (readIn[0] > out)
			{
				file.seekg(0L, ios::beg);
				file.read(reinterpret_cast<char*>(&readIn[0]), readIn.size());
				if (readIn[0] > out) //if new integer is smallest integer in the file
				{
					cout << "hi" << endl;
					readPos = writePos = -1;
					buffer.push_back(out);
					while (file.seekg(++readPos, ios::beg))
					{
						file.read(reinterpret_cast<char*>(&readIn[0]), readIn.size());
						buffer.push_back(readIn[0]);
					}
					file.close();
					int i = 0;
					file.open("13-11.dat", ios::out | ios::binary);
					while (file.seekp(++writePos, ios::beg) && i < buffer.size()) //writing buffer vector to file
					{
						file.write(reinterpret_cast<char*>(&buffer[i]), 1);
						i++;
					}
					file.close();
					break;
				}
				else
				{
					file.seekg(readPos, ios::end);
				}
			}
		}
	}

	return 0;
}