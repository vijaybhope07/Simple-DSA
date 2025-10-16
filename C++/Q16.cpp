#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (isalpha(c))
        cout << "Alphabet";
    else
        cout << "Not an alphabet";
    return 0;
}
