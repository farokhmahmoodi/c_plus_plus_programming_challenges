/*Write an encryption program that reads two text files: the “keyfile.txt” created in the preceding problem, 
and a second file “plain.txt” containing a message to be encrypted using the key in the “keyfile.txt” file. The 
message will consist only of lowercase characters, spaces and new lines. The message is encrypted by replacing 
each character in the original sequence with the character at the same position in the scrambled sequence. The 
output should be echoed to the screen and simultaneously written to a file “cipher.txt.”*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream key("keyfile.txt", ios::in), plain("plain.txt", ios::in),
        cipher("cipher.txt", ios::in | ios::out);
    if (!key || !plain || !cipher)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    

    return 0;
}
