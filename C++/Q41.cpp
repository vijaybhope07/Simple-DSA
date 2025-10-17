// Q41.cpp
#include <iostream>
#include <string>
using namespace std;

void reverseSentence(string str) {
    if (str.length() == 0)
        return;
    reverseSentence(str.substr(1));
    cout << str[0];
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    reverseSentence(s);
    return 0;
}
