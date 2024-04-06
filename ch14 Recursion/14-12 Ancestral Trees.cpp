/*Assume the following arrays are globally defined.


const string people[] = {"Al", "Beth", "Bob", "Carol", "Chuck",
                         "Candy", "Cain", "Debbie", "Doug",
                         "Diane", "Dwayne", "Delores", "Dwight"
                        };
const string mother[] = {"Beth", "Carol", "Charity", "Debbie",
                         "Diane", "", "Delores"
                        };
const string father[] = {"Bob", "Charley", "Cain", "Douglas",
                         "Dwayne", "", "Dwight"
                        };
const int mom[] = {1, 3, 5, 7, 9, −1, 11, −1, −1, −1, −1, −1, −1};
const int pop[] = {2, 4, 6, 8, 10, −1, 12, −1, −1, −1, −1, −1, −1};

The people array establishes a correspondence between a name and its position in the array: Al is assigned the index 0, Beth 
is assigned the index 1, and so on. The mother and father arrays specify parental information. Al, who has index 0, has Beth 
(mother[0]) for his mother and Bob (father[0]) for his father. Similarly, the mother and father of Beth are Carol and 
Charley, respectively. The mother and father of Candy (index 5) are not known, so they are indicated by empty strings.

The mom and pop arrays give the same information in integer rather than string format. Values of −1 denote unknown 
information. For example, the mother of the person at index 4 has index mom[4]= 9, and the father has index pop[4]= 10.

The ancestral lineage of a person is a list that begins with that person and includes all of his or her ancestors. For 
example, the ancestral lineage of Al (index 0) is given by the people array, while the ancestral lineage of Cain (index 6) 
is Cain, Delores, Dwight.

Write a function void ancestors(int index) that prints a list of names that make up the ancestral lineage of the person with 
the given index.*/

#include <iostream>
using namespace std;

const string people[] = { "Al", "Beth", "Bob", "Carol", "Chuck",
                         "Candy", "Cain", "Debbie", "Doug",
                         "Diane", "Dwayne", "Delores", "Dwight"
};
const string mother[] = { "Beth", "Carol", "Charity", "Debbie",
                         "Diane", "", "Delores"
};
const string father[] = { "Bob", "Charley", "Cain", "Douglas",
                         "Dwayne", "", "Dwight"
};
const int mom[] = { 1, 3, 5, 7, 9, -1, 11, -1, -1, -1, -1, -1, -1 };
const int pop[] = { 2, 4, 6, 8, 10, -1, 12, -1, -1, -1, -1, -1, -1 };

void ancestors(int);

int main()
{
    int i,choice;

    do
    {
        do
        {
            while (cout << "Enter an integer between 0 and 12 for index of person you want to"
                << " print ancestral lineage of:" && !(cin >> i)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for index." << endl;
            }
            if (i < 0 || i > 12)
                cout << "Index must be between 0 and 12." << endl;
        } while (i < 0 || i > 12);
        ancestors(i);
        cout << endl;
        do
        {
            while (cout << "Would you like to run the program again? (1 for yes/2 for no)"
                && !(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for choice." << endl;
            }
            if (choice != 1 && choice != 2)
                cout << "Choice must be 1 or 2." << endl;
        } while (choice != 1 && choice != 2);
    } while (choice != 2);

    return 0;
}

void ancestors(int index)
{
    cout << people[index];
    if (mom[index] != -1 && pop[index] != -1)
    {
         cout << ", " << people[mom[index]] << ", "
            << people[pop[index]];
         if (mom[mom[index]] != -1)
         {
             cout << ", ";
             ancestors(mom[index]);
         }

         if (pop[pop[index]] != -1)
         {
             cout << ", ";
             ancestors(pop[index]);
         }
    }
}