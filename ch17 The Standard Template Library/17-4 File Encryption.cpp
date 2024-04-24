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

    if (!keyfile || !plain || !cipher)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    for (long keyPos = 0; keyPos < 28; keyPos++)
    {
        keyfile.seekg(keyPos, ios::beg);
        key2 = keyfile.get();
        keyfile.seekg(keyPos + 28, ios::beg);
        value = keyfile.get();
        key.emplace(key2, value);
    }
    keyfile.close();
    key2 = plain.get();
    while (key2 != EOF)
    {
        cout << key.at(key2);
        cipher << key.at(key2);
        key2 = plain.get();
    }
    plain.close();
    cipher.close();

    return 0;
}