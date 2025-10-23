#include <iostream>
#include <vector>
#include <algorithm> // For sort() and lower_bound()
#include <cmath>     // For abs()

using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 0) {
        return 0; // Handle empty input
    }

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // 1. Sort the array. This is the O(N log N) step.
    sort(nums.begin(), nums.end());

    // 2. Find the first element >= 0. This is an O(log N) step.
    // We get the *index* by subtracting the 'begin' iterator.
    int index = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();

    // 3. Compare the candidates based on the index.
    
    if (index == 0) {
        // Case 1: All numbers are >= 0. Closest is the first element.
        cout << nums[0];
    } else if (index == n) {
        // Case 2: All numbers are < 0. Closest is the last element.
        cout << nums[n - 1];
    } else {
        // Case 3: We have a mix.
        // Get the two candidates.
        int pos_candidate = nums[index];
        int neg_candidate = nums[index - 1];

        // Compare their distances from 0.
        // We use <= to favor the negative number in a tie (e.g., -2 and 2).
        if (abs(neg_candidate) <= pos_candidate) {
            cout << neg_candidate;
        } else {
            cout << pos_candidate;
        }
    }

    return 0;
}