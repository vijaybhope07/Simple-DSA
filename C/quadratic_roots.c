/*
Problem Statement:
Write a C program to find the roots of a quadratic equation ax^2 + bx + c = 0, where a, b, and c are real numbers and a ≠ 0.

Examples:
1. Input: a = 1, b = -3, c = 2
   Output: Roots are real and different: 2.00, 1.00
   Explanation: (x-1)(x-2) = 0, so x = 1, x = 2

2. Input: a = 1, b = 4, c = 4
   Output: Roots are real and same: -2.00
   Explanation: (x+2)^2 = 0, so x = -2

3. Input: a = 1, b = 2, c = 5
   Output: Complex Roots: -1.00 ± 2.00i
   Explanation: Discriminant is negative, so roots are complex.

Constraints:
- a, b, c are real numbers.
- a ≠ 0.

Complexity Analysis:
- Time Complexity: O(1) - The program involves a fixed number of arithmetic operations and comparisons, regardless of the input values.
- Space Complexity: O(1) - The program uses a fixed amount of memory for variables, irrespective of the input size.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2lf and %.2lf\n", root1, root2);
    }
    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same: %.2lf\n", root1);
    }
    // condition for complex roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Complex Roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}