//Program to Find the Frequency of Characters in a String
#include <iostream>       
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s; // Declare a string variable to hold the user's input
    
    // cout << "Enter a string: "; // You could add this line to prompt the user
    cin >> s; // Read the string from the user

    // Create a map to store the frequency of each character.
    // The 'key' is the character (char), and the 'value' is its count (int).
    unordered_map<char, int> freq;

    // Loop through each character 'c' in the input string 's'
    for (char c : s) {
        // Increment the count for that character in the map.
        // If the character isn't in the map yet, it's automatically added with a count of 0, then incremented to 1.
        freq[c]++;
    }

    // Loop through each pair 'p' in the frequency map
    for (auto p : freq) {
        // 'p.first' is the key (the character)
        // 'p.second' is the value (the count)
        cout << p.first << " -> " << p.second << endl;
    }
    
    return 0; // Indicate the program finished successfully
}