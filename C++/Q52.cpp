// Q52.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    float *arr = new float[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    float max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    cout << "Largest number = " << max;
    delete[] arr;
    return 0;
}
