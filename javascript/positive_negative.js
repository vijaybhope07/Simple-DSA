// 15. Program to Check Whether a Number is Positive or Negative
// Usage: node positive_negative.js -5
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node positive_negative.js <number>');
  process.exit(1);
}
const n = Number(argv[0]);
if (!isFinite(n)) {
  console.error('Error: input must be a number');
  process.exit(1);
}
if (n > 0) console.log(`${n} is Positive`);
else if (n < 0) console.log(`${n} is Negative`);
else console.log('0 is Zero');
