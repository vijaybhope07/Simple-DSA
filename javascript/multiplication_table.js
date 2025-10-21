// 19. Program to Generate Multiplication Table
// Usage: node multiplication_table.js 5 [upto]
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node multiplication_table.js <n> [upto]');
  process.exit(1);
}
const n = Number(argv[0]);
const upto = argv[1] ? Number(argv[1]) : 10;
if (!isFinite(n) || !Number.isInteger(upto) || upto < 1) {
  console.error('Error: invalid inputs');
  process.exit(1);
}
for (let i = 1; i <= upto; i++) {
  console.log(`${n} x ${i} = ${n * i}`);
}
