// 8. Program to Demonstrate the Working of Keyword long
// JavaScript doesn't have 'long' but BigInt models arbitrary integer sizes.
// Usage: node working_of_long.js 9007199254740991 9007199254740992
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node working_of_long.js <integer> [<integer2>]');
  process.exit(1);
}
try {
  const a = BigInt(argv[0]);
  console.log('BigInt value:', a.toString());
  if (argv[1]) {
    const b = BigInt(argv[1]);
    console.log(`${a} + ${b} = ${a + b}`);
  }
} catch (e) {
  console.error('Error: inputs must be integers that fit BigInt');
  process.exit(1);
}
