#include <iostream>
using namespace std;

// Function to find the Greatest Common Divisor (GCD)
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the Least Common Multiple (LCM)
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "The LCM of " << num1 << " and " << num2 << " is: " << findLCM(num1, num2) << endl;

    return 0;
}
