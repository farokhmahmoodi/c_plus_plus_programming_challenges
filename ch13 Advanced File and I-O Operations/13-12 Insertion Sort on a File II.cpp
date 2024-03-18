/*Modify the program written for Programming Challenge 11 so that the file contains records of people. Each record should 
contain an array of 10 characters to hold the name of a person and an integer to hold the person’s age. The file should be 
sorted by alphabetic order of the names.*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int in, out;
	long readPos = 0;

	fstream file("13-11.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "Error opening file.";
		return 0;
	}
	file.read(reinterpret_cast<char*>(&in), sizeof(in));
	if (!file.fail()) //if file is not empty
	{
		cout << "Sorted list of integers:"
			<< in << " ";
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
		file.open("13-11.dat", ios::out | ios::binary);
		file.write(reinterpret_cast<char*>(&out), sizeof(out)); //store first integer into the file
		file.close();
		file.clear();
	}
	else //if file is not empty
	{
		file.seekg(-4L, ios::end);
		file.read(reinterpret_cast<char*>(&in), sizeof(in));
		if (in <= out) //if new integer is largest in the file
		{
			file.close();
			file.open("13-11.dat", ios::out | ios::app | ios::binary);
			file.write(reinterpret_cast<char*>(&out), sizeof(out));
			file.close();
		}
		else
		{
			while (file.seekg(--readPos, ios::end))
			{
				if (readPos % 4 == 0)
				{
					file.read(reinterpret_cast<char*>(&in), sizeof(in));
					if (in > out) //if integer read in from file is greater than new integer
					{
						file.close();
						file.open("13-11.dat", ios::in | ios::out | ios::binary);
						file.seekp(readPos + 4, ios::end);
						file.write(reinterpret_cast<char*>(&in), sizeof(in));
						file.seekp(readPos, ios::end);
						file.write(reinterpret_cast<char*>(&out), sizeof(out));
						file.close();
						file.open("13-11.dat", ios::in | ios::binary);
					}
					else if (in <= out) //if integer read in is less than or equal to new integer
					{
						file.close();
						file.open("13-11.dat", ios::in | ios::out | ios::binary);
						file.seekp(readPos + 4, ios::end);
						file.write(reinterpret_cast<char*>(&out), sizeof(out));
						file.seekp(readPos, ios::end);
						file.write(reinterpret_cast<char*>(&in), sizeof(in));
						file.close();
						break;
					}
				}
			}
		}
	}

	return 0;
}