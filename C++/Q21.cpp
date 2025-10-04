#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a >= 0 ? a : -a;
	return gcd(b, a % b);
}

int main() {
	int x, y;
	cout << "Enter two integers: ";
	if (!(cin >> x >> y)) {
		cout << "Invalid input." << endl;
		return 1;
	}
	cout << "GCD(" << x << ", " << y << ") = " << gcd(x, y) << endl;
	return 0;
}
