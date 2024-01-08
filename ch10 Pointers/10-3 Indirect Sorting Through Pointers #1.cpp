/*Consider a company that needs to sort an array Person data[10] of structures of type Person by name.


struct Person
{
   string name;
   int age;
}
In real life the Person structures may have many members and occupy a large area of memory, making it computationally 
expensive to move Person objects around while sorting. You can define an auxiliary array Person *pData[10], 
setting each entry of pData[k] to point to the corresponding entry of data[k]. Write a program that sorts the array of 
pointers so that when you go through pData in increasing order of index k, the entries pData[k] point to Person objects in 
ascending alphabetic order of names.*/

#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};

void selectionSort(Person*);
void swap(Person&, Person&);
void displayData(Person*);

int main()
{
    Person data[10] = {"James",25, "Rohan",32,"Lilia",24,
        "Hanna",26, "Jax",30, "Mario",35,
        "Paloma",42,"Jaylee",38,"Derrick",52,"Kristin",46};
    Person* pData = new Person[10];
    pData = data;
    selectionSort(pData);
    cout << "People sorted by names in ascending order below." << endl;
    displayData(pData);
    
    return 0;
}

void selectionSort(Person* a)
{
    int minIndex;
    string minValue;

    for (int start = 0; start < (10 - 1); start++)
    {
        minIndex = start;
        minValue = (a+start)->name;
        for (int index = start + 1; index < 10; index++)
        {
            if ((a+index)->name < minValue)
            {
                minValue = (a+index)->name;
                minIndex = index;
            }
        }
        swap(*(a + minIndex), *(a + start));
    }
}

void swap(Person& a, Person& b)
{
    Person temp = a;
    a = b;
    b = temp;
}

void displayData(Person* a)
{
    for (int i = 0; i < 10; i++)
        cout << (a+i)->name << "," << (a+i)->age << "  ";
    cout << endl;
}