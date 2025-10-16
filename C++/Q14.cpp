#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Leap year conditions:
    // 1. Divisible by 400 OR
    // 2. Divisible by 4 but not divisible by 100
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}
