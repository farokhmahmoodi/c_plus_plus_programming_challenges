/*Write a program that asks for the user’s first, middle, and last names. The names should be stored in three 
different character arrays. The program should then store in a fourth array the name arranged in the following manner: 
the last name followed by a comma and a space, followed by the first name and a space, followed by the middle name. 
For example, if the user entered “Carol Lynn Smith”, it should store “Smith, Carol Lynn” in the fourth array. 
Display the contents of the fourth array on the screen.*/

#include <iostream>
using namespace std;

void nameArranger(const char*, const char*, const char*);

int main()
{
    const int LENGTH = 21;
    char* firstName = new char[LENGTH],
        * middleName = new char[LENGTH],
        * lastName = new char[LENGTH];

    cout << "Enter first name no longer than " << LENGTH - 1
        << " characters:";
    cin.getline(firstName, LENGTH);
    cout << "Enter middle name no longer than " << LENGTH - 1
        << " characters:";
    cin.getline(middleName, LENGTH);
    cout << "Enter last name no longer than " << LENGTH - 1
        << " characters:";
    cin.getline(lastName, LENGTH);
    nameArranger(firstName, middleName, lastName);

    return 0;
}

void nameArranger(const char* first, const char* middle, const char* last)
{
    char* arranger = new char[strlen(first)+strlen(middle)+strlen(last) + 6]; 
    //length for the whole name plus null terminators and spaces

    strcpy(arranger, last);
    strcat(arranger, ", ");
    strcat(arranger, first);
    strcat(arranger, " ");
    strcat(arranger, middle);
    cout << "The name arranged:" << arranger << endl;
}
