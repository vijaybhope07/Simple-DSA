// Program to Check Armstrong Number
const isArmstrong = (num) => {
    const digits = num.toString().split('');
    const sum = digits.reduce((acc, d) => acc + Math.pow(Number(d), digits.length), 0);
    return sum === num;
};

// Example usage
console.log("153 is Armstrong?", isArmstrong(153));
