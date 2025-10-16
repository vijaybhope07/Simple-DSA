#include <stdio.h>

// Recursive function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("GCD: %d", gcd(num1, num2));
    return 0;
}
