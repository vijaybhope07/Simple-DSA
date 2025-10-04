// Q58.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string src, dest = "";
    cout << "Enter a string: ";
    getline(cin, src);
    for (char c : src)
        dest += c;
    cout << "Copied string: " << dest;
    return 0;
}
