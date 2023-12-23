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
