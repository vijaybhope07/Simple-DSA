// Program to Make a Simple Calculator Using switch...case
const calculator = (a, b, operator) => {
    switch(operator) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b !== 0 ? a / b : "Cannot divide by zero";
        default: return "Invalid operator";
    }
};

// Example usage
console.log("5 + 3 =", calculator(5, 3, '+'));
