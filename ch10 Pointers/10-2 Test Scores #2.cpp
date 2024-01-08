/*Modify the program of Programming Challenge 1 to allow the user to enter name–score pairs. For each student taking a 
test, the user types a string representing the name of the student, followed by an integer representing the student’s 
score. Modify both the sorting and average-calculating functions so they take arrays of structures, with each structure 
containing the name and score of a single student. In traversing the arrays, use pointers rather than array indices.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
    string name;
    int score;
};

void getData(Student*, int);
void selectionSort(Student*, int);
void swap(Student&, Student&);
double calcAverage(Student*, int);
void displayReport(Student*, int, double);

int main()
{
    Student* a = nullptr;
    double average;
    int size;

    do
    {
        cout << "How many student's test scores would you like to enter? ";
        cin >> size;
        if (size <= 0)
            cout << "Input error. sizeber of test scores should be greater than 0." << endl;
    } while (size <= 0);
    a = new Student[size];
    cin.ignore();
    getData(a, size);
    selectionSort(a, size);
    average = calcAverage(a, size);
    displayReport(a, size, average);

    return 0;
}

void getData(Student* a, int size)
{
    cout << endl << "Enter student names and test scores below." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        getline(cin,(a+i)->name);
        do
        {
            cout << "Test Score " << (i + 1) << ": ";
            cin >> (a+i)->score;
            cin.ignore();
            if ((a+i)->score < 0)
                cout << "Test score cannot be negative." << endl;
        } while ((a+i)->score < 0);

    }
}

void selectionSort(Student* a, int size)
{
    int minIndex;
    double minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = (a+start)->score;
        for (int index = start + 1; index < size; index++)
        {
            if ((a + index)->score < minValue)
            {
                minValue = (a + index)->score;
                minIndex = index;
            }
        }
        swap(*(a + minIndex), *(a + start));
    }
}

void swap(Student& a, Student& b)
{
    Student temp = a;
    a = b;
    b = temp;
}

double calcAverage(Student* a, int size)
{
    double avg;
    int total = 0;
    for (int i = 0; i < size; i++)
        total += (a+i)->score;
    avg = static_cast<double>(total) / size;
    return avg;
}

void displayReport(Student* a, int size, double avg)
{
    cout << endl << "Students sorted by test scores in ascending order below." << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    for (int i = 0; i < size; i++)
        cout << (a + i)->name << "," << (a + i)->score << "  ";
    cout << endl << endl;
    cout << fixed << showpoint << setprecision(1) << "Average of scores: " << avg << endl;
}

