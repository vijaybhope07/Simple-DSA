#include <iostream>
using namespace std;

int main() {
	double a, b;
	char op;
	cout << "Enter expression (e.g. 2 + 3): ";
	if (!(cin >> a >> op >> b)) {
		cout << "Invalid input." << endl;
		return 1;
	}
	double res;
	switch (op) {
		case '+': res = a + b; break;
		case '-': res = a - b; break;
		case '*': res = a * b; break;
		case '/':
			if (b == 0) { cout << "Division by zero." << endl; return 1; }
			res = a / b; break;
		case '%':
			if (static_cast<long long>(b) == 0) { cout << "Division by zero." << endl; return 1; }
			res = static_cast<long long>(a) % static_cast<long long>(b); break;
		default:
			cout << "Unsupported operator." << endl; return 1;
	}
	cout << "Result: " << res << endl;
	return 0;
}
