/*Adopt the following strategy to construct the list of all subsets of the set of the integers 1, 2, . . . n.
Use an STL vector to represent a single subset of integers, and use an STL list of vectors to represent a list of subsets.
Start with a list 𝐿 0 of one empty vector; then 𝐿 0 represents the list of all subsets of the empty set.
Now suppose that you have created the list 𝐿 𝑘 − 1 of all subsets of 1 , 2 , . . . , 𝑘 − 1.
To form the list 𝐿 𝑘 of all subsets of 1, 2, . . . k, create an empty list L, and then for each vector v in 𝐿 𝑘 − 1 ,
add both v and 𝑣 + [ 𝑘 ] to L. Finally, set 𝐿 𝑘 to L. (Here by 𝑣 + [ 𝑘 ] we mean the result of adding
the integer k to the vector v.) Test your program for all values of n ≤ 4*/

#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<vector<int>> LkMinus1;
    vector<int> v = {1,2,3}, subset;

    for(auto it = v.begin(); it != v.end(); it++) //creating list Lk-1 of all subsets of 1,2,..,k-1
    {
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
    for(auto it = LkMinus1.begin(); it != LkMinus1.end(); it++) //creating list L by adding integer k to each vector in
    {                                                           //list Lk-1
        subset = *it;
        L.emplace_back(subset);
        subset.emplace_back(4);
        L.emplace_back(subset);
        subset.clear();
    }
    subset.emplace_back(4);
    L.emplace_back(subset);
    subset.clear();
    subset.shrink_to_fit();
    list<vector<int>> Lk(L); //creating list Lk by setting it to list L
    for (auto elem : Lk) //printing list of all subsets
    {
        for(int i = 0; i < elem.size();i++)
            cout << elem[i] << " ";
        cout << endl;
    }

    return 0;
}
