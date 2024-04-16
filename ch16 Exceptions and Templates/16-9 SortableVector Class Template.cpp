/*Write a class template named SortableVector. The class should be derived from the Simple-Vector class presented 
in this chapter. It should have a member function that sorts the array elements in ascending order. (Use the sorting 
algorithm of your choice.) Test the template in a driver program.*/

#include <iostream>
#include <cstdlib>
#include <memory>
#include <algorithm>
using namespace std;

// Exception for index out of range
struct IndexOutOfRangeException
{
    const int index;
    IndexOutOfRangeException(int ix) : index(ix) {}
};

template <class T>
class SimpleVector
{
    unique_ptr<T[]> aptr;
    int arraySize;
public:
    SimpleVector(int);                   // Constructor
    SimpleVector(const SimpleVector&);  // Copy constructor

    int size() const { return arraySize; }
    T& operator[](int);                  // Overloaded [] operator
    void print() const;                  // outputs the array elements
};

//*******************************************************
// Constructor for SimpleVector class. Sets the size    *
// of the array and allocates memory for it.            *
//*******************************************************
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    aptr = make_unique<T[]>(s);
    for (int count = 0; count < arraySize; count++)
        aptr[count] = T();
}
//******************************************************
// Copy Constructor for SimpleVector class.            *
//******************************************************
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
    arraySize = obj.arraySize;
    aptr = make_unique<T[]>(obj.arraySize);
    for (int count = 0; count < arraySize; count++)
        aptr[count] = obj[count];
}


//*******************************************************
// Overloaded [] operator. The argument is a subscript. *
// This function returns a reference to the element     *
// in the array indexed by the subscript.               *
//*******************************************************
template <class T>
T& SimpleVector<T>::operator[](int sub)
{
    if (sub < 0 || sub >= arraySize)
        throw IndexOutOfRangeException(sub);
    return aptr[sub];
}
//********************************************************
// prints all the entries is the array.                  *
//********************************************************
template <class T>
void SimpleVector<T>::print() const
{
    for (int k = 0; k < arraySize; k++)
        cout << aptr[k] << "  ";
    cout << endl;
}

template <class T>
class SortableVector : public SimpleVector<T>
{
public:
    // Constructor.
    SortableVector(int s) : SimpleVector<T>(s)
    { }
    // Copy constructor.		
    SortableVector(const SortableVector&);
    // Additional constructor. 
    SortableVector(const SimpleVector<T>& obj) :
        SimpleVector<T>(obj) { }
    void sort(); //sort array function
};

//******************************************
// Definition of the copy constructor.     *
//******************************************
template <class T>
SortableVector<T>::
SortableVector(const SortableVector& obj) :
    SimpleVector<T>(obj)
{
}

//Sort array in ascending order
template <class T>
void SortableVector<T>::sort()
{
    int minIndex;
    T minValue;

    for (int start = 0; start < (this->size() - 1); start++)
    {
        minIndex = start;
        minValue = this->operator[](start);
        for (int index = start + 1; index < this->size(); index++)
        {
            if (this->operator[](index) < minValue)
            {
                minValue = this->operator[](index);
                minIndex = index;
            }
        }
        swap(this->operator[](minIndex), this->operator[](start));
    }
}

int main()
{
    const int SIZE = 10;
    SortableVector<int> intTable(SIZE);

    // Store values in the vectors
    for (int x = 0; x < SIZE; x++)
    {
        while (cout << "Enter an integer to put into the array:" &&
            !(cin >> intTable[x])) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for integer." << endl;
        }
    }
    // Display the values in the vectors
    cout << "These values are in intTable:\n";
    for (int x = 0; x < SIZE; x++)
        cout << intTable[x] << " ";
    cout << endl;
    intTable.sort();
    cout << "Sorted array below.\n";
    for (int x = 0; x < SIZE; x++)
        cout << intTable[x] << " ";
    cout << endl;

    return 0;
}
