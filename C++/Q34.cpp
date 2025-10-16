#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0) return n == 2;
	for (int i = 3; i * i <= n; i += 2)
		if (n % i == 0) return false;
	return true;
}

int main() {
	int n;
	cout << "Enter a number: ";
	if (!(cin >> n) || n <= 1) { cout << "Invalid input." << endl; return 1; }
	bool found = false;
	for (int i = 2; i <= n/2; ++i) {
		if (isPrime(i) && isPrime(n - i)) { cout << n << " = " << i << " + " << (n - i) << endl; found = true; break; }
	}
	if (!found) cout << "Cannot be expressed as sum of two primes." << endl;
	return 0;
}
