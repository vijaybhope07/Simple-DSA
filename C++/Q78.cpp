#include <iostream>
using namespace std;

// Recursive function for Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;

        // If element is found at mid
        if (arr[mid] == key)
            return mid;

        // If element is smaller than mid, search left half
        else if (key < arr[mid])
            return binarySearch(arr, low, mid - 1, key);

        // If element is larger than mid, search right half
        else
            return binarySearch(arr, mid + 1, high, key);
    }

    // If element not found
    return -1;
}

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in array." << endl;

    return 0;
}
