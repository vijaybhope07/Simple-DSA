// 23. Program to Display Characters from A to Z Using Loop
// Loop uses unicode values of A(65) and Z(90)
function displayAlphabet() {
    let result = '';
    for (let i = 65; i <= 90; i++) {
        // String.fromCharCode(i) converts the Unicode number back to a character
        const char = String.fromCharCode(i);
        result += char + ' ';
    }
    console.log(result);
}

displayAlphabet();

