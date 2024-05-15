/*Solve the problem of Programming Challenge 11 by using recursion. Do this by writing a recursive function that takes an integer parameter n and returns a
list of all subsets of the set 1, 2 . . . , n.*/

#include <iostream>
#include <vector>
#include <list>
#include <limits>
using namespace std;

void calcSubset(vector<int>& vect, list<vector<int>>& listOfSubsets,
                vector<int>& subset, int index)
{
    // Add the current subset to the result list
    listOfSubsets.emplace_back(subset);

    // Generate subsets by recursively including and
    // excluding elements
    for (int i = index; i < vect.size(); i++) {
        // Include the current element in the subset
        subset.emplace_back(vect[i]);

        // Recursively generate subsets with the current
        // element included
        calcSubset(vect, listOfSubsets, subset, i + 1);

        // Exclude the current element from the subset
        // (backtracking)
        subset.pop_back();
    }
}

list<vector<int>> recursiveSubsets(int n)
{
    list<vector<int>> allSubsets;
    vector<int> vect, subset;
    for(int i = 1; i <= n; i++)
        vect.emplace_back(i);
    int index = 0;
    calcSubset(vect,allSubsets,subset,index);

    return allSubsets;
}

int main()
{
    list<vector<int>> allSubsets;
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
    allSubsets = recursiveSubsets(n);
    for(auto elem : allSubsets)
    {
        for(int i = 0; i < elem.size();i++)
            cout << elem[i] << " ";
        cout << endl;
    }

    return 0;
}
