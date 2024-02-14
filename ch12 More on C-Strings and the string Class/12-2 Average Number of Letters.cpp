/*Modify the program you wrote for Problem 1 (Word Counter), so that it also displays the average number of 
letters in each word.*/

#include <iostream>
using namespace std;

int numWords(const char*);
int averageNumLettersInEachWord(const char*);

int main()
{
    const int LENGTH = 201;
    char choice, * test = nullptr;
    test = new char[LENGTH];

    do
    {
        cout << "Enter a string with no more than 200 characters and the program will determine how many "
            << "words are in the string:";
        cin.getline(test, LENGTH);
        cout << "There are " << numWords(test) << " words in the string: "
            << test << endl;
        cout << "The average number of letters in each word of this string is "
            << averageNumLettersInEachWord(test) << endl;
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

int numWords(const char* a)
{
    int index = 0, count = 0;

    if (a[index] != ' ')
        count++;

    while (a[index] != '\0')
    {
        if (isspace(a[index]))
        {
            if (a[index + 1] != ' ' && a[index + 1] != '\0')
                count++;
        }
        index++;
    }

    return count;
}

int averageNumLettersInEachWord(const char* a)
{
    int index = 0, avg, sum = 0, hold = 0;       

    while (a[index] != '\0')
    {
        if (isspace(a[index]))
        {
            if (a[index + 1] != ' ' && a[index + 1] != '\0')
            {

            }
        }
        index++;
    }
    avg = sum / numWords(a);
    return avg;
}
