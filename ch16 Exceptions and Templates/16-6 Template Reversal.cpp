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
    for (int i = 0; i < v1.size() - 1; i++)
    {
        
        output(v1);
    }
    output(v2);
    for (int i = 0; i < v2.size() - 1; i++)
    {

        output(v2);
    }
    output(v3);
    for (int i = 0; i < v3.size() - 1; i++)
    {
        
        output(v3);
    }
    output(v4);
    for (int i = 0; i < v4.size() - 1; i++)
    {

        output(v4);
    }

    return 0;
}
