/*Write a program that solves the problem of Programming Challenge 3, 
except that the array of pointer points to the data array in descending order of age.*/

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
    Person data[10] = { "James",25, "Rohan",32,"Lilia",24,
        "Hanna",26, "Jax",30, "Mario",35,
        "Paloma",42,"Jaylee",38,"Derrick",52,"Kristin",46 };
    Person* pData = new Person[10];
    pData = data; //pointer points to data array
    selectionSort(pData);
    cout << "People sorted by age in descending order below." << endl;
    displayData(pData);

    return 0;
}

void selectionSort(Person* a)
{
    int maxIndex;
    int maxValue;

    for (int start = 0; start < (10 - 1); start++)
    {
        maxIndex = start;
        maxValue = (a + start)->age;
        for (int index = start + 1; index < 10; index++)
        {
            if ((a + index)->age > maxValue)
            {
                maxValue = (a + index)->age;
                maxIndex = index;
            }
        }
        swap(*(a + maxIndex), *(a + start));
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
        cout << (a + i)->name << "," << (a + i)->age << "  "; //name, age
    cout << endl;
}
