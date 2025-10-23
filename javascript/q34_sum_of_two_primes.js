// Program to Check if a Number can be Expressed as Sum of Two Primes
const canBeSumOfTwoPrimes = (num) => {
    const isPrime = (n) => {
        if (n <= 1) return false;
        for (let i = 2; i <= Math.sqrt(n); i++) {
            if (n % i === 0) return false;
        }
        return true;
    };

    for (let i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) return true;
    }
    return false;
};

// Example usage
console.log("34 can be expressed as sum of two primes?", canBeSumOfTwoPrimes(34));
