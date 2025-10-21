// 14. Program to Check Leap Year
// Usage: node leap_year.js 2024
const argv = process.argv.slice(2);
if (argv.length < 1) {
  console.log('Usage: node leap_year.js <year>');
  process.exit(1);
}
const year = Number.parseInt(argv[0], 10);
if (Number.isNaN(year)) {
  console.error('Error: year must be an integer');
  process.exit(1);
}
const isLeap = (year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0);
console.log(`${year} is ${isLeap ? '' : 'not '}a leap year`);
