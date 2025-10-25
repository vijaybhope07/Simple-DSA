#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;  // store the original number for display

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Display result
    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
