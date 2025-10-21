// 12. Program to Find the Largest Number Among Three Numbers
// Usage: node largest_of_three.js 3 7 5
const argv = process.argv.slice(2);
if (argv.length < 3) {
  console.log('Usage: node largest_of_three.js <a> <b> <c>');
  process.exit(1);
}
const nums = argv.slice(0,3).map(Number);
if (nums.some(n => !isFinite(n))) {
  console.error('Error: all inputs must be numbers');
  process.exit(1);
}
const largest = Math.max(...nums);
console.log(`Largest of ${nums.join(', ')} is ${largest}`);
