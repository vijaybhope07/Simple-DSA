/*
Problem Statement:
Write a C program to check whether a given year is a leap year or not.

Examples:
1. Input: 2000
   Output: 2000 is a leap year.
   Explanation: 2000 is divisible by 400.

2. Input: 2004
   Output: 2004 is a leap year.
   Explanation: 2004 is divisible by 4 but not by 100.

3. Input: 1900
   Output: 1900 is not a leap year.
   Explanation: 1900 is divisible by 100 but not by 400.

4. Input: 2007
   Output: 2007 is not a leap year.
   Explanation: 2007 is not divisible by 4.

Constraints:
- The year will be a positive integer.

Complexity Analysis:
- Time Complexity: O(1) - The program involves a fixed number of arithmetic operations and comparisons, regardless of the input year.
- Space Complexity: O(1) - The program uses a fixed amount of memory for variables, irrespective of the input size.
*/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}