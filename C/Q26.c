#include <stdio.h>

int main() {
    int base, exponent, result = 1;
    scanf("%d %d", &base, &exponent);

    for (int i = 1; i <= exponent; i++)
        result *= base;

    printf("Result: %d", result);
    return 0;
}
