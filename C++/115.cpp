// Given an integer array nums of size n, return the number with the value closest to 0 in nums. If there are multiple answers, return the smallest.

class Solution {
    public:
        int findClosestNumber(vector<int>& nums) {
             int size = nums.size();
        sort(nums.begin(),nums.end());
        for (int i = 0 ; i < size ; i++){
            if (nums[i] > 0){
                if(i > 0){
    
                    return (nums[i]> abs(nums[i-1]) ? nums[i-1] : nums[i]);
                }else{
                    return nums[0];
                }
                break;
            }else if (nums[i] == 0){
                return nums[i];
                break;
            }
    
        }
        return nums[size-1];
        }
    };