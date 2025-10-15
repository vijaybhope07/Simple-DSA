#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    scanf(" %c", &operator); 
    scanf("%lf %lf", &num1, &num2); 

    switch (operator) {
        case '+':
            printf("Result: %.2lf", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf", num1 / num2);
            else
                printf("Error: Division by zero");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
