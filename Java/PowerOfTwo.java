/*
Program to Check Whether a Number is a Power of 2.

Description:
Given an integer, determine whether it is a power of two.
A number is a power of two if it can be expressed as 2^n,
where n is a non-negative integer.

Example:
Input: 8
Output: 8 is a power of 2.

Explanation:
8 can be represented as 2^3, so it is a power of 2.

Author: Veeru Yadav
GitHub: https://github.com/VeeruYadav45
*/

import java.util.Scanner;

public class PowerOfTwo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Prompt the user to enter an integer
        System.out.print("Enter an integer: ");
        int n = sc.nextInt();

        /*
            Logic:
            - In binary, a power of two has exactly one bit set.
            - Example:
                1  -> 0001
                2  -> 0010
                4  -> 0100
                8  -> 1000
            - The expression (n & (n - 1)) clears the lowest set bit.
            - So, if (n & (n - 1)) == 0 and n > 0 → it's a power of 2.
        */
        if (n > 0 && (n & (n - 1)) == 0)
            System.out.println(n + " is a power of 2.");
        else
            System.out.println(n + " is not a power of 2.");

        sc.close();
    }
}
