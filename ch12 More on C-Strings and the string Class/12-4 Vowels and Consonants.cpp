/*Write a function that accepts a C-string as its argument. The function should count the number of vowels appearing in 
the string and return that number.

Write another function that accepts a C-string as its argument. This function should count the number of consonants 
appearing in the string and return that number.

Demonstrate the two functions in a program that performs the following steps:

    1.The user is asked to enter a string.

    2.The program displays the following menu:
        A.Count the number of vowels in the string
        B.Count the number of consonants in the string
        C.Count both the vowels and consonants in the string
        D.Enter another string
        E.Exit the program

    3.The program performs the operation selected by the user and repeats until the user selects E, to exit the program.*/

#include <iostream>
using namespace std;

int countVowels(const char*);
int countConsonants(const char*);

int main()
{
    const int LENGTH = 101;
    char choice;
    char* a = new char[LENGTH];

    cout << "Enter a string with no more than " << LENGTH - 1
        << " characters:";
    cin.getline(a, LENGTH);
    do
    {
        do
        {
            cout << "Select an option from menu below" << endl;
            cout << "A.Count the number of vowels in the string" << endl;
            cout << "B.Count the number of consonants in the string" << endl;
            cout << "C.Count both the vowels and consonants in the string" << endl;
            cout << "D.Enter another string" << endl;
            cout << "E.Exit the program" << endl;
            cin >> choice;
            cin.ignore();
            if (toupper(choice) != 'A' && toupper(choice) != 'B' &&
                toupper(choice) != 'C' && toupper(choice) != 'D' &&
                toupper(choice) != 'E')
                cout << "Invalid input for choice." << endl;
        } while (toupper(choice) != 'A' && toupper(choice) != 'B' &&
            toupper(choice) != 'C' && toupper(choice) != 'D' &&
            toupper(choice) != 'E');
        switch (toupper(choice))
        {
        case 'A':
            cout << "There are " << countVowels(a) << " vowels in the string: "
                << a << endl;
            break;
        case 'B':
            cout << "There are " << countConsonants(a) << " consonants in the string: "
                << a << endl;
            break;
        case 'C':
            cout << "There are " << countVowels(a) + countConsonants(a) 
                << " vowels and consonants in the string:"
                << a << endl;
            break;
        case 'D':
            cout << "Enter another string with no more than " << LENGTH - 1
                << " characters:";
            cin.getline(a, LENGTH);
            break;
        }
    } while (toupper(choice) != 'E');

    return 0;
}

int countVowels(const char* a)
{
    int count = 0, index = 0;

    while (a[index] != '\0')
    {
        if (tolower(a[index]) == 'a' || tolower(a[index]) == 'e'
            || tolower(a[index]) == 'i' || tolower(a[index]) == 'o'
            || tolower(a[index]) == 'u')
            count++;
        index++;
    }

    return count;
}

int countConsonants(const char* a)
{
    int count = 0, index = 0;

    while (a[index] != '\0')
    {
        if (tolower(a[index]) != 'a' && tolower(a[index]) != 'e'
            && tolower(a[index]) != 'i' && tolower(a[index]) != 'o'
            && tolower(a[index]) != 'u')
        {
            if(isalpha(a[index]))
                count++;
        }
        index++;
    }

    return count;
}
