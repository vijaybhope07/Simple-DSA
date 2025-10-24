// Program to Check Prime or Armstrong Using User-defined Function
const checkNumber = (num) => {
    const isPrime = (n) => {
        if (n <= 1) return false;
        for (let i = 2; i <= Math.sqrt(n); i++) {
            if (n % i === 0) return false;
        }
        return true;
    };

    const isArmstrong = (n) => {
        const digits = n.toString().split('');
        const sum = digits.reduce((acc, d) => acc + Math.pow(Number(d), digits.length), 0);
        return sum === n;
    };

    return {
        prime: isPrime(num),
        armstrong: isArmstrong(num)
    };
};

// Example usage
console.log("153 check:", checkNumber(153));
console.log("17 check:", checkNumber(17));
