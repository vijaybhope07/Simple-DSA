// Longest Palindromic Subsequence
// Problem: Find the length of the longest subsequence of a string that is also a palindrome
// Time Complexity: O(n^2)
// Space Complexity: O(n^2)

public class LongestPalindromicSubsequence {

    // Function to find the length of the longest palindromic subsequence
    public int longestPalindromeSubseq(String s) {
        int n = s.length();

        // dp[i][j] stores length of longest palindromic subsequence in substring s[i...j]
        int[][] dp = new int[n][n];

        // Every single character is a palindrome of length 1
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }

        // Build the dp table for substrings of increasing lengths
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;

                // If characters match, they can be part of palindrome
                if (s.charAt(i) == s.charAt(j)) {
                    dp[i][j] = 2 + dp[i + 1][j - 1];
                } else {
                    // Otherwise, exclude one char and take the max result
                    dp[i][j] = Math.max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }

        // Final result is the longest palindrome subsequence length for the full string
        return dp[0][n - 1];
    }

    // Main method for testing
    public static void main(String[] args) {
        LongestPalindromicSubsequence obj = new LongestPalindromicSubsequence();
        String s = "bbbab";
        int result = obj.longestPalindromeSubseq(s);
        System.out.println("Length of Longest Palindromic Subsequence: " + result);
    }
}
