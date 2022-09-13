#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
    

    // LeetCode Problem - 4
    // Compliment of base 10

    int n = 5;
    int mask = 0;

    // Edge Case (Exception case where n = 0)
    if (n == 0)
        return 1;

    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }

    int result = (~n) & mask;
    cout << result << endl;

    return 0;
}
