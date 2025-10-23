```cpp
/**
 * Title: Move All Zeroes to End [GeeksforGeeks]
 *
 * Problem Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751
 *
 * Description:
 * Given an array of integers, move all zeroes to the end
 * while preserving the relative order of non-zero elements.
 *
 * Approach:
 * - Use a pointer tempIndex to place the next non-zero value.
 * - First pass: copy every non-zero element to arr[tempIndex++].
 * - Second pass: fill remaining positions with 0.
 *
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int tempIndex = 0;
        if (n < 2) return;

        // Move non-zero elements forward
        for (int i = 0; i < n; ++i) {
            if (arr[i] != 0) {
                arr[tempIndex] = arr[i];
                tempIndex++;
            }
        }

        // Fill remaining with zeros
        for (int i = tempIndex; i < n; ++i) {
            arr[i] = 0;
        }
    }
};

/* ----- Example usage -----
int main() {
    Solution sol;
    vector<int> arr = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    sol.pushZerosToEnd(arr);
    for (int x : arr) cout << x << " ";
    // Output: 1 9 8 4 2 7 6 9 0 0 0 0 0
    return 0;
}
*/
