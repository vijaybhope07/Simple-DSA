#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100], cleanStr[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove all non-alphabet characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            cleanStr[j++] = str[i];
        }
    }

    cleanStr[j] = '\0';  // Null-terminate the cleaned string

    printf("String with only alphabets: %s\n", cleanStr);

    return 0;
}
