#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
   // Calculate and display the length
    printf("Length of the string: %lu\n", strlen(str));

    return 0;
}