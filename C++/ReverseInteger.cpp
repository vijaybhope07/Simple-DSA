/**
 * Title: 7. Reverse Integer [LeetCode]
 *
 * Problem Link: https://leetcode.com/problems/reverse-integer/
 *
 * Description:
 * Given a 32-bit signed integer x, return the integer obtained 
 * by reversing its digits. If the reversed number overflows 
 * beyond the 32-bit range [-2^31, 2^31 - 1], return 0.
 *
 * Approach:
 * 1. Extract digits one by one using modulus and division.
 * 2. Build the reversed number iteratively.
 * 3. Check for overflow before multiplying by 10 or adding digits.
 * 4. Return the reversed number if valid; otherwise, return 0.
 *
 * Example:
 * Input: x = -123
 * Output: -321
 *
 * -----------------------------------------------------------
 * Time Complexity: O(log₁₀(N)) — each digit processed once.
 * Space Complexity: O(1) — uses constant extra space.
 * -----------------------------------------------------------
 */
class Solution {
public:
    int reverse(int x) {
        long ans = 0, i = 0;
        while (x != 0) {

            //core logic for reversing
            int digit = x % 10;
            ans = (ans * 10) + digit;
            i++;
            x = x / 10;
        }
        if (ans > INT_MAX || ans < INT_MIN) return 0;
        else return int(ans);
        }
    
};