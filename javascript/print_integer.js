// 2. Program to Print an Integer (Entered by the User)
// Usage: node print_integer.js 42
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node print_integer.js <integer>');
  process.exit(1);
}
const n = Number.parseInt(argv[0], 10);
if (Number.isNaN(n)) {
  console.error('Error: provided value is not an integer');
  process.exit(1);
}
console.log('You entered:', n);
