/*Solve the problem of Programming Challenge 11 by using recursion. Do this by writing a recursive function that takes an integer parameter n and returns a 
list of all subsets of the set 1, 2 . . . , n.*/

#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<vector<int>> LkMinus1;
    vector<int> v = {1,2,3}, subset;

    //creating list Lk-1 of all subsets of 1,2,..,k-1
    for(auto it = v.begin(); it != v.end(); it++)
    {
        if(subset.size() == 0 && it == v.begin())
            LkMinus1.emplace_back(subset);
        subset.emplace_back(*it);
        LkMinus1.emplace_back(subset);
        for(auto it2 = it + 1; it2 != v.end(); it2++)
        {
            subset.emplace_back(*it2);
            LkMinus1.emplace_back(subset);
            subset.pop_back();
        }
        subset.clear();
    }
    if(v.size() > 2)
        LkMinus1.emplace_back(v);
    subset.shrink_to_fit();
    list<vector<int>> L;
    //creating list L by adding integer k to each vector in list Lk-1
    for(auto it = LkMinus1.begin(); it != LkMinus1.end(); it++)
    {
        subset = *it;
        if(subset.size() != 0)
            L.emplace_back(subset);
        subset.emplace_back(4);
        L.emplace_back(subset);
        subset.clear();
    }
    subset.clear();
    subset.shrink_to_fit();
    /*creating list Lk by setting it to list L
    printing list of all subsets*/
    list<vector<int>> Lk(L);
    for (auto elem : Lk)
    {
        for(int i = 0; i < elem.size();i++)
            cout << elem[i] << " ";
        cout << endl;
    }

    return 0;
}
