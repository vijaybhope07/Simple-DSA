// 18. Program to Find Factorial of a Number
// Usage: node factorial.js 5
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node factorial.js <n>');
  process.exit(1);
}
const n = Number.parseInt(argv[0], 10);
if (Number.isNaN(n) || n < 0) {
  console.error('Error: n must be a non-negative integer');
  process.exit(1);
}
let res = 1n;
for (let i = 2n; i <= BigInt(n); i++) res *= i;
console.log(`Factorial of ${n} is ${res.toString()}`);
