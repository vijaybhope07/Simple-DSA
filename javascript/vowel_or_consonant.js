// 11. Program to Check Whether a Character is Vowel or Consonant
// Usage: node vowel_or_consonant.js a
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node vowel_or_consonant.js <char>');
  process.exit(1);
}
const ch = argv[0][0];
if (!/[a-zA-Z]/.test(ch)) {
  console.log(`${ch} is not an alphabet character`);
  process.exit(0);
}
const vowels = 'aeiouAEIOU';
console.log(`${ch} is ${vowels.includes(ch) ? 'a Vowel' : 'a Consonant'}`);
