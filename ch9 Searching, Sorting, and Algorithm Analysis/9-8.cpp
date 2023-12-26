#include <iostream>
using namespace std;

int linearSearch(const int[], int, int, int&);
int binarySearch(const int[], int, int, int&);

int main()
{
    const int SIZE = 20;
    int nums[SIZE] = {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    int lcount, bcount, value;
    lcount = bcount = 0;

    cout << "Enter a value to be searched for: ";
    cin >> value;
    lcount = linearSearch(nums, SIZE, value, lcount);
    cout << "It took " << lcount << " comparisons to search value in linear search." << endl;
    bcount = binarySearch(nums, SIZE, value, bcount);
    cout << "It took " << bcount << " comparisons to search value in binary search." << endl;
    return 0;
}

int linearSearch(const int a[], int size, int value, int& lcount)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found)
    {
        if (a[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
        lcount++;
    }
    return lcount;
}

int binarySearch(const int a[], int size, int value, int& bcount)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (a[middle] == value)
        {
           found = true;
           position = middle;
           bcount++;
        }
        else if (a[middle] > value)
        {
            last = middle - 1;
            bcount++;
        }    
        else
        {
            first = middle + 1;
            bcount++;
        }
    }
    return bcount;
}

