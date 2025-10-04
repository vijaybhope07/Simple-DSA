// Q43.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    double arr[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Average = " << sum / n;
    return 0;
}
