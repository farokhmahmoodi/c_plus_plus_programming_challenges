/*Write a program that asks for the user’s name and year of birth, greets the user by name, and
declares the user’s age in years. Users are assumed to be born between the years 1800 and 2099, and should
enter the year of birth in one of the three formats 18XX, 19XX, or 20XX. A typical output should be “Hello
Caroline, you are 23 years old.”*/

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    time_t epSeconds; //Seconds since midnight January 1, 1970
    tm* pCalendarTime = nullptr;
    epSeconds = time(NULL); //Seconds since midnight January 1, 1970
    pCalendarTime = localtime(&epSeconds);
    string name;
    int birthYear;

    cout << "Enter your name:";
    getline(cin, name);
    cout << "Enter your year of birth in one of these three formats 18XX, 19XX, or 20XX:";
    cin >> birthYear;
    cout << "Hello " << name << ",you are "
        << ((1900 + pCalendarTime->tm_year) - birthYear) << " years old." << endl;

    return 0;
}
