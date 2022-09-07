#include <iostream>
using namespace std;

int main()
{

    // Leet Code Problem - 1
    // Subtract the Product and Sum of Digits of an Integer

    int n = 234;

    int sum = 0;
    int product = 1;

    while (n != 0)
    {

        int digit = n % 10;
        product = digit * product;
        sum = digit + sum;

        n = n / 10;
    }

    int result = product - sum;
    cout << result << endl;

     return 0;
}
