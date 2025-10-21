// 17. Program to Calculate the Sum of Natural Numbers
// Usage: node sum_natural.js 10
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node sum_natural.js <n>');
  process.exit(1);
}
const n = Number.parseInt(argv[0], 10);
if (Number.isNaN(n) || n < 0) {
  console.error('Error: n must be a non-negative integer');
  process.exit(1);
}
// formula: n*(n+1)/2
const sum = n * (n + 1) / 2;
console.log(`Sum of first ${n} natural numbers is ${sum}`);
