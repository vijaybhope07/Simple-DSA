#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a >= 0 ? a : -a;
	return gcd(b, a % b);
}

int main() {
	int a, b;
	cout << "Enter two integers: ";
	if (!(cin >> a >> b)) { cout << "Invalid input." << endl; return 1; }
	cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;
	return 0;
}
