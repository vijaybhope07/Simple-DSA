#include <iostream>
using namespace std;

/**
 * Solution for finding the integer square root of a non-negative number.
 *
 * Author: Your Name
 * GitHub: https://github.com/VeeruYadav45
 */

class Solution
{
public:
    int mySqrt(int x)
    {
        long long low = 0;
        long long high = x;
        long long ans = -1;

        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long sq = mid * mid;

            if (sq == x)
            {
                return (int)mid;
            }
            else if (sq > x)
            {
                high = mid - 1;
            }
            else
            {
                ans = mid;
                low = mid + 1;
            }
        }
        return (int)ans;
    }
};

int main()
{
    Solution sol;
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << "The integer square root of " << x << " is " << sol.mySqrt(x) << endl;
    return 0;
}
