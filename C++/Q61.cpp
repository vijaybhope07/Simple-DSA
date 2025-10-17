// Q61.cpp
#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    Distance d1, d2, sum;
    cout << "Enter 1st distance (feet and inch): ";
    cin >> d1.feet >> d1.inch;
    cout << "Enter 2nd distance (feet and inch): ";
    cin >> d2.feet >> d2.inch;

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12) {
        sum.inch -= 12;
        sum.feet++;
    }
    cout << "Sum of distances = " << sum.feet << " feet " << sum.inch << " inches";
    return 0;
}
