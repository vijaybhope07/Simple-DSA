// 4. Program to Multiply two Floating Point Numbers
// Usage: node multiply_two_floats.js 3.14 2.5
const argv = process.argv.slice(2);
if (argv.length < 2) {
  console.log('Usage: node multiply_two_floats.js <float1> <float2>');
  process.exit(1);
}
const x = Number(argv[0]);
const y = Number(argv[1]);
if (!isFinite(x) || !isFinite(y)) {
  console.error('Error: inputs must be numbers');
  process.exit(1);
}
console.log(`${x} * ${y} = ${x * y}`);
