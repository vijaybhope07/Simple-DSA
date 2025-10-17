// Q51.cpp
#include <iostream>
using namespace std;

void cyclicSwap(int &a, int &b, int &c) {
    int temp = c;
    c = b;
    b = a;
    a = temp;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cyclicSwap(a, b, c);
    cout << "After cyclic swap: a=" << a << " b=" << b << " c=" << c;
    return 0;
}
