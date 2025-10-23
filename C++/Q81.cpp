#include <iostream>
#include <string>
using namespace std;

// Function to take input of a string
string inputString(const string& prompt) {
    string str;
    cout << prompt;
    getline(cin, str);
    return str;
}

// Function to concatenate two strings
string concatenateStrings(const string& str1, const string& str2) {
    return str1 + str2; // simple concatenation using '+' operator
}

// Function to display the result
void displayResult(const string& result) {
    cout << "\nConcatenated String: " << result << endl;
}

// Main function
int main() {
    string string1, string2, result;

    // Taking input
    cout << "=== Program to Concatenate Two Strings ===\n";
    string1 = inputString("Enter first string: ");
    string2 = inputString("Enter second string: ");

    // Concatenating
    result = concatenateStrings(string1, string2);

    // Displaying result
    displayResult(result);

    return 0;
}
