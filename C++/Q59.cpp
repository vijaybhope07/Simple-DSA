// Q59.cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    sort(str.begin(), str.end());
    cout << "Sorted string: " << str;
    return 0;
}
