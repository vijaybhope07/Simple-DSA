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
	int count = 0;
	if (t == 0) count = 1;
	while (t > 0) {
		t /= 10;
		++count;
	}
	cout << "Number of digits in " << n << " = " << count << endl;
	return 0;
}
