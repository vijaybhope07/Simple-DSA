#include <iostream>
#include <vector>
using namespace std;

/**
 * Solution for finding Leaders in an Array.
 *
 * A leader is an element that is greater than or equal to
 * all the elements to its right in the array.
 *
 * Example:
 * Input: [16, 17, 4, 3, 5, 2]
 * Output: [17, 5, 2]
 *
 * Author: Veeru Yadav
 * GitHub: https://github.com/VeeruYadav45
 */

class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        vector<int> result;
        int n = nums.size();
        if (n == 0)
            return result;

        int maxRight = nums[n - 1];
        result.push_back(maxRight);

        // Traverse from right to left
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] >= maxRight)
            {
                maxRight = nums[i];
                result.push_back(nums[i]);
            }
        }

        // Reverse to maintain original order
        reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> leaders = sol.leaders(nums);

    cout << "Leaders in the array are: ";
    for (int x : leaders)
        cout << x << " ";
    cout << endl;

    return 0;
}
