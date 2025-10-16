#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    cout << "Enter dividend and divisor: ";
    cin >> dividend >> divisor;
    cout << "Quotient = " << dividend / divisor << endl;
    cout << "Remainder = " << dividend % divisor;
    return 0;
}
