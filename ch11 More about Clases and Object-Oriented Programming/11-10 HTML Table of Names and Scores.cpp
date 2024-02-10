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

// This class allows a 2-dimensional table expressed as
// a vectors of vector of strings to be transformed into
// HTML form.
class HTMLTable
{
private:
	vector<string> headers;
	vector<vector<string> > rows;
	// Helper method for writing an HTML row in a table
	void writeRow(ostream& out, string tag, vector<string> row);
public:
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
void HTMLTable::writeRow(ostream& out, string tag,
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

//******************************************************
// Overloaded stream output operator <<                *
//******************************************************
ostream& operator<<(ostream& out, HTMLTable htmlTable)
{
	out << "<table border = \"1\">\n";
	// Write the headers
	htmlTable.writeRow(out, "th", htmlTable.headers);
	// Write the rows of the table
	for (unsigned int r = 0; r < htmlTable.rows.size(); r++)
	{
		htmlTable.writeRow(out, "td", htmlTable.rows[r]);
	}
	// Write end tag for table
	out << "</table>\n";
	return out;
}

int main()
{
	// Hard-coded data for table column headers   
	vector<string> headers{ "Name", "Address", "Phone" };

	// Hard-coded data for the two rows of the table
	// 
	vector<string> person1
	{ "Mike Sane", "1215 Mills St", "630-728-1293" };
	vector<string> person2
	{ "Natasha Upenski", "513 Briarcliff Ln", "412-672-1004" };

	// Create the HTML table object and set its members
	HTMLTable hTable;
	hTable.setHeaders(headers);
	hTable.addRow(person1);
	hTable.addRow(person2);

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
