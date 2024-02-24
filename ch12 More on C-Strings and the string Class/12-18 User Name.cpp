/*Write a program that queries its environment, determines the user’s login name, and then greets the user by name. 
For example, if the login name of the user is gcm, then the program prints

Hello, gcm
when it is executed.*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    extern char** environ; //Needed to access the environment
    ostringstream ostr;
    int k = 0;

    while (environ[k] != 0) //querying environment
    {
        istringstream istr(environ[k]);
        string temp;
        istr >> temp;
        if (temp.find("USERNAME=", 0) != -1)
        {
            temp.erase(temp.find("USERNAME=", 0), 9);
            ostr << "Hello, " << temp << endl;
            break;
        }
        k++;
    }
    cout << ostr.str();

    return 0;
}

