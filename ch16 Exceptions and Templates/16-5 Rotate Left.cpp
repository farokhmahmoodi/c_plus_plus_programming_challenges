/*The two sets of output below show the results of successive circular rotations of a vector. One set of data is for a 
vector of integers, and the second is for a vector of strings.

1 3 5 7
3 5 7 1
5 7 1 3
7 1 3 5
a b c d e
b c d e a
c d e a b
d e a b c
e a b c d

Write two template functions that can be used to rotate and output a vector of a generic type:

void rotateLeft(vector <T>& v)
void output(vector <T> v)

The first function performs a single circular left rotation on a vector, and the second prints out the vector passed 
to it as parameter. Write a suitable driver program that will allow you to test the two functions by generating 
output similar to the above. Verify that the program works with vectors whose element types are char, int, double,
and string.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template<class T>
void rotateLeft(vector <T>& v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        swap(v[i], v[i + 1]);
    }
}

template<class T>
void output(vector <T> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> v1 = { 1,3,5,7 };
    vector<string> v2 = { "a","b","c","d","e"};

    output(v1);
    for (int i = 0; i < v1.size() - 1; i++)
    {
        rotateLeft(v1);
        output(v1);
    }
    output(v2);
    for (int i = 0; i < v2.size() - 1; i++)
    {
        rotateLeft(v2);
        output(v2);
    }
 
    return 0;
}
