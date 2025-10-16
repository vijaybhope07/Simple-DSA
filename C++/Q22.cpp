#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a >= 0 ? a : -a;
	return gcd(b, a % b);
}

int main() {
	int a, b;
	cout << "Enter two integers: ";
	if (!(cin >> a >> b)) {
		cout << "Invalid input." << endl;
		return 1;
	}
	if (a == 0 || b == 0) {
		cout << "LCM is 0 when either number is 0." << endl;
		return 0;
	}
	long long l = (long long) (a / gcd(a, b)) * b;
	if (l < 0) l = -l;
	cout << "LCM(" << a << ", " << b << ") = " << l << endl;
	return 0;
}
