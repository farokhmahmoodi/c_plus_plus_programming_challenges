/*Write a template function that takes as parameter a vector of a generic type and reverses the order of elements 
in the vector, and then add the function to the program you wrote for Programming Challenge 5. Modify the driver program 
to test the new function by reversing and outputting vectors whose element types are char, int, double, and string.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template<class T>
void rotateLeft(vector <T>& v)
{
    for (int i = 0; i < v.size() - 1; i++)
        swap(v[i], v[i + 1]);
}

template<class T>
void reverse(vector <T>& v)
{
    int last = v.size() - 1;
    for (int i = 0; i < last; i++)
    {
        swap(v[i], v[last]);
        last--;
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
    vector<string> v2 = { "a","b","c","d","e" };
    vector<double> v3 = { 52.35,-34.56,8604.453, 235.7654 };
    vector<char> v4 = { '%',')', '4', '!', '{' };

    output(v1);
    reverse(v1);
    output(v1);
    output(v2);
    reverse(v2);
    output(v2);
    output(v3);
    reverse(v3);
    output(v3);
    output(v4);
    reverse(v4);
    output(v4);

    return 0;
}
