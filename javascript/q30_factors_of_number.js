// Program to Display Factors of a Number
const factors = (num) => {
    const result = [];
    for (let i = 1; i <= num; i++) {
        if (num % i === 0) result.push(i);
    }
    return result;
};

// Example usage
console.log("Factors of 12:", factors(12));
