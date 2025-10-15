#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, n = 0;
    scanf("%d", &num);
    original = num;

    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
