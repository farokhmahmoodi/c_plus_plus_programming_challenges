/*Write a program that creates an encryption/decryption key and stores it in a text file. Messages to be
encrypted/decrypted will use only lower case letters, the blank space character, and the new line character. The
encryption key, which will also double as the decryption key, will be a pair of sequences of characters 'a', .. ,
'z', the blank character, and new line character. The first sequence will list all the characters in some order,
and the second will be a random permutation of the first. The program should store both the original and the
scrambled sequence in a file called “keyfile.txt” and close the file. The program should then open the file for
reading and echo its contents to the screen. Here is a possible output of the program.

abcdefghijklmnopqrstuvwxyz

ebatq
jy spcxdhrkfiwuzlvngmo

In this case, 'a' is mapped to 'e','b' to itself, 'c' to 'a', 'e' to 'q', 'f' to the new line character,
'g' to 'j','i' to the blank space, 'z' to 'g', the blank space to 'm', and the new line character to the
character 'o'.*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);
    vector<char> decryption;
    vector<char> encryption;
    fstream key("keyfile.txt");
    char ch;

    if (!key)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    for (int i = 97; i < 123; i++)
        decryption.emplace_back(i);
    decryption.emplace_back(' ');
    decryption.emplace_back('\n');
    for (auto it = decryption.begin(); it != decryption.end(); it++)
        encryption.emplace_back(*it);
    random_shuffle(encryption.begin(), encryption.end());
    for (auto elem : decryption)
        key << elem;
    for (auto elem : encryption)
        key << elem;
    key.close();
    key.open("keyfile.txt");
    if (!key)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    ch = key.get();
    while (ch != EOF)
    {
        cout << ch;
        ch = key.get();
    }
    key.close();

    return 0;
}