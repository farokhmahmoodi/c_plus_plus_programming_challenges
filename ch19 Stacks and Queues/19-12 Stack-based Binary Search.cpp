/*Imitate the technique of Section 19.7 and use a stack to remove recursion from the binary search algorithm.*/

#include <iostream>
using namespace std;

int binarySearch(const int array[], int first, int last, int value);

int main()
{


    return 0;
}

int binarySearch(const int array[], int first, int last, int value)
{
   int middle;         // mid point of search
   if (first > last)   // base case
      return −1;
   middle = (first + last) / 2;
   if (array[middle] == value)
      return middle;
   if (array[middle] < value)
      return binarySearch(array, middle+1,last,value);
   else
      return binarySearch(array, first,middle–1,value);
}
