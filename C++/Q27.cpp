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
	long long rev = 0, orig = t;
	while (t > 0) {
		rev = rev * 10 + (t % 10);
		t /= 10;
	}
	bool isPal = (orig == rev);
	if (n < 0) isPal = false; // negative numbers not considered palindrome here
	cout << n << (isPal ? " is a palindrome." : " is not a palindrome.") << endl;
	return 0;
}
