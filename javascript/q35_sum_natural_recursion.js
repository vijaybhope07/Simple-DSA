// Program to Find the Sum of Natural Numbers Using Recursion
const sumNatural = (n) => {
    if (n <= 1) return n;
    return n + sumNatural(n - 1);
};

// Example usage
console.log("Sum of first 10 natural numbers:", sumNatural(10));
