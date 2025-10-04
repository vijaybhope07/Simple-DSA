// Q62.cpp
#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex add(Complex n1, Complex n2) {
    Complex result;
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return result;
}

int main() {
    Complex n1, n2, sum;
    cout << "Enter first complex number (real and imaginary): ";
    cin >> n1.real >> n1.imag;
    cout << "Enter second complex number (real and imaginary): ";
    cin >> n2.real >> n2.imag;
    sum = add(n1, n2);
    cout << "Sum = " << sum.real << " + " << sum.imag << "i";
    return 0;
}
