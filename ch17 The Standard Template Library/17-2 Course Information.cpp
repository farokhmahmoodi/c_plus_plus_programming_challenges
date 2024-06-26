/*Write a program that creates a map containing course numbers and the room numbers of the rooms where the 
courses meet. The map should have the following key-value pairs:

Course Number (key)	Room Number (value)
CS101	3004
CS102	4501
CS103	6755
NT110	1244
CM241	1411

The program should also create a map containing course numbers and the names of the instructors that teach 
each course. The map should have the following key-value pairs:

Course Number (key)	Instructor (value)
CS101	Haynes
CS102	Alvarado
CS103	Rich
NT110	Burke
CM241	Lee

The program should also create a map containing course numbers and the meeting times of each course. The map 
should have the following key-value pairs:

Course Number (key)	Meeting Time (value)
CS101	8:00 a.m.
CS102	9:00 a.m.
CS103	10:00 a.m.
NT110	11:00 a.m.
CM241	1:00 p.m.

The program should let the user enter a course number, and then it should display the course�s room number, 
instructor, and meeting time.*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> roomNums = { {"CS101",3004},{"CS102",4501},{"CS103",6755}
    ,{"NT110",1244},{"CM241",1411} };
    map<string, string> instructorNames = { {"CS101","Haynes"},{"CS102","Alvarado"},{"CS103","Rich"}
    ,{"NT110","Burke"},{"CM241","Lee"}};
    map<string, string> meetingTime = { {"CS101","8:00 a.m."},{"CS102","9:00 a.m."},{"CS103","10:00 a.m."}
    ,{"NT110","11:00 a.m."},{"CM241","1:00 p.m."} };
    string courseNum;

    cout << "Enter a course number:";
    getline(cin, courseNum);
    auto it = roomNums.find(courseNum);
    auto it2 = instructorNames.find(courseNum);
    auto it3 = meetingTime.find(courseNum);
    if (it != roomNums.end() && it2 != instructorNames.end()
        && it3 != meetingTime.end())
    {
        cout << "Course Number:" << courseNum << endl;
        cout << "Room Number:" << it->second << endl;
        cout << "Instructor Name:" << it2->second << endl;
        cout << "Meeting Time:" << it3->second << endl;
    }
    else
        cout << "Course number " << courseNum << " not found.\n";

    return 0;
}
