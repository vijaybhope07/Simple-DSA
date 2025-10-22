#include <stdio.h>
int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n], i;

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element is: %d\n", max);
    return 0;
}