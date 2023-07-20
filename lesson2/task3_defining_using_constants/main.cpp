// This program should calculate the area of a circle.
// It should prompt the user to input the radius of the circle.
// Define and Use the constant PI (3.14159) in your calculation.

#include <iostream>
using namespace std;

int main() {
    // TODO: Define the constant PI
    cout << "This program help you calculate the area of a cirle " << endl;
    const float pi = 3.14159;

    // TODO: Prompt user for radius
    cout << "Enter a radius: ";
    int CircleRadius = 0;
    cin >> CircleRadius;

    // TODO: Calculate area
    float result = CircleRadius * pi * CircleRadius;

    // TODO: Print area
    cout << CircleRadius << "x" << pi << "x" << CircleRadius;
    cout << "=" << result << endl;

    return 0;
}