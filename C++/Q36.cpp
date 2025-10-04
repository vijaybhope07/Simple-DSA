#include <iostream>
using namespace std;

unsigned long long fact(unsigned int n) {
	if (n == 0) return 1;
	return n * fact(n - 1);
}

int main() {
	int n;
	cout << "Enter a non-negative integer: ";
	if (!(cin >> n) || n < 0) { cout << "Invalid input." << endl; return 1; }
	cout << "Factorial of " << n << " = " << fact((unsigned)n) << endl;
	return 0;
}
