/*Modify Program 17-38 so that it keeps lists of intermediate words during the two sorts
instead of keeping lists of swap indices.*/

#include <iostream>  
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Prototype
void sort(string, vector<string>& transpositions);

int main()
{
    // The two words
    string str1 = "spot";
    string str2 = "stop";

    // These vectors hold the list of intermediate words during the two sorts
    vector<string> transpose;
    vector<string> reverse_transpose;

    // Sort the two words
    cout << "The first word is " << str1 << endl
        << "The second word is " << str2 << endl;
    sort(str1, transpose);
    sort(str2, reverse_transpose);
    reverse_transpose.pop_back(); //remove duplicate intermediate word

    //Print out first list of intermediate words
    cout << "The transformation steps are: " << endl;
    for (int k = 0; k < transpose.size(); k++)
    {
        cout << transpose[k] << " ";
    }
    //Print out second list of intermediate words in reverse order
    for (int k = reverse_transpose.size() - 1; k >= 0; k--)
    {
        cout << reverse_transpose[k] << " ";
    }
    cout << endl;
    return 0;
}

//*************************************************************
// This is a version of Bubblesort that saves a list of all   *
// intermediate words during the sort*
//*************************************************************
void sort(string str, vector<string>& transpositions)
{
    // Last index of portion yet to be sorted
    int upperBound = str.size() - 1;
    transpositions.emplace_back(str);

    while (upperBound > 0)
    {
        for (int k = 0; k < upperBound; k++)
        {
            if (str[k] > str[k + 1])
            {
                swap(str[k], str[k + 1]);
                transpositions.emplace_back(str);
            }
        }
        upperBound--;
    }
}
