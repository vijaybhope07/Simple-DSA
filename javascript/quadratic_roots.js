// 13. Program to Find all Roots of a Quadratic Equation
// Usage: node quadratic_roots.js a b c
// Solves ax^2 + bx + c = 0
const argv = process.argv.slice(2);
if (argv.length < 3) {
  console.log('Usage: node quadratic_roots.js <a> <b> <c>');
  process.exit(1);
}
const a = Number(argv[0]);
const b = Number(argv[1]);
const c = Number(argv[2]);
if (!isFinite(a) || !isFinite(b) || !isFinite(c) || a === 0) {
  console.error('Error: provide numeric a, b, c with a != 0');
  process.exit(1);
}
const discriminant = b*b - 4*a*c;
if (discriminant > 0) {
  const r1 = (-b + Math.sqrt(discriminant)) / (2*a);
  const r2 = (-b - Math.sqrt(discriminant)) / (2*a);
  console.log('Roots are real and distinct:');
  console.log(r1, r2);
} else if (discriminant === 0) {
  const r = -b / (2*a);
  console.log('Roots are real and equal:');
  console.log(r);
} else {
  const real = -b / (2*a);
  const imag = Math.sqrt(-discriminant) / (2*a);
  console.log('Roots are complex:');
  console.log(`${real} + ${imag}i`, `${real} - ${imag}i`);
}
