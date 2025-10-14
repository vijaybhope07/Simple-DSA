#include <stdio.h>
#include <math.h>

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

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    // Count digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num;
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }

    return (sum == num);
}

int main() {
    int num;
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
