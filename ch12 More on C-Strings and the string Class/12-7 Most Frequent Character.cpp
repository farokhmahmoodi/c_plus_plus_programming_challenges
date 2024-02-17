/*Write a function that accepts either a pointer to a C-string or a string object as its argument.
The function should return the character that appears most frequently in the string.
Demonstrate the function in a complete program.*/

#include <iostream>
using namespace std;

char mostFrequent(const char*);
void selectionSort(char* a);
void swap(char& a, char& b);

int main()
{
    const int LENGTH = 101;
    char *a = new char[LENGTH];



    return 0;
}

char mostFrequent(const char* a)
{
    int index = 0;


}

void selectionSort(char* a)
{
    int minIndex, start = 0;
    char minValue;

    while (isprint(a[start]))
    {
        minIndex = start;
        minValue = a[start];
        for (int index = start + 1; isprint(a[index]); index++)
        {
            if (a[index] < minValue)
            {
                minValue = a[index];
                minIndex = index;
            }
        }
        swap(a[minIndex], a[start]);
        start++;
    }
}

void swap(char& a, char& b)
{
    char temp = a;
    a = b;
    b = temp;
}