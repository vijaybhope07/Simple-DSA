// 10. Program to Check Whether a Number is Even or Odd
// Usage: node even_odd.js 7
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node even_odd.js <integer>');
  process.exit(1);
}
const n = Number.parseInt(argv[0], 10);
if (Number.isNaN(n)) {
  console.error('Error: input must be an integer');
  process.exit(1);
}
console.log(`${n} is ${n % 2 === 0 ? 'Even' : 'Odd'}`);
