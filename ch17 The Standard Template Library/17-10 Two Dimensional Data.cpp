/*Suppose that data representing a list of people and places they would like to visit is stored in a file as 
follows:

3

0 Paul

1 Peter

2 David

0 3 Chicago Boston Memphis

1 1 Boston

2 0

The first number n in the file indicates how many people there are in the list. Here n is 3, so there are 
three people. Each person in the list is assigned a number in the range 0.. n − 1 that is used to identify 
that person. For each person, the file lists the numerical identifier of the person, followed by the number 
of places the person wants to visit, followed by the names of those places. For example, Boston is the only 
place that Peter cares to visit, while David wants to visit no places.

Write a program that reads in this type of data from a file and stores it in appropriate STL data structure. 
For example, you might use vectors, as well as vectors of vectors, to represent this information. The program 
allows users to type in the name of a person whose list of favorite destinations is to be printed out. The 
program prints an error message if the person is not in the database.*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ifstream in("2DData.txt", ios::in);
    if (!in)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    int numOfPeople, index, numOfPlaces, choice;
    string nameOfPlace, input;
    vector<vector<string>> places;
    vector<string> namesOfPlaces;

    in >> numOfPeople;
    vector<string> names(numOfPeople);
    for (int i = 0; i < names.size(); i++)
    {
        in >> index;
        in >> names[i];
    }
    for (int i = 0; i < names.size(); i++)
    {
        in >> index;
        in >> numOfPlaces;
        for (int x = 0; x < numOfPlaces; x++)
        {
            in >> nameOfPlace;
            namesOfPlaces.emplace_back(nameOfPlace);
        }
        places.emplace_back(namesOfPlaces);
        namesOfPlaces.clear();
    }    
    in.close();
    do
    {
        cout << "Enter the name of a person to list their favorite destinations:";
        getline(cin, input);
        do
        {
            while (cout << "Would you like to enter another person? (1 for yes/2 for no)" &&
                !(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for choice." << endl;
            }
            if (choice != 1 && choice != 2)
                cout << "Invalid input for choice. It must be 1 or 2.\n";
        } while (choice != 1 && choice != 2);
        cin.ignore();
    } while (choice != 2);

    return 0;
}
