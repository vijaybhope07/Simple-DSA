#include <stdio.h>

int main() {
    int num, reversed = 0, original, digit;
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
