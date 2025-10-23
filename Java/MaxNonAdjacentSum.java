// Java program to find the maximum sum of non-adjacent elements in an array

public class MaxNonAdjacentSum {

    // Function to calculate maximum sum with no adjacent elements
    public static int findMaxSum(int[] nums) {
        int n = nums.length;

        // If array is empty, sum is 0
        if (n == 0)
            return 0;

        // If only one element, that's the max sum
        if (n == 1)
            return nums[0];

        // dp[i] will store the maximum sum till index i
        int[] dp = new int[n];

        // Base cases
        dp[0] = nums[0];
        dp[1] = Math.max(nums[0], nums[1]);

        // Fill dp array using recurrence:
        // For every index i, we have two choices:
        // 1. Include nums[i] → we add nums[i] + dp[i-2]
        // 2. Exclude nums[i] → we just take dp[i-1]
        for (int i = 2; i < n; i++) {
            dp[i] = Math.max(nums[i] + dp[i - 2], dp[i - 1]);
        }

        // The last element of dp will have the final answer
        return dp[n - 1];
    }

    // Main function to test the code
    public static void main(String[] args) {
        int[] nums1 = {3, 2, 7, 10};
        int[] nums2 = {3, 2, 5, 10, 7};

        System.out.println("Maximum sum for nums1: " + findMaxSum(nums1)); // Output: 13
        System.out.println("Maximum sum for nums2: " + findMaxSum(nums2)); // Output: 15
    }
}
