#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);

    int found = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            found = 1;
        }
    }

    if (!found)
        printf("Cannot be expressed as sum of two prime numbers");

    return 0;
}

