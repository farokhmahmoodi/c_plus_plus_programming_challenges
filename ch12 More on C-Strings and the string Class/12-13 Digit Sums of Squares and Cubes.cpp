/*If you add up all the digits in 468, you get 4 + 6 + 8 = 18. The square and cube of 468 are 219024 and 
102503232, respectively. Interestingly, if you add up the digits of the square or cube, you get 18 again. 
Are there other integers that share this property? Write a program that lists all positive integers k less 
than 1000 such that the three numbers k, k^2, and k^3 have digits that add up to the same number.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum1, sum2, sum3;

    cout << "All positive integers k less than 1000 such that the three " <<
        "numbers k, k ^ 2, and k ^ 3 have digits that add up to the same number listed below." << endl;
    for (int i = 0; i < 1000; i++)
    {
        string num = to_string(i);
        sum1 = sum2 = sum3 = 0;
        for (int x = 0; x < num.length(); x++)
        {
            sum1 += static_cast<int>(num[x] - 48);
        }
        num = to_string(i * i);
        for (int y = 0; y < num.length(); y++)
        {
            sum2 += static_cast<int>(num[y] - 48);
        }
        num = to_string(i * i * i);
        for (int z = 0; z < num.length(); z++)
        {
            sum3 += static_cast<int>(num[z] - 48);
        }
        if (sum1 == sum2 && sum2 == sum3 && sum1 == sum3)
        {
            cout << i << endl;
        }
    }

    return 0;
}
