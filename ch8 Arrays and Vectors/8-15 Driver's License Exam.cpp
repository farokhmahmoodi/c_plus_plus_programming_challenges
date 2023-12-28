/*The State Department of Motor Vehicles (DMV) has asked you to write a program that grades the written portion of the 
driver’s license exam, which has 20 multiple- choice questions. Here are the correct answers:

 
1.B
5.C
9.C
13.D
17.C
2.D
6.A
10.D
14.A
18.B
3.A
7.B
11.B
15.D
19.D
4.A
8.A
12.C
16.C
20.A

To do this, you should create a TestGrader class. The class will have an answers array of 20 characters, which holds the 
correct test answers. It will have two public member functions that enable user programs to interact with the class: setKey 
and grade. The setKey function receives a 20-character string holding the correct answers and copies this information into its 
answers array. The grade function receives a 20-character array holding the test taker’s answers and compares each of their 
answers to the correct one. An applicant must correctly answer 15 or more questions to pass the exam. After “grading” the exam, 
the grade function should create and return to the user a string that includes the following information:

A message indicating whether the applicant passed or failed the exam

The number of right answers and the number of wrong answers

A list of the question numbers for all incorrectly answered questions

The client program that creates and uses a TestGrader object should first make a single call to setKey, passing it a 
string containing the 20 correct answers. Once this is done, it should allow a test taker’s 20 answers to be entered, making 
sure only answers of A–D are accepted, and store them in a 20-character array. Then it should call the grade function to grade 
the exam and should display the string the function returns. The program should loop to allow additional tests to be entered and 
graded until the user indicates a desire to quit.*/

#include "TestGrader.h"

int main()
{
    TestGrader a;
    char choice, test[20];
    a.setKey("BDAACABACDBCDADCCBDA");
    do
    {
        for (int i = 0; i < 20; i++)
        {
            do
            {
                cout << "Enter answer (A-D) for question " << (i + 1)
                    << ":";
                cin >> test[i];
                if (test[i] < 65 || test[i] > 68)
                    cout << "Input error. Answer must be A-D." << endl;
            } while (test[i] < 65 || test[i] > 68);
        }
        cout << a.grade(test) << endl;
        cout << "Would you like to grade another test? (Y\\N)";
        cin >> choice;
        cin.ignore();
    } while (toupper(choice) != 'N');
    return 0;
}