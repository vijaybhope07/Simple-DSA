#include <iostream>
#include <vector>
#include <algorithm>  // for min() and max()
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int lp = 0, rp = height.size() - 1;

        while (lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currwater = w * ht;
            maxwater = max(maxwater, currwater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxwater;
    }
};

int main() {
    Solution sol;
    vector<int> height;
    int n;

    cout << "Enter number of lines: ";
    cin >> n;

    cout << "Enter heights of the lines: ";
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        height.push_back(h);
    }

    int result = sol.maxArea(height);
    cout << "Maximum water area: " << result << endl;

    return 0;
}
