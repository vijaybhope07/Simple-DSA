// Q54.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (char c : str) {
        if (isalpha(c)) {
            char ch = tolower(c);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        } else if (isdigit(c))
            digits++;
        else if (isspace(c))
            spaces++;
    }
    cout << "Vowels: " << vowels << "\nConsonants: " << consonants << "\nDigits: " << digits << "\nSpaces: " << spaces;
    return 0;
}
