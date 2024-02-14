/*Write a function that accepts a C-string as an argument and returns the number of words contained in the string. 
For instance, if the string argument is “Four score and seven years ago” the function should return the number 6. 
Demonstrate the function in a program that asks the user to input a string and then passes it to the function. 
The number of words in the string should be displayed on the screen.*/

#include <iostream>
using namespace std;

int numWords(const char *);

int main()
{
    const int LENGTH = 201;
    char choice, *test = nullptr;
    test = new char[LENGTH];

    do
    {
        cout << "Enter a string with no more than 200 characters and the program will determine how many "
            << "words are in the string:";
        cin.getline(test, LENGTH);
        cout << "There are " << numWords(test) << " words in the string "
            << test << endl;
        cout << "Would you like to run this program again? (Y for yes/N for no)";
        cin >> choice;
        while (toupper(choice) != 'Y' && toupper(choice) != 'N')
        {
            cout << "Invalid input for choice." << endl;
            cout << "Would you like to run this program again? (Y for yes/N for no)";
            cin >> choice;
        }
        cin.ignore();
    } while (toupper(choice) != 'N');

    return 0;
}

int numWords(const char *a)
{
    int index = 0, count = 0;

    if (a[index] != ' ')
        count++;

    while (a[index] != '\0')
    {
        if (isspace(a[index]))
        {
            if (a[index + 1] != ' ' && a[index+1] != '\0')
                count++;
        }
        index++;
    }
    
    return count;
}
