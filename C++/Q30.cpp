#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long n;
	cout << "Enter a positive integer: ";
	if (!(cin >> n) || n <= 0) {
		cout << "Invalid input. Enter a positive integer." << endl;
		return 1;
	}
	cout << "Factors of " << n << " are: ";
	bool first = true;
	for (long long i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			if (!first) cout << ' ';
			cout << i;
			first = false;
			if (i != n / i) cout << ' ' << (n / i);
		}
	}
	cout << endl;
	return 0;
}
