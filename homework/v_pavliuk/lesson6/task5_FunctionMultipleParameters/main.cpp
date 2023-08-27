// Problem: Write a function that takes three float values: a, b, and c. 
// The function should return the result of the quadratic formula, which is (-b ± sqrt(b²-4ac)) / (2a).

#include <iostream>
#include <cmath>

using namespace std;

void quadraticFormula(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        cout << "No real roots" << std::endl;
    }
    else {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter the values of a, b, and c: ";
    cin >> a >> b >> c;

    quadraticFormula(a, b, c);

    return 0;
}

