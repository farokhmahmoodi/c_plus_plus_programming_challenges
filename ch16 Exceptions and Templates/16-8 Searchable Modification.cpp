/*Modify the SearchableVector class template, presented in this chapter, so it performs a binary search instead 
of a linear search. Test the template in a driver program.*/

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
class SearchableVector : public SimpleVector<T>
{
public:
    // Constructor.
    SearchableVector(int s) : SimpleVector<T>(s)
    { }
    // Copy constructor.		
    SearchableVector(const SearchableVector&);
    // Additional constructor. 
    SearchableVector(const SimpleVector<T>& obj) :
        SimpleVector<T>(obj) { }
    int findItem(T);
};

//******************************************
// Definition of the copy constructor.     *
//******************************************
template <class T>
SearchableVector<T>::
SearchableVector(const SearchableVector& obj) :
    SimpleVector<T>(obj)
{
}

//******************************************
// findItem takes a parameter of type T    *
// and searches for it within the array.   *
//******************************************
template <class T>
int SearchableVector<T>::findItem(T item)
{
    for (int count = 0; count < this->size(); count++)
    {
        if (this->operator[](count) == item)
            return count;
    }
    return -1;
}

int main()
{
    const int SIZE = 10;
    SearchableVector<int> intTable(SIZE);

    // Store values in the vectors
    for (int x = 0; x < SIZE; x++)
    {
        intTable[x] = (x * 2);
    }
    // Display the values in the vectors
    cout << "These values are in intTable:\n";
    for (int x = 0; x < SIZE; x++)
        cout << intTable[x] << " ";
    cout << endl;

    // Now search for values in the vectors 
    int result;
    cout << "Searching for 6 in intTable.\n";
    result = intTable.findItem(6);
    if (result == -1)
        cout << "6 was not found in intTable.\n";
    else
        cout << "6 was found at subscript "
        << result << endl;

    return 0;
}
