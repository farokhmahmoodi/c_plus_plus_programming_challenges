/*Write a decryption program that reads the two text files “keyfile.txt" and "cipher.txt" created in the two 
previous problems. The “cipher.txt” file contains a message to be decrypted using the key in the "keyfile.txt" 
file. The message is decrypted by replacing each character in the scrambled sequence with the character at the 
same position in the original sequence. The output should be written to a file “plain.txt.”*/

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    fstream keyfile("keyfile.txt", ios::in),cipher("cipher.txt", ios::in)
        , plain("plain.txt", ios::out);
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
        if (keyPos == 26) //blank character exception
        {
            keyfile.seekg(-2L, ios::end);
            key2 = keyfile.get();
            key.emplace(key2, 32);
        }
        else
        {
            keyfile.seekg(keyPos, ios::beg);
            value = keyfile.get();
            valuePos += 28;
            keyfile.seekg(valuePos, ios::cur);
            key2 = keyfile.get();
            key.emplace(key2, value);
            valuePos = 0;
        }
    }
    keyfile.close();
    key2 = cipher.get();
    while (key2 != EOF)
    {
        plain << key.at(key2);
        key2 = cipher.get();
    }
    plain.close();
    cipher.close();

    return 0;
}
