#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    cout << "Quotient = " << quotient << ", Remainder = " << remainder << endl;
    return 0;
}
