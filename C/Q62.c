#include <stdio.h>

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

// Function prototype
struct Complex addComplex(struct Complex n1, struct Complex n2);

int main() {
    struct Complex num1, num2, result;

    // Input first complex number
    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input second complex number
    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Function call
    result = addComplex(num1, num2);

    // Display result
    printf("\nSum = %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}
