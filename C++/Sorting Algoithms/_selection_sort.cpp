#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    // Move boundary of unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume current index is minimum
        // Find the minimum element in remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap the found minimum with the first element
        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
