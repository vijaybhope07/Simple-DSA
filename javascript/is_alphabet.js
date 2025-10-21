// 16. Program to Check Whether a Character is an Alphabet or not
// Usage: node is_alphabet.js a
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node is_alphabet.js <char>');
  process.exit(1);
}
const ch = argv[0][0];
if (/[a-zA-Z]/.test(ch)) console.log(`${ch} is an alphabet`);
else console.log(`${ch} is not an alphabet`);
