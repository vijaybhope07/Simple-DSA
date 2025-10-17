#include <stdio.h>
#include <math.h>

// Function to convert octal to decimal
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

// Function to convert decimal to octal
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

int main() {
    int choice;
    printf("Choose conversion:\n1. Octal to Decimal\n2. Decimal to Octal\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int octal;
        printf("Enter octal number: ");
        scanf("%d", &octal);
        printf("Decimal: %d\n", octalToDecimal(octal));
    } else if (choice == 2) {
        int decimal;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        decimalToOctal(decimal);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
