// 20. Program to Display Fibonacci Sequence
// Usage: node fibonacci_sequence.js 10
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node fibonacci_sequence.js <count>');
  process.exit(1);
}
const count = Number.parseInt(argv[0], 10);
if (Number.isNaN(count) || count < 1) {
  console.error('Error: count must be a positive integer');
  process.exit(1);
}
let a = 0n, b = 1n;
for (let i = 0; i < count; i++) {
  console.log(a.toString());
  [a, b] = [b, a + b];
}
