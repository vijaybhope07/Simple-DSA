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

string decimalToBinary(long long n) {
	if (n == 0) return "0";
	bool neg = n < 0;
	unsigned long long t = neg ? -n : n;
	string s;
	while (t > 0) { s.push_back('0' + (t % 2)); t /= 2; }
	if (neg) s.push_back('-');
	reverse(s.begin(), s.end());
	return s;
}

int main() {
	cout << "Choose:\n1) Binary to Decimal\n2) Decimal to Binary\nEnter choice: ";
	int choice;
	if (!(cin >> choice)) { cout << "Invalid input." << endl; return 1; }
	if (choice == 1) {
		string bin; cout << "Enter binary string: "; cin >> bin;
		long long dec = binaryToDecimal(bin);
		if (dec < 0) cout << "Invalid binary." << endl; else cout << "Decimal: " << dec << endl;
	} else if (choice == 2) {
		long long n; cout << "Enter decimal integer: "; if (!(cin >> n)) { cout << "Invalid input." << endl; return 1; }
		cout << "Binary: " << decimalToBinary(n) << endl;
	} else cout << "Unknown choice." << endl;
	return 0;
}
