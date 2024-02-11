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
	void setName(string n)
	{
		name = n;
	}
	void setScore(int s)
	{
		score = s;
	}
	string getName() const
	{
		return name;
	}
	int getScore() const
	{
		return score;
	}
};

// This class allows a 2-dimensional table expressed as
// a vectors of vector of Student objects to be transformed into
// HTML form.
class HTMLTable
{
private:
	vector<string> headers, names;
	vector<vector<string>> rows;
	vector<int> scores;
	// Helper methods for writing an HTML row in a table
	void writeHeadersRow(ostream& out, string tag, vector<string> row);
	void writeDataRow(ostream& out, string tag, vector<string> names, vector<int> scores);
public:
	HTMLTable()
	{

	}
	HTMLTable(vector<Student> a)
	{
		for (int i = 0; i < a.size(); i++)
		{
			names.push_back(a[i].getName());
			scores.push_back(a[i].getScore());
			rows.push_back(names);
		}
	}
	// Set headers for the table columns
	void setHeaders(const vector<string>& headers)
	{
		this->headers = headers;
	}
	// Add rows to the table
	void addRow(const vector<string>& row)
	{
		rows.push_back(row);
	}
	// Write the table into HTML form onto an output stream
	friend
		ostream& operator<<(ostream& out, HTMLTable htmlTable);
};

//************************************************************
// Writes a row of the table, using the given tag for the    *
// table data. The tag may be td for table data or th for    *
// table header.                                             *
//************************************************************
void HTMLTable::writeHeadersRow(ostream& out, string tag,
	vector<string> row)
{
	out << "<tr>\n";
	for (unsigned int k = 0; k < headers.size(); k++)
	{
		out << "<" << tag << "> "
			<< row[k] << " </" << tag << "> ";
	}
	out << "\n</tr>\n";
}

void HTMLTable::writeDataRow(ostream& out, string tag,vector<string> names,
	vector<int> scores)
{
	for (unsigned int k = 0; k < rows.size(); k++)
	{
		out << "<tr>\n";
		out << "<" << tag << "> "
			<< names[k] << " </" << tag << "> ";
		out << "<" << tag << "> "
			<< scores[k] << " </" << tag << "> ";
		out << "\n</tr>\n";
	}
}

//******************************************************
// Overloaded stream output operator <<                *
//******************************************************
ostream& operator<<(ostream& out, HTMLTable htmlTable)
{
	out << "<table border = \"1\">\n";
	// Write the headers
	htmlTable.writeHeadersRow(out, "th", htmlTable.headers);
	// Write the rows of the table
	htmlTable.writeDataRow(out, "td", htmlTable.names, htmlTable.scores);
	// Write end tag for table
	out << "</table>\n";
	return out;
}

int main()
{
	// Hard-coded data for table column headers   
	vector<string> headers{ "Name", "Score"};

	// Hard-coded data for the two rows of the table
	vector<Student> test (3);
	string n;
	int s;

	for (int i = 0; i < test.size(); i++)
	{
		cout << "Enter name of student " <<
			(i + 1) << ":";
		cin >> n;
		test[i].setName(n);
		cout << "Enter score of student " <<
			(i + 1) << ":";
		cin >> s;
		test[i].setScore(s);
	}

	// Create the HTML table object and set its members
	HTMLTable hTable(test);
	hTable.setHeaders(headers);

	// Open a file and write the HTML code to the file
	ofstream outFile("c:\\temp\\table.html");
	outFile << hTable;
	outFile.close();

	// Write the same HTML code to the screen for ease of viewing
	cout << hTable;
	// Use the default browser to view generated HTML table
	system("c:\\temp\\table.html");

	return 0;
}
