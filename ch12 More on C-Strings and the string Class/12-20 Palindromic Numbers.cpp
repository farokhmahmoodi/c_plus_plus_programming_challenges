/*A palindromic number is a positive integer that reads the same forward as backward. For example, the numbers 1, 11, and 
121 are palindromic. Moreover, 1 and 11 are very special palindromic numbers: their squares are also palindromic. How many 
positive integers less than 10,000 have this property? Write a program to list all such numbers together with their squares.

The beginning part of your output should look like this:

1 has square 1
2 has square 4
3 has square 9
11 has square 121
22 has square 484

Hint: If str is a string object, the reverse() function (declared in <algorithm> header) will reverse the string. 
The code to do that is:

reverse(str.begin(), str.end());*/

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

void palindrome(int);

int main()
{
	for (int i = 1; i < 1000; i++)
	{
		palindrome(i);
	}

	return 0;
}

void palindrome(int n)
{
	ostringstream ostr, ostr2, palin;
	istringstream istr, istr2, istr3, istr4;
	string num, numReversed, square, squareReversed;

	ostr << n;
	istr.str(ostr.str()), istr2.str(ostr.str());
	istr >> num, istr2 >> numReversed;
	reverse(numReversed.begin(), numReversed.end());
	if (num == numReversed) //if integer is palindrome
	{
		ostr2 << n * n;
		istr3.str(ostr2.str()), istr4.str(ostr2.str());
		istr3 >> square, istr4 >> squareReversed;
		reverse(squareReversed.begin(), squareReversed.end());
		if (square == squareReversed) //if integer squared is palindrome
		{
			palin << num << " has square " << square << endl;
			cout << palin.str();
		}
	}
}