/*Write a class whose constructor takes a vector of Student objects, where each Student has a name of type 
string and a score of type int. The class internally stores the data passed to it in its constructor. 
The class should have an overloaded output operator that outputs its data in the form of an HTML table. 
Make up suitable input and use it to test your class.*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
	string name;
	int score;
public:
	Student()
	{
		name = "";
		score = 0;
	}
	Student(string n, int s)
	{
		name = n;
		if(score >= 0)
			score = s;
		else
		{
			cout << "Score cannot be negative." << endl;
			score = 0;
		}
	}
};

class HTMLTable
{

};

int main()
{
   
	return 0;
}
