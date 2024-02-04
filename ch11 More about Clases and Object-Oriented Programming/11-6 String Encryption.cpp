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


};

int main()
{
    

    return 0;
}
