/*Solve the problem of Programming Challenge 11 by using recursion. Do this by writing a recursive function that takes an integer parameter n and returns a
list of all subsets of the set 1, 2 . . . , n.*/

#include <iostream>
#include <vector>
#include <list>
#include <limits>
using namespace std;

list<vector<int>> recursiveSubsets(int n)
{
    list<vector<int>> allsubsets;

    return allsubsets;
}

int main()
{
    list<vector<int>> subsets;
    int n;

    do
    {
        while (cout << "Enter an integer n to return a list of all subsets of the set "
           << "1, 2 . . . , n:" &&
        !(cin >> n)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer n." << endl;
        }
        if(n < 1)
            cout << "Invalid input for integer n. Must be greater than or equal to 1.\n";
    }while(n < 1);
    subsets = recursiveSubsets(n);
    for(auto elem : subsets)
    {
        for(int i = 0; i < elem.size();i++)
            cout << elem[i] << " ";
        cout << endl;
    }

    return 0;
}
