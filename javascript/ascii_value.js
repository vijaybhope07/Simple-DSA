// 5. Program to Find ASCII Value of a Character
// Usage: node ascii_value.js a
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node ascii_value.js <char>');
  process.exit(1);
}
const ch = argv[0];
if (ch.length === 0) {
  console.error('Error: empty input');
  process.exit(1);
}
const code = ch.charCodeAt(0);
console.log(`ASCII value of '${ch[0]}' is ${code}`);
