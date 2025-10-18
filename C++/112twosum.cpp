#include <iostream>
#include <vector>
#include <map>
using namespace std;

/**
 * Solution for the "Two Sum" problem.
 *
 * Given an array of integers nums and an integer target,
 * return the indices of the two numbers such that they add up to the target.
 *
 * Example:
 * Input: nums = [2, 7, 11, 15], target = 9
 * Output: [0, 1]  // because nums[0] + nums[1] = 2 + 7 = 9
 *
 * Author: Veeru Yadav
 * GitHub: https://github.com/VeeruYadav45
 */

class Solution
{
public:
    /**
     * Finds two indices such that nums[i] + nums[j] == target.
     * Returns an empty vector if no valid pair exists.
     */
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int r = 0;
        map<int, int> v;

        // Store each value with its latest index
        for (int i = 0; i < nums.size(); i++)
            v[nums[i]] = i;

        // For each element, check if the complement exists
        for (int j = 0; j < nums.size(); j++)
        {
            int c = target - nums[j];
            if (v.count(c) && v[c] != j)
                return {j, v[c]};
        }

        // No valid pair found
        return {};
    }
};

int main()
{
    Solution sol;
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices of the elements that add up to " << target << " are: "
             << result[0] << " and " << result[1] << endl;
        cout << "Elements are: " << nums[result[0]] << " + " << nums[result[1]]
             << " = " << target << endl;
    }
    else
    {
        cout << "No two elements add up to " << target << "." << endl;
    }

    return 0;
}
