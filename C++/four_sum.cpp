#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
            for(int j = i + 1; j < n; j++){
                if(j > i + 1 && nums[j] == nums[j-1]) continue;
                
                int k = j + 1;
                int l = n - 1;
                
                while(k < l){
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    
                    if(sum == target){
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        
                        while(k < l && nums[k] == nums[k-1]) k++;
                        while(k < l && nums[l] == nums[l+1]) l--;
                    } 
                    else if(sum < target) {
                        k++;
                    } 
                    else {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int n, target, num;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        nums.push_back(num);
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<vector<int>> result = sol.fourSum(nums, target);
    if (result.empty()) {
        cout << "No quadruplets found that sum up to the target." << endl;
    } else {
        cout << "Quadruplets found:" << endl;
        for (const auto& quad : result) {
            cout << "[";
            for (size_t i = 0; i < quad.size(); ++i) {
                cout << quad[i] << (i == quad.size() - 1 ? "" : ", ");
            }
            cout << "]" << endl;
        }
    }

    return 0;
}
