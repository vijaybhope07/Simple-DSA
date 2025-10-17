#include <iostream>
#include <string>
using namespace std;

long long binaryToDecimal(const string &s) {
	long long res = 0;
	for (char c : s) {
		if (c != '0' && c != '1') return -1;
		res = res * 2 + (c - '0');
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

string binaryToOctal(const string &bin) {
	long long dec = binaryToDecimal(bin);
	if (dec < 0) return string();
	return decimalToOctal(dec);
}

string decimalToBinary(long long n) {
	if (n == 0) return "0";
	bool neg = n < 0; unsigned long long t = neg ? -n : n; string s;
	while (t > 0) { s.push_back('0' + (t % 2)); t /= 2; }
	if (neg) s.push_back('-'); reverse(s.begin(), s.end()); return s;
}

int main() {
	cout << "Choose:\n1) Binary to Octal\n2) Octal to Binary\nEnter choice: ";
	int ch; if (!(cin >> ch)) { cout << "Invalid." << endl; return 1; }
	if (ch == 1) { string b; cout << "Enter binary string: "; cin >> b; string o = binaryToOctal(b); if (o.empty()) cout << "Invalid binary." << endl; else cout << "Octal: " << o << endl; }
	else if (ch == 2) { string o; cout << "Enter octal string: "; cin >> o; long long dec = 0; for (char c : o) { if (c < '0' || c > '7') { dec = -1; break; } dec = dec * 8 + (c - '0'); } if (dec < 0) cout << "Invalid octal." << endl; else cout << "Binary: " << decimalToBinary(dec) << endl; }
	else cout << "Unknown choice." << endl;
	return 0;
}
