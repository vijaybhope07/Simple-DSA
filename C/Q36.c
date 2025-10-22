#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial not defined for negative numbers");
    else
        printf("Factorial: %d", factorial(num));

    return 0;
}
