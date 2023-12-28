/*Program 8-31 from Chapter 8 creates an array of four Circle objects, then displays the area of each object. Using a copy of 
that program as a starting point, modify it to create an array of seven Circle objects initialized with the following radii: 2.5, 
4.0, 1.0, 3.0, 6.0, 5.5, 2.0. Then use a bubble sort to arrange the objects in ascending order of radius size before displaying 
the radius and area of each object.*/

#include <iostream>
#include <iomanip>
#include "Circle.h"
using namespace std;

const int NUM_CIRCLES = 7;

void bubbleSort(Circle[],int);
void swap(Circle&, Circle&);

int main()
{
    Circle circle[NUM_CIRCLES] = { 2.5,4.0,1.0,3.0,6.0,5.5,2.0 };

    bubbleSort(circle, NUM_CIRCLES);
    cout << fixed << showpoint << setprecision(2);
    cout << "Here are the radii and areas of the " << NUM_CIRCLES
        << " circles.\n";
    for (int index = 0; index < NUM_CIRCLES; index++)
    {
        cout << "circle " << (index + 1) << setw(10) << "Radius: "
            << circle[index].getRadius() << setw(8) << "Area: "
            << circle[index].findArea() << endl;
    }

    return 0;
}

void bubbleSort(Circle a[], int size)
{
    bool madeAswap = true;
    for (int maxElement = size - 1, passcount = 0; maxElement > 0 && madeAswap; maxElement--)
    {
        madeAswap = false;
        for (int index = 0; index < maxElement; index++)
        {
            if (a[index].getRadius() > a[index + 1].getRadius())
            {
                swap(a[index], a[index + 1]);
                madeAswap = true;
            }
        }
    }
}

void swap(Circle &a, Circle &b)
{
    Circle temp = a;
    a = b;
    b = temp;
}