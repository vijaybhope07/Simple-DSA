#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    // Start from the second element
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // Element to insert
        int j = i - 1;
        // Move larger elements one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;   // Insert key at correct position
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
