/*Write a program that uses an initially empty file to store a sorted list of integers entered by the user. The 
integers are stored in binary form. Each time the program is run, it opens the file and outputs the list of 
stored integers onto the screen. The program then asks the user to enter a new integer X. The program then 
looks at the integer at the end of the file. If that integer is less than or equal to X, the program stores X 
at the end of the file and closes the file. Otherwise, the program starts at the end of the file and works 
toward the beginning, moving each value in the file that is greater than X up by one until it reaches the 
position in the file where X should be stored. The program then writes X at that position and closes the file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void selectionSort(int*, int);
void swap(int&, int&);

int main()
{
    fstream file("13-11.dat", ios::out | ios::app | ios::binary);
    int* numptr = nullptr, initialSize = 0;

    if (!file)
    {
        cout << "Error opening file.";
        return 0;
    }
    while (cout << "How many integers do you want to initially store in file?: "
        && !(cin >> initialSize)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for initial size." << endl;
        }
    numptr = new int[initialSize];
    for (int i = 0; i < initialSize; i++)
    {
        while (cout << "Enter integer " << i + 1 << ":"
            && !(cin >> numptr[i])) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer." << endl;
        }
    }
    selectionSort(numptr, initialSize);
    
    

    return 0;
}

void selectionSort(int* a, int size)
{
    int minIndex;
    int minValue;
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = *(a + start);
        for (int index = start + 1; index < size; index++)
        {
            if (*(a + index) < minValue)
            {
                minValue = *(a + index);
                minIndex = index;
            }
        }
        swap(*(a + minIndex), *(a + start));
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}