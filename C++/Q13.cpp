#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different: " << root1 << ", " << root2;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and same: " << root1;
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-discriminant) / (2 * a);
        cout << "Complex Roots: " << real << " ± " << imag << "i";
    }
    return 0;
}
