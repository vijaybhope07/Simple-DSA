// 9. Program to Swap Two Numbers
// Usage: node swap_two_numbers.js 5 10
const argv = process.argv.slice(2);
if (argv.length < 2) {
  console.log('Usage: node swap_two_numbers.js <a> <b>');
  process.exit(1);
}
let a = Number(argv[0]);
let b = Number(argv[1]);
if (!isFinite(a) || !isFinite(b)) {
  console.error('Error: inputs must be numbers');
  process.exit(1);
}
console.log('Before swap:', 'a =', a, ', b =', b);
// swap using destructuring
[a, b] = [b, a];
console.log('After swap:', 'a =', a, ', b =', b);
