/*Write a program that reads prefix expressions and converts them to postfix. Each prefix expression should be entered on a 
separate line. The program should keep reading prefix expressions and converting them to postfix until a blank line is 
entered.*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void prefixToPostFix(istringstream&);
void prefixToPostFix(string, int);

int main()
{
    string input;

    cout << "Enter prefix expressions to convert to postfix.\n"
        << "Press enter after each expression,\n"
        << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a prefic expression to convert to postfix: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        prefixToPostFix(input, 0);
        // Get next line of input
        cout << "Enter a prefix expression to convert to postfix: ";
        getline(cin, input);
    }

    return 0;
}

void prefixToPostFix(istringstream& in)
{
    ostringstream post;
    char ch = in.peek();
    if (isdigit(ch))
    {
        post << ch;
        cout << post.str();
        //ch = in.get();
        //prefixToPostFix(in);
    }
}

void prefixToPostFix(string in, int index)
{
    //for (int i = 0; i < in.length(); i++)
    //{
    //    if (isdigit(in[i]) || isspace(in[i]))
    //        cout << in[i];
    //}
    //for (int i = 0; i < in.length(); i++)
    //{
    //    if (in[i] == '+' || in[i] == '-'
    //        || in[i] == '*' || in[i] == '/')
    //        cout << " " << in[i];
    //}
    //cout << endl;

    if (isdigit(in[index]) || isspace(in[index]))
        cout << in[index];
    if (index < in.length())
        prefixToPostFix(in, ++index);
    else
        cout << endl;
}
