
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number of terms: ";
	if (!(cin >> n) || n <= 0) {
		cout << "Please enter a positive integer." << endl;
		return 1;
	}

	cout << "Fibonacci sequence: ";
	long long a = 0, b = 1;
	for (int i = 1; i <= n; ++i) {
		cout << a;
		if (i != n) cout << " ";
		long long next = a + b;
		a = b;
		b = next;
	}
	cout << endl;
	return 0;
}
// Q20.cpp
