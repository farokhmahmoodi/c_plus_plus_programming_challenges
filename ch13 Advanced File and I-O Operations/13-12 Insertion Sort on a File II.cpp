/*Modify the program written for Programming Challenge 11 so that the file contains records of people. Each record should 
contain an array of 10 characters to hold the name of a person and an integer to hold the person’s age. The file should be 
sorted by alphabetic order of the names.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int NAME_SIZE = 10;

struct Info
{
	char name[NAME_SIZE];
	int age;
};

int main()
{
	Info person, readIn;
	string name;
	long readPos = 0;

	fstream file("13-12.dat", ios::in | ios::binary);
	if (!file)
	{
		cout << "Error opening file.";
		return 0;
	}
	file.read(reinterpret_cast<char*>(&readIn), sizeof(readIn));
	if (!file.fail()) //if file is not empty
	{
		cout << "List of records sorted alphabetically:" << endl;
		cout << "Name:" << readIn.name << " Age:" << readIn.age << endl;
 		while (file.read(reinterpret_cast<char*>(&readIn), sizeof(readIn)))
		{
			cout << "Name:" << readIn.name << " Age:" << readIn.age << endl;
		}
		cout << endl;
	}
	file.clear();
	cout << "Enter new person information:\n";
	do
	{
		cout << "Name(no longer than 10 characters):";
		getline(cin, name);
		if (name.length() > 10)
			cout << "Name too long." << endl;
	} while (name.length() > 10);
	strcpy(person.name, name.c_str());
 	while (cout << "Age:"
		&& !(cin >> person.age)) {
		cin.clear(); //clear bad input flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
		cout << "Invalid input for new integer X." << endl;
	}
	cin.ignore();
	file.seekg(0L, ios::beg);
	file.read(reinterpret_cast<char*>(&readIn), sizeof(readIn));
	if (file.fail()) //if file is empty
	{
		file.close();
		file.open("13-12.dat", ios::out | ios::binary);
		file.write(reinterpret_cast<char*>(&person), sizeof(person)); //store first record into the file
		file.close();
		file.clear();
	}
	else //if file is not empty
	{
		readPos = sizeof(Info) * -1;
		file.seekg(readPos, ios::end);
		file.read(reinterpret_cast<char*>(&readIn), sizeof(readIn));
 		if (strcmp(person.name,readIn.name) == 0 || 
			strcmp(person.name, readIn.name) == 1) //if new record's name is last alphabetically in the file
		{
			file.close();
			file.open("13-12.dat", ios::out | ios::app | ios::binary);
			file.write(reinterpret_cast<char*>(&person), sizeof(person));
			file.close();
		}
	//	else
	//	{
	//		while (file.seekg(--readPos, ios::end))
	//		{
	//			if (readPos % 4 == 0)
	//			{
	//				file.read(reinterpret_cast<char*>(&in), sizeof(in));
	//				if (in > out) //if integer read in from file is greater than new integer
	//				{
	//					file.close();
	//					file.open("13-12.dat", ios::in | ios::out | ios::binary);
	//					file.seekp(readPos + 4, ios::end);
	//					file.write(reinterpret_cast<char*>(&in), sizeof(in));
	//					file.seekp(readPos, ios::end);
	//					file.write(reinterpret_cast<char*>(&out), sizeof(out));
	//					file.close();
	//					file.open("13-12.dat", ios::in | ios::binary);
	//				}
	//				else if (in <= out) //if integer read in is less than or equal to new integer
	//				{
	//					file.close();
	//					file.open("13-12.dat", ios::in | ios::out | ios::binary);
	//					file.seekp(readPos + 4, ios::end);
	//					file.write(reinterpret_cast<char*>(&out), sizeof(out));
	//					file.seekp(readPos, ios::end);
	//					file.write(reinterpret_cast<char*>(&in), sizeof(in));
	//					file.close();
	//					break;
	//				}
	//			}
	//		}
	//	}
	}

	return 0;
}