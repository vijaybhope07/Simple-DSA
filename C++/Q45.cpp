// Q45.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    double arr[n], sum = 0, mean, sd = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    mean = sum / n;
    for (int i = 0; i < n; i++)
        sd += pow(arr[i] - mean, 2);
    cout << "Standard Deviation = " << sqrt(sd / n);
    return 0;
}
