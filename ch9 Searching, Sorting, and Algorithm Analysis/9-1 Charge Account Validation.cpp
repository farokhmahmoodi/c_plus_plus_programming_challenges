/*Write a program that lets the user enter a charge account number. The program should determine if the number is valid by 
checking for it in the following list:

5658845	4520125	7895122	8777541	8451277	1302850
8080152	4562555	5552012	5050552	7825877	1250255
1005231	6545231	3852085	7576651	7881200	4581002
Initialize a one-dimensional array with these values. Then use a simple linear search to locate the number entered by the user. 
If the user enters a number that is in the array, the program should display a message saying the number is valid. If the user 
enters a number not in the array, the program should display a message indicating it is invalid.*/

#include "Validation.h"

int main()
{
    Validation a;
    int value;
    char choice;
    do
    {
        cout << "Enter a charge account number to validate: ";
        cin >> value;
        a.linearSearch(value);
        cout << "Would you like to enter another number? (y/n)";
        cin >> choice;
    } while (toupper(choice) == 'Y');
    
    return 0;
}
