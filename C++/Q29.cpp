#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n;
	cout << "Enter a number: ";
	if (!(cin >> n)) {
		cout << "Invalid input." << endl;
		return 1;
	}
	long long t = n >= 0 ? n : -n;
	int digits = 0;
	long long tmp = t;
	if (t == 0) digits = 1;
	while (tmp > 0) { tmp /= 10; ++digits; }

	long long sum = 0;
	tmp = t;
	while (tmp > 0) {
		int d = tmp % 10;
		sum += (long long) pow(d, digits);
		tmp /= 10;
	}
	bool isArm = (sum == t);
	cout << n << (isArm ? " is an Armstrong number." : " is not an Armstrong number.") << endl;
	return 0;
}
