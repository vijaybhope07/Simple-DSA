/*
Problem Statement:
Write a C program to find the largest among three numbers entered by the user.

Input:
Three numbers, say 'num1', 'num2', and 'num3'.

Output:
The largest among the three input numbers.

Examples:
1. Input: num1 = 10, num2 = 25, num3 = 15
   Output: The largest number is 25

2. Input: num1 = 7, num2 = 7, num3 = 7
   Output: The largest number is 7

3. Input: num1 = -5, num2 = -1, num3 = -10
   Output: The largest number is -1

Constraints:
- The numbers can be integers or floating-point numbers.

Complexity Analysis:
Time Complexity: O(1) - The program performs a fixed number of comparisons regardless of the input values.
Space Complexity: O(1) - The program uses a constant amount of extra space to store variables.
*/

#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is %.2lf\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %.2lf\n", num2);
    } else {
        printf("The largest number is %.2lf\n", num3);
    }

    return 0;
}