#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double base;
	int exp;
	cout << "Enter base and integer exponent: ";
	if (!(cin >> base >> exp)) {
		cout << "Invalid input." << endl;
		return 1;
	}
	double result = pow(base, exp);
	cout << base << "^" << exp << " = " << result << endl;
	return 0;
}
