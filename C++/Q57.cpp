// Q57.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cout << "Enter first string: ";
    getline(cin, a);
    cout << "Enter second string: ";
    getline(cin, b);
    cout << "Concatenated string: " << a + b;
    return 0;
}
