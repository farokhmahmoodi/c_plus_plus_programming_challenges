/*Write an encryption program that reads two text files: the “keyfile.txt” created in the preceding problem, 
and a second file “plain.txt” containing a message to be encrypted using the key in the “keyfile.txt” file. The 
message will consist only of lowercase characters, spaces and new lines. The message is encrypted by replacing 
each character in the original sequence with the character at the same position in the scrambled sequence. The 
output should be echoed to the screen and simultaneously written to a file “cipher.txt.”*/

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    fstream keyfile("keyfile.txt", ios::in), plain("plain.txt", ios::in),
        cipher("cipher.txt", ios::out);
    map<char, char> key;
    char key2, value;
    long valuePos = 0;

    if (!keyfile || !plain || !cipher)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    for (long keyPos = 0; keyPos < 28; keyPos++)
    {
        keyfile.seekg(keyPos, ios::beg);
        key2 = keyfile.get();
        valuePos += 28;
        keyfile.seekg(valuePos, ios::cur);
        value = keyfile.get();
        cout << key2 << value << endl;
        //key.emplace(key2, value);
        valuePos = 0;
    }

    return 0;
}
