#include <stdio.h>

// Recursive function to calculate sum
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main() {
    int num;
    scanf("%d", &num);
    printf("Sum: %d", sum(num));
    return 0;
}
