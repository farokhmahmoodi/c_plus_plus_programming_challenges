/*In statistics the mode of a set of values is the value that occurs most often. 
Write a program that determines how many pieces of pie most people eat in a year. 
Set up an integer array that can hold responses from 30 people. For each person, enter the number of pieces they say they eat in a year. 
Then write a function that finds the mode of these 30 values. This will be the number of pie slices eaten by the most people. 
The function that finds and returns the mode should accept two arguments, an array of integers, and a value indicating how many elements 
are in the array.*/

#include <iostream>
using namespace std;

const int SIZE = 30;

void getData(int[], int);
int findMode(int[], int);

int main()
{
    int a[SIZE], mode;

    getData(a, SIZE);
    cout << "The mode is " << findMode(a, SIZE) << "." << endl;

    return 0;
}

void getData(int a[], int size)
{
    cout << "Enter number of pieces of pie these people eat in a year below." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Person " << (i + 1) << ": ";
        cin >> a[i];
    }
}

int findMode(int a[], int size)
{
    int *b = a; //pointer to the array to compare values to
    int count[SIZE] = {0}, //count array to hold many times a value occurs in the array
        modeIndex, 
        modeValue;

    for (int x = 0; x < size; x++) //for stepping through pointer to int array
    {
        for (int i = 0; i < size; i++) //for stepping through int array
        {
            if (a[i] == *b)
                count[x]++;
        }
        b++;
    }

    modeIndex = count[0];
    modeValue = a[0];
    for (int i = 1; i < size; i++) //finding value that occurs most in array by comparing count values
    {
        if (count[i] > modeIndex)
        {
            modeIndex = count[i];
            modeValue = a[i];
        }
    }

    return modeValue;
}
