#include <iostream>
using namespace std;

int main() {
	long long n;
	cout << "Enter an integer: ";
	if (!(cin >> n)) {
		cout << "Invalid input." << endl;
		return 1;
	}
	long long t = n >= 0 ? n : -n;
	long long rev = 0;
	while (t > 0) {
		rev = rev * 10 + (t % 10);
		t /= 10;
	}
	if (n < 0) rev = -rev;
	cout << "Reversed number: " << rev << endl;
	return 0;
}
