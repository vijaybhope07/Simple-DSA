#include <stdio.h>

// Function to swap numbers in cyclic order
void cyclicSwap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int x = 1, y = 2, z = 3;

    printf("Before swapping:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    cyclicSwap(&x, &y, &z);

    printf("After cyclic swapping:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
