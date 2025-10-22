#include <iostream>
using namespace std;

// Function for quotient and remainder
void computeQuotientAndRemainder(int dividend, int divisor) {
    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
        return;
    }

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;
}

// Main function
int main() {
    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    // Call the function
    computeQuotientAndRemainder(dividend, divisor);

    return 0;
}