/*Write a program that reads the contents of a text file. The program should create a map in which the 
key-value pairs are described as follows:

Key—the keys are the individual words found in the file

Values—each value is a set that contains the line numbers in the file where the word (the key) is found.

For example, suppose the word "robot" is found in lines 7, 18, 94, and 138. The map would contain an element 
in which the key was the string "robot", and the value was a set containing the numbers 7, 18, 94, and 138.

Once the map is built, the program should create another text file, known as a word index, listing the 
contents of the map. The word index file should contain an alphabetical listing of the words that are 
stored as keys in the map, along with the line numbers where the words appears in the original file. 
Figure 17-9 shows an example of an original text file (“Kennedy.txt”) and its index file (“index.txt”). 
Consider a word to any run of characters delimited by white space.*/

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    

    return 0;
}
