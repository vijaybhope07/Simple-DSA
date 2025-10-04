#include <iostream>
using namespace std;

int main() {
	for (char c = 'A'; c <= 'Z'; ++c) {
		cout << c;
		if (c != 'Z') cout << ' ';
	}
	cout << endl;
	return 0;
}
