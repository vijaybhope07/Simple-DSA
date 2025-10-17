#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0) return false;
	return true;
}

bool isArmstrong(int n) {
	if (n < 0) return false;
	int tmp = n, digits = 0;
	if (tmp == 0) digits = 1;
	while (tmp > 0) { tmp /= 10; ++digits; }
	tmp = n;
	long long sum = 0;
	while (tmp > 0) { int d = tmp % 10; sum += (long long) pow(d, digits); tmp /= 10; }
	return sum == n;
}

int main() {
	int n;
	cout << "Enter a number: ";
	if (!(cin >> n)) { cout << "Invalid input." << endl; return 1; }
	cout << n << (isPrime(n) ? " is prime." : " is not prime.") << endl;
	cout << n << (isArmstrong(n) ? " is an Armstrong number." : " is not an Armstrong number.") << endl;
	return 0;
}
