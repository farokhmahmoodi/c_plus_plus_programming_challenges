/*This program should be designed and written by a team of students. Here are some suggestions:

One student should design function main, which will call other program functions or class member functions.
The remainder of the functions will be designed by other members of the team.

The requirements of the program should be analyzed so each student is given about the same workload.

Write a program that uses a structure to store the following information about a customer account:

Name

Address

City, state, and ZIP

Telephone number

Account balance

Date of last payment


The structure should be used to store customer account records in a file. The program should have a menu that lets the
user perform the following operations:

Enter new records into the file

Search for a particular customer’s record and display it

Search for a particular customer’s record and delete it

Search for a particular customer’s record and change it

Display the contents of the entire file

Input Validation: When the information for a new account is entered, be sure the user enters data for all the fields.
No negative account balances should be entered.*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

const int NAME_SIZE = 31;

struct Account {
    char name[NAME_SIZE],
        address[NAME_SIZE],
        city[NAME_SIZE], state[NAME_SIZE];
     string dateOfLastPayment,
        zip, telephone;
    double accountBalance;
};

void displayMenu();
void enterNewRecord(fstream&, Account&);
bool validName(char*);
bool validAddress(char*);
bool validZip(string);
bool validDate(string);
void displayRecord(fstream&, Account&);
void deleteRecord(fstream&, Account&);
void editRecord(fstream&, Account&);
void displayWholeFile(fstream&, Account&);

int main()
{
    Account a;
    int choice;
    fstream file("13-17.dat", ios::out | ios::app | ios::binary);

    if (!file)
    {
        cout << "Error opening file." << endl;
        return 0;
    }
    do
    {
        do
        {
            displayMenu();
            while (!(cin >> choice)) {
                cin.clear(); //clear bad input flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                cout << "Invalid input for choice." << endl;
                displayMenu();
            }
            if (choice < 1 || choice > 6)
                cout << "Invalid input for choice.\n";
        } while (choice < 1 || choice > 6);
        cin.ignore();
        if (choice != 6)
        {
            switch (choice)
            {
            case 1:
                enterNewRecord(file, a);
                break;
            case 2:
                displayRecord(file, a);
                break;
            case 3:
                deleteRecord(file, a);
                break;
            case 4:
                editRecord(file, a);
                break;
            case 5:
                displayWholeFile(file, a);
                break;
            }
        }
    } while (choice != 6);
    file.close();

    return 0;
}

void displayMenu()
{
    cout << "1. Enter new records into the file\n";
    cout << "2. Search for a particular customer's record and display it.\n";
    cout << "3. Search for a particular customer’s record and delete it\n";
    cout << "4. Search for a particular customer’s record and change it\n";
    cout << "5. Display the contents of the entire file\n";
    cout << "6. Quit\n";
}

bool validName(char* in)
{
    int invalidCount = 0, total = 0;
    for (int i = 0; in[i] != '\0'; i++)
    {
        total++;
        if (!isalpha(in[i]))
        {
            invalidCount++;
        }
    }
    if (invalidCount == total)
        return false;
    else
        return true;
}

bool validAddress(char* in)
{
    int invalidCount = 0, total = 0,
        alphCount = 0, numCount = 0;
    for (int i = 0; in[i] != '\0'; i++)
    {
        total++;
        if (!isalnum(in[i]))
        {
            invalidCount++;
        }
        else if (isalpha(in[i]))
            alphCount++;
        else if (isdigit(in[i]))
            numCount++;
    }
    if (invalidCount == total || alphCount == 0 || numCount == 0)
        return false;
    else
        return true;
}

bool validZip(string z)
{
    if (z.length() != 5)
        return false;
    for (int i = 0; i < z.length(); i++)
    {
        if (!isdigit(z[i]))
            return false;
    }
    return true;
}

bool validTelephone(string t)
{
    if (t.length() != 12)
        return false;
    for (int i = 0; i < t.length(); i++)
    {
        if (i == 3 || i == 7)
        {
            if (t[i] != '-')
                return false;
        }
        else
        {
            if (!isdigit(t[i]))
                return false;
        }
    }
    return true;
}

bool validDate(string date)
{
    if (date.length() != 10)
    {
        return false;
    }
    if (date[2] != '/' || date[5] != '/')
    {
        return false;
    }
    for (int i = 0; i < date.length(); i++)
    {
        if (i != 2 && i != 5)
        {
            if (!isdigit(date[i]))
            {
                return false;
            }
        }
    }
    return true;
}

void enterNewRecord(fstream& file, Account& a)
{
    file.close();
    file.open("13-17.dat", ios::out | ios::app | ios::binary);
    bool valid;

    cout << "Enter information for new record below.\n";
    do
    {
        cout << "Name:";
        cin.getline(a.name, NAME_SIZE);
        valid = validName(a.name);
        if (!valid)
            cout << "Invalid input for name.\n";
    } while (!valid);
    do
    {
        cout << "Address:";
        cin.getline(a.address, NAME_SIZE);
        valid = validAddress(a.address);
        if (!valid)
            cout << "Invalid input for Address.\n";
    } while (!valid);
    do
    {
        cout << "City:";
        cin.getline(a.city,NAME_SIZE);
        valid = validName(a.city);
        if (!valid)
            cout << "Invalid input for city.\n";
    } while (!valid);
    do
    {
        cout << "State:";
        cin.getline(a.state, NAME_SIZE);
        valid = validName(a.state);
        if (!valid)
            cout << "Invalid input for state.\n";
    } while (!valid);
    do
    {
        cout << "ZIP code(no greater than 5 digits):";
        getline(cin,a.zip);
        valid = validZip(a.zip);
        if (!valid)
            cout << "Invalid zip code.\n";
    } while (!valid);
    do
    {
        cout << "Telephone number in the format XXX-XXX-XXXX:";
        getline(cin, a.telephone);
        valid = validTelephone(a.telephone);
        if (!valid)
            cout << "Invalid telephone number.\n";
    } while (!valid);
    do
    {
        while (cout << "Account balance:" &&
            !(cin >> a.accountBalance)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid input for account balance." << endl;
        }
        if (a.accountBalance < 0)
            cout << "Invalid input for account balance.\n";
    } while (a.accountBalance < 0);
    cin.ignore();
    do
    {
        cout << "Date of last payment in the format MM/DD/YYYY:";
        getline(cin, a.dateOfLastPayment);
        valid = validDate(a.dateOfLastPayment);
        if (!valid)
            cout << "Invalid date.\n";
    } while (!valid);
    file.write(reinterpret_cast<char*>(&a), sizeof(a));
    file.close();
}

void displayRecord(fstream& file, Account& a)
{
    file.close();
    file.open("13-17.dat", ios::in | ios::out | ios::binary);
    bool found = false;
    char input[NAME_SIZE];

    cout << "Enter the name of the customer whose record you would "
        << "like to display:";
    cin.getline(input, NAME_SIZE);
    while (!file.eof())
    {
        file.read(reinterpret_cast<char*>(&a), sizeof(a));
        if (strcmp(a.name,input) == 0)
        {
            cout << "Customer Record found and displayed below.\n";
            cout << "Name:" << a.name << endl;
            cout << "Address:" << a.address << endl;
            cout << "City, State, and ZIP:" << a.city << ", "
                << a.state << ", " << a.zip << endl;
            cout << "Telephone number:" << a.telephone << endl;
            cout << "Account balance:$" << fixed << showpoint
                << setprecision(2) << a.accountBalance << endl;
            cout << "Date of last payment:" << a.dateOfLastPayment << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Record not found with name entered.\n";
    file.close();
}

void deleteRecord(fstream& file, Account& a)
{
    file.close();
    file.open("13-17.dat", ios::in | ios::out | ios::binary);   
    bool found = false;
    char input[NAME_SIZE];
    long recNum = 0;

    cout << "Enter the name of the customer whose record you would "
        << "like to delete:";
    cin.getline(input,NAME_SIZE);
    while (!file.eof())
    {
        file.read(reinterpret_cast<char*>(&a), sizeof(a));
        if (strcmp(a.name, input) == 0)
        {
            Account b;
            file.seekp(recNum * sizeof(a), ios::beg);
            file.write(reinterpret_cast<char*>(&b), sizeof(b));
            found = true;
            break;
        }
        recNum++;
    }
    if (!found)
        cout << "Record not found with name entered.\n";
    file.close();
}

void editRecord(fstream& file, Account& a)
{
    file.close();
    file.open("13-17.dat", ios::in | ios::out | ios::binary);
    bool found = false, valid;
    char input[NAME_SIZE];
    long recNum = 0;

    cout << "Enter the name of the customer whose record you would "
        << "like to edit:";
    cin.getline(input, NAME_SIZE);
    while (!file.eof())
    {
        file.read(reinterpret_cast<char*>(&a), sizeof(a));
        if (strcmp(a.name, input) == 0)
        {
            file.seekp(recNum * sizeof(a), ios::beg);
            cout << "Enter information for record change below.\n";
            do
            {
                cout << "Name:";
                cin.getline(a.name, NAME_SIZE);
                valid = validName(a.name);
                if (!valid)
                    cout << "Invalid input for name.\n";
            } while (!valid);
            do
            {
                cout << "Address:";
                cin.getline(a.address, NAME_SIZE);
                valid = validAddress(a.address);
                if (!valid)
                    cout << "Invalid input for Address.\n";
            } while (!valid);
            do
            {
                cout << "City:";
                cin.getline(a.city, NAME_SIZE);
                valid = validName(a.city);
                if (!valid)
                    cout << "Invalid input for city.\n";
            } while (!valid);
            do
            {
                cout << "State:";
                cin.getline(a.state, NAME_SIZE);
                valid = validName(a.state);
                if (!valid)
                    cout << "Invalid input for state.\n";
            } while (!valid);
            do
            {
                cout << "ZIP code(no greater than 5 digits):";
                getline(cin, a.zip);
                valid = validZip(a.zip);
                if (!valid)
                    cout << "Invalid zip code.\n";
            } while (!valid);
            do
            {
                cout << "Telephone number in the format XXX-XXX-XXXX:";
                getline(cin, a.telephone);
                valid = validTelephone(a.telephone);
                if (!valid)
                    cout << "Invalid telephone number.\n";
            } while (!valid);
            do
            {
                while (cout << "Account balance:" &&
                    !(cin >> a.accountBalance)) {
                    cin.clear(); //clear bad input flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
                    cout << "Invalid input for account balance." << endl;
                }
                if (a.accountBalance < 0)
                    cout << "Invalid input for account balance.\n";
            } while (a.accountBalance < 0);
            cin.ignore();
            do
            {
                cout << "Date of last payment in the format MM/DD/YYYY:";
                getline(cin, a.dateOfLastPayment);
                valid = validDate(a.dateOfLastPayment);
                if (!valid)
                    cout << "Invalid date.\n";
            } while (!valid);
            file.write(reinterpret_cast<char*>(&a), sizeof(a));
            found = true;
            break;
        }
        recNum++;
    }
    if (!found)
        cout << "Record not found with name entered.\n";
    file.close();
}

void displayWholeFile(fstream& file, Account& a)
{
    file.close();
    file.open("13-17.dat", ios::in | ios::binary);
    file.read(reinterpret_cast<char*>(&a), sizeof(a));
    while (!file.eof())
    {
        cout << "Name:" << a.name << endl;
        cout << "Address:" << a.address << endl;
        cout << "City, State, and ZIP:" << a.city << ", "
             << a.state << ", " << a.zip << endl;
        cout << "Telephone number:" << a.telephone << endl;
        cout << "Account balance:$" << fixed << showpoint
                << setprecision(2) << a.accountBalance << endl;
        cout << "Date of last payment:" << a.dateOfLastPayment << endl;
        file.read(reinterpret_cast<char*>(&a), sizeof(a));
    }
    file.close();
}