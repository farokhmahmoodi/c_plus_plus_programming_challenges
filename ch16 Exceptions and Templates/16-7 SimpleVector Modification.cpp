/*Modify the SimpleVector class template, presented in this chapter, to include the member functions push_back and pop_back. 
These functions should emulate the STL vector class member functions of the same name. The push_back function should throw 
an exception if the array is full. The push_back function should accept an argument and insert its value at the end of the 
array. The pop_back function should accept no argument and remove the last element from the array. Test the class with a 
driver program.*/

#include <iostream>
#include <cstdlib>
#include <memory>
using namespace std;

// Exception for index out of range
struct IndexOutOfRangeException
{
    const int index;
    IndexOutOfRangeException(int ix) : index(ix) {}
};

struct ArrayFull //exception for full array
{
    const string state = "The array is full.\n";
    ArrayFull()
    {
        cout << state;
    }
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
    void pop_back();               //removes last element in the array
    void push_back(T);              //adds an element at end of array   
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
void SimpleVector<T>::push_back(T b)
{
    if (aptr[arraySize - 1] != T())
        throw ArrayFull();
    else
        aptr[arraySize - 1] = b;
}

template <class T>
void SimpleVector<T>::pop_back()
{

}

int main()
{
    const int SIZE = 10;

    SimpleVector<int> intTable(SIZE);
    SimpleVector<double> doubleTable(SIZE);
    int x;

    // Store values in the arrays
    for (int x = 0; x < SIZE - 1; x++)
        intTable[x] = (x * 2);
    cout << "Here is contents of integer array.\n";
    intTable.print();
    while (cout << "Enter an integer to put into last element in the integer array:" &&
        !(cin >> x)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid input for integer." << endl;
    }
    intTable.push_back(x);
    intTable.print();

    return 0;
}
