// 3. Program to Add Two Integers
// Usage: node add_two_integers.js 5 7
const argv = process.argv.slice(2);
if (argv.length < 2) {
  console.log('Usage: node add_two_integers.js <int1> <int2>');
  process.exit(1);
}
const a = Number.parseInt(argv[0], 10);
const b = Number.parseInt(argv[1], 10);
if (Number.isNaN(a) || Number.isNaN(b)) {
  console.error('Error: both inputs must be integers');
  process.exit(1);
}
console.log(`${a} + ${b} = ${a + b}`);
