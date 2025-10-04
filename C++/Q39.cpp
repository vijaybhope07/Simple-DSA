#include <iostream>
#include <string>
using namespace std;

long long octalToDecimal(const string &s) {
	long long res = 0;
	for (char c : s) {
		if (c < '0' || c > '7') return -1;
		res = res * 8 + (c - '0');
	}
	return res;
}

string decimalToOctal(long long n) {
	if (n == 0) return "0";
	bool neg = n < 0;
	unsigned long long t = neg ? -n : n;
	string s;
	while (t > 0) { s.push_back('0' + (t % 8)); t /= 8; }
	if (neg) s.push_back('-');
	reverse(s.begin(), s.end());
	return s;
}

int main() {
	cout << "Choose:\n1) Octal to Decimal\n2) Decimal to Octal\nEnter choice: ";
	int ch; if (!(cin >> ch)) { cout << "Invalid." << endl; return 1; }
	if (ch == 1) { string s; cout << "Enter octal string: "; cin >> s; long long d = octalToDecimal(s); if (d < 0) cout << "Invalid octal." << endl; else cout << "Decimal: " << d << endl; }
	else if (ch == 2) { long long n; cout << "Enter decimal integer: "; if (!(cin >> n)) { cout << "Invalid." << endl; return 1; } cout << "Octal: " << decimalToOctal(n) << endl; }
	else cout << "Unknown choice." << endl;
	return 0;
}
