// Program to Check Whether a Number is Palindrome
const isPalindrome = (num) => {
    const str = num.toString();
    return str === str.split('').reverse().join('');
};

// Example usage
console.log("121 is palindrome?", isPalindrome(121));
