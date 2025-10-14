#include <stdio.h>
#include <math.h>

// Convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

// Convert decimal to octal
void decimalToOctal(int decimal) {
    int octal[32], i = 0;
    while (decimal > 0) {
        octal[i++] = decimal % 8;
        decimal /= 8;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
}

// Convert octal to decimal
int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    while (octal != 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, i);
        octal /= 10;
        i++;
    }
    return decimal;
}

// Convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

int main() {
    int choice;
    printf("Choose conversion:\n1. Binary to Octal\n2. Octal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter binary number: ");
        scanf("%lld", &binary);
        int decimal = binaryToDecimal(binary);
        decimalToOctal(decimal);
    } else if (choice == 2) {
        int octal;
        printf("Enter octal number: ");
        scanf("%d", &octal);
        int decimal = octalToDecimal(octal);
        decimalToBinary(decimal);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
