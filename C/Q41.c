#include <stdio.h>

//Function to reverse a sentence using recursion
void reverseSentence() {
    char c;
    scanf("%c", &c);

    //Base condition 
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}
