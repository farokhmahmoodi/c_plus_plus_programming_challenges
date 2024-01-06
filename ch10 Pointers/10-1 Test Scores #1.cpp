/*Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores. 
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order. 
Another function should be called that calculates the average score. The program should display the sorted list of 
scores and averages with appropriate headings. Use pointer notation rather than array notation whenever possible.

Input Validation: Do not accept negative numbers for test scores.*/

#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(double *,int size);
void swap(double&,double&);
double calcAverage(double*, int size);

int main()
{
    double* a = nullptr,
            average;
    int scores;

    do
    {
        cout << "How many test scores would you like to enter? ";
        cin >> scores;
        if (scores <= 0)
            cout << "Input error. Number of test scores should be greater than 0." << endl;
    } while (scores <= 0);
    a = new double[scores];

    cout << endl << "Enter test scores below." << endl;
    for (int i = 0; i < scores; i++)
    {
        do
        {
            cout << "Test Score " << (i + 1) << ": ";
            cin >> *(a + i);
            if (*(a + i) < 0.0)
                cout << "Test score cannot be negative." << endl;
        } while (*(a + i) < 0.0);
    }
    selectionSort(a,scores);
    average = calcAverage(a, scores);

    cout << endl << setw(40) << "Test Scores sorted in ascending order" << endl;
    cout << "----------------------------------------------" << endl;
    cout << fixed << showpoint << setprecision(2);
    for (int i = 0; i < scores; i++)
        cout << *(a + i) << " ";
    cout << endl << endl;
    cout << "Average of test scores: " << average << endl;

    return 0;
}

void selectionSort(double* a, int size)
{
    int minIndex;
    double minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = *(a+start);
        for (int index = start + 1; index < size; index++)
        {
            if (*(a+index) < minValue)
            {
                minValue = *(a + index);
                minIndex = index;
            }
        }
        swap(*(a+minIndex), *(a+start));
    }
}

void swap(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}

double calcAverage(double* a, int size)
{
    double avg, total = 0.0;
    for (int i = 0; i < size; i++)
        total += *(a + i);
    avg = total / size;
    return avg;
}