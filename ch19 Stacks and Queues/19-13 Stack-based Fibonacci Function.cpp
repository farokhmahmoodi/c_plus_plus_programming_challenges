/*Use a stack to remove recursion from the implementation of the Fibonacci function discussed in Section 14.4.*/

#include <iostream>
#include <stack>
using namespace std;

int fib(int);   // Function prototype

int main()
{
    cout << "The first 10 Fibonacci numbers are:\n";
    for (int x = 0; x < 10; x++)
        cout << fib(x) << " ";
    cout << endl;
    return 0;
}

//*****************************************
// Function fib. Accepts an int argument  *
// in n. This function returns the nth    *
// Fibonacci number.                      *
//*****************************************
int fib(int n)
{
    if (n <= 0)        //base case
        return 0;
    else if (n == 1)   //base case
        return 1;
    else    //if n >= 2
    {
        int value = 0, current = 0;
        stack<int> fStack;
        fStack.push(n);
        while(!fStack.empty())
        {
            current = fStack.top();
            fStack.pop();
            if(current <= 1)
            {
                if(current == 1)
                    value += 1;
            }
            else
            {
                fStack.push(current - 1);
                fStack.push(current - 2);
            }
        }
        return value;
    }
}
