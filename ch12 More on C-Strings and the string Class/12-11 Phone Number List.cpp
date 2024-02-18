/*Write a program that has an array of at least 10 string objects that hold people’s names and phone numbers. 
You may make up your own strings or use the following:

"Hoshikawa Tanaka, 678–1223"
"Joe Looney, 586–0097"
"Geri Palmer, 223–8787"
"Lynn Lopez, 887–1212"
"Holly Gaddis, 223–8878"
"Sam Wiggins, 486–0998"
"Bob Kain, 586–8712"
"Tim Haynes, 586–7676"
"Warren Gaddis, 223–9037"
"Jean James, 678–4939"
"Ron Palmer, 486–2783"

The program should ask the user to enter a name or partial name to search for in the array. 
Any entries in the array that match the string entered should be displayed. 
For example, if the user enters “Palmer”, the program should display the following names from the list:

Geri Palmer, 223–8787
Ron Palmer, 486–2783*/

#include <iostream>
#include <string>
using namespace std;

void searchName(const string[],string);

int main()
{
    string a[11] = {"Hoshikawa Tanaka, 678–1223", "Joe Looney, 586–0097","Geri Palmer, 223–8787",
    "Lynn Lopez, 887–1212","Holly Gaddis, 223–8878","Sam Wiggins, 486–0998","Bob Kain, 586–8712" ,
    "Tim Haynes, 586–7676","Warren Gaddis, 223–9037","Jean James, 678–4939","Ron Palmer, 486–2783"};
    string value;

    for (int i = 0; i < 11; i++)
        cout << a[i] << endl;
    cout << "Enter a name or partial name to search for in list above:";
    getline(cin, value);
    searchName(a, value);

    return 0;
}

void searchName(const string a[], string value)
{
    for (int i = 0; i < a->size(); i++)
    {
        if (a[i].find(value) != -1) //if find function does not return static member string::npos of thestring class
            cout << a[i] << endl;
    }
}