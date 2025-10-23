/**
 * Title: Minimize the Heights II [GeeksforGeeks]
 *
 * Problem Link: https://www.geeksforgeeks.org/minimize-the-heights-i/ (GFG)
 *
 * Description:
 * Given an array of heights and an integer K.
 * You can add or subtract K to each element once.
 * Minimize the difference between the tallest and shortest heights.
 *
 * Approach:
 * 1. Sort the array.
 * 2. Initialize min difference as max - min.
 * 3. Add K to first, subtract K from last to get small & large.
 * 4. Traverse array, skip if subtracting K goes negative.
 * 5. Update small = min(small, arr[i]-K), large = max(large, arr[i-1]+K).
 * 6. Update min difference if new range is smaller.
 *
 * -----------------------------------------------------------
 * Time Complexity: O(N log N) — sorting dominates.
 * Space Complexity: O(1) — constant extra space.
 * -----------------------------------------------------------
 */

 class Solution {
public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        if (n == 1) return 0;  // only one element, no difference

        sort(arr.begin(), arr.end());

        int minDiff = arr[n-1] - arr[0];  // initial difference
        int small = arr[0] + k;
        int large = arr[n-1] - k;

        for (int i = 1; i < n; i++) {
            if (arr[i] - k < 0) continue; // skip negative heights

            int newSmall = min(small, arr[i] - k);
            int newLarge = max(large, arr[i-1] + k);

            minDiff = min(minDiff, newLarge - newSmall);
        }

    return minDiff;}