#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots: %f %f", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Root: %f", r1);
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        printf("Roots: %f + %fi and %f - %fi", real, imag, real, imag);
    }
    return 0;
}
