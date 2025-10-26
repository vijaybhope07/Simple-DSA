// Q24: Program to Count Number of Digits in an Integer
// Category: Loops, Functions & Recursion (17–42)

function countDigits(number) {
  // Handle negative numbers
  number = Math.abs(number);

  // Special case for 0
  if (number === 0) return 1;

  let count = 0;

  // Count digits using loop
  while (number > 0) {
    number = Math.floor(number / 10);
    count++;
  }

  return count;
}

// Example usage:
const num = 987654;
console.log(`The number of digits in ${num} is: ${countDigits(num)}`);
