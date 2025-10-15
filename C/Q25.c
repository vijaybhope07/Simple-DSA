#include <stdio.h>

int main() {
    int num, reversed = 0;
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed Number: %d", reversed);
    return 0;
}
