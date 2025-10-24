# Kadane’s Algorithm — Maximum Subarray Sum

"""
Problem Statement:
Given an integer array nums, find the contiguous subarray (containing at least one number) that has the largest sum, and return its sum.

Example:
Input: nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output: 6
Explanation: The contiguous subarray [4, -1, 2, 1] has the largest sum = 6.

Intuition:
When scanning through the array:
At each position, you decide whether to continue the previous subarray or start a new subarray from the current element.
You keep track of:
curr_sum → maximum subarray sum ending at current index.
max_sum → overall maximum subarray sum so far.
So at each element n,
curr_sum = max(n, curr_sum + n)
means:
Either start new subarray from n, or
Extend the existing subarray by adding n.
Then update: max_sum = max(max_sum, curr_sum)
"""
# Solution:
def maxSubArray(nums):
    max_sum = curr_sum = nums[0]  # Initialize with first element
    for n in nums[1:]:
        # Update current sum
        curr_sum = max(n, curr_sum + n)
        # Update max sum seen so far
        max_sum = max(max_sum, curr_sum)
    return max_sum

# Time Complexity: O(n)
# Space Complexity: O(1)