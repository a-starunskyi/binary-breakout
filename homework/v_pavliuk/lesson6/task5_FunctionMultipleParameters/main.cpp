// Problem: Write a function that takes three float values: a, b, and c. 
// The function should return the result of the quadratic formula, which is (-b ± sqrt(b²-4ac)) / (2a).

#include <iostream>
#include <cmath>

using namespace std;

double quadraticFormula(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        cout << "No real roots." << endl;
        return 0.0;
    }

    double sqrtDiscriminant = sqrt(discriminant);
    double root1 = (-b + sqrtDiscriminant) / (2 * a);
    double root2 = (-b - sqrtDiscriminant) / (2 * a);

    return root1; // You can also return root2 or both roots depending on your needs
}

int main() {
    double a, b, c;
    cout << "Enter coefficients (a, b, c): ";
    cin >> a >> b >> c;

    double result = quadraticFormula(a, b, c);

    cout << "Root: " << result << endl;

    return 0;
}

