#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
    // LeetCode Problem - 3
    // Reverse an Integer

    int n = 123;
    int reverseNumber = 0;

    while (n != 0)
    {

        int remainder = n % 10;

        if ((reverseNumber > INT_MAX / 10) || (reverseNumber < INT_MIN / 10))
        {
            cout << 0 << endl;
        }

        reverseNumber = reverseNumber * 10 + remainder;
        n = n / 10;
    }
    cout << reverseNumber << endl;

    return 0;
}
