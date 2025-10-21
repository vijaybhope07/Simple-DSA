// 6. Program to Compute Quotient and Remainder
// Usage: node quotient_remainder.js 17 5
const argv = process.argv.slice(2);
if (argv.length < 2) {
  console.log('Usage: node quotient_remainder.js <dividend> <divisor>');
  process.exit(1);
}
const dividend = Number(argv[0]);
const divisor = Number(argv[1]);
if (!isFinite(dividend) || !isFinite(divisor) || divisor === 0) {
  console.error('Error: provide two numbers; divisor must not be 0');
  process.exit(1);
}
const quotient = Math.trunc(dividend / divisor);
const remainder = dividend % divisor;
console.log(`Quotient: ${quotient}\nRemainder: ${remainder}`);
