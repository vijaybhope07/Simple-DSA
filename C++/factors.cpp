//Code to find all factors of a given number n
#include <iostream>
using namespace std;

// The main function is the entry point of every C++ program
int main() {
    int n; // Declare an integer variable 'n' to store the user's number

    // cout << "Enter a number: "; // You could uncomment this to add a prompt
    cin >> n; // Read the integer input from the user and store it in 'n'

    // This loop will find all the factors (divisors) of 'n'
    // It loops through all numbers 'i' starting from 1 up to (and including) 'n'
    for (int i = 1; i <= n; i++) {
        
        // Check if 'n' is perfectly divisible by 'i'
        // The modulo operator (%) returns the remainder of a division.
        // If the remainder is 0, 'i' is a factor of 'n'.
        if (n % i == 0) {
            
            // If 'i' is a factor, print it to the console, followed by a space
            cout << i << " ";
        }
    }
    
    // cout << endl; // You could add this to move to a new line after printing all factors
    
    return 0; // Indicate that the program finished successfully
}