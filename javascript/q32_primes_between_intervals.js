// Program to Display Prime Numbers Between Intervals
const primesBetween = (start, end) => {
    const primes = [];
    for (let i = start; i <= end; i++) {
        if (i > 1) {
            let isPrime = true;
            for (let j = 2; j <= Math.sqrt(i); j++) {
                if (i % j === 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) primes.push(i);
        }
    }
    return primes;
};

// Example usage
console.log("Primes between 10 and 20:", primesBetween(10, 20));
