/*Write a class EncryptableString that is derived from the STL string class. The Encryptable string class adds a member 
function

void encrypt()

that encrypts the string contained in the object by replacing each letter with its successor in the ASCII ordering. For 
example, the string baa would be encrypted to cbb. Assume that all characters that are part of an EncryptableString 
object are letters a, .., z and A, .., Z, and that the successor of z is a and the successor of Z is A. Test your class
with a program that asks the user to enter strings that are then encrypted and printed.*/

#include <iostream>
#include <string>
using namespace std;

class EncryptableString : public string
{
private:
    string plainText,encryptedText;
public:
    EncryptableString()
    {
        plainText = "";
    }
    EncryptableString(string s)
    {
        plainText = s;
    }
    void encrypt()
    {
        for (int i = 0; i < plainText.size(); i++)
        {
            if (plainText[i] == 'z')
                encryptedText += 'a';
            else if (plainText[i] == 'Z')
                encryptedText += 'A';
            else
                encryptedText += plainText[i] + 1;
        }
        cout << "String " << plainText << " encrypted is " << encryptedText << endl;
    }
};

int main()
{
    int choice;
    string in;

    do
    {
        cout << "Enter a string and the program will encrypt it:";
        getline(cin, in);
        EncryptableString test(in);
        test.encrypt();
        do
        {
            cout << "Would you like to enter another string to encrypt?"
                << "(1 for yes/2 for no):";
            cin >> choice;
            if (choice != 1 && choice != 2)
                cout << "Invalid input for choice." << endl;
            cin.ignore();
        } while (choice != 1 && choice != 2);
    } while (choice != 2);

    return 0;
}

