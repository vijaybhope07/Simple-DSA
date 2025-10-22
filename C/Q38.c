#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
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

// Function to convert decimal to binary
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
    printf("Choose conversion:\n1. Binary to Decimal\n2. Decimal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter binary number: ");
        scanf("%lld", &binary);
        printf("Decimal: %d\n", binaryToDecimal(binary));
    } else if (choice == 2) {
        int decimal;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
