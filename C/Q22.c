#include <stdio.h>

int main() {
    int a, b, gcd, lcm, x, y;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    lcm = (a * b) / gcd;
    printf("LCM: %d", lcm);
    return 0;
}
