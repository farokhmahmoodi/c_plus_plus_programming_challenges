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
    char *a = new char[LENGTH], *sorted = new char[LENGTH];

    cout << "Enter a string no greater than "
        << LENGTH - 1 << " characters:";
    cin.getline(a, LENGTH);
    strcpy(sorted, a);
    selectionSort(sorted);
    cout << "The most frequent character in the string is "
        << mostFrequent(sorted) << endl;

    return 0;
}

char mostFrequent(const char* a)
{
    int index = 0, mode = 0, hold = 0;
    char most, current;
    most = current = a[index];

    while (isprint(a[index]))
    {
        if (a[index] != current)
        {
            current = a[index];
            mode = 0;
        }
        mode++;
        if (mode > hold)
        {
            hold = mode;
            most = current;
        }
        index++;
        cout << "current:" << current << endl;
        cout << "most:" << most << endl;
        cout << "mode:" << mode << endl << endl;
    }

    return most;
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