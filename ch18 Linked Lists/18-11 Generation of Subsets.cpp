/*Adopt the following strategy to construct the list of all subsets of the set of the integers 1, 2, . . . n.
Use an STL vector to represent a single subset of integers, and use an STL list of vectors to represent a list of subsets.
Start with a list 𝐿 0 of one empty vector; then 𝐿 0 represents the list of all subsets of the empty set.
Now suppose that you have created the list 𝐿 𝑘 − 1 of all subsets of 1 , 2 , . . . , 𝑘 − 1.
To form the list 𝐿 𝑘 of all subsets of 1, 2, . . . k, create an empty list L, and then for each vector v in 𝐿 𝑘 − 1 ,
add both v and 𝑣 + [ 𝑘 ] to L. Finally, set 𝐿 𝑘 to L. (Here by 𝑣 + [ 𝑘 ] we mean the result of adding
the integer k to the vector v.) Test your program for all values of n ≤ 4*/

#include <iostream>
using namespace std;

int main()
{


    return 0;
}
