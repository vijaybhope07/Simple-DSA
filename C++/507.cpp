// You are given an integer n. Determine if it is a perfect number.
// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding itself.
// Return true if n is a perfect number, otherwise return false.

// Example 1:
// Input: n = 28
// Output: true
// Explanation: The positive divisors of 28 are 1, 2, 4, 7, 14. Sum = 1+2+4+7+14 = 28. Hence, 28 is a perfect number.

// Example 2:
// Input: n = 10
// Output: false
// Explanation: The positive divisors of 10 are 1, 2, 5. Sum = 8 ≠ 10. Hence, 10 is not a perfect number.

#include <iostream>
using namespace std;
class Solution {
public:
    bool checkPerfectNumber(int n) {
        if(n<=1) return false;
        int sum=1; 
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                sum +=i;
                if(i!=n/i) sum += n/i; 
            }
        }
        return sum==n;
    }
};

int main() {
    Solution sol;
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    if(sol.checkPerfectNumber(n))
        cout << n << " is a Perfect Number";
    else
        cout << n << " is not a Perfect Number";
    return 0;
}
