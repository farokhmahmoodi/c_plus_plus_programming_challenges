// 

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