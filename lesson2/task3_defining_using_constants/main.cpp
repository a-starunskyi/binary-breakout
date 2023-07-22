// This program should calculate the area of a circle.
// It should prompt the user to input the radius of the circle.
// Define and Use the constant PI (3.14159) in your calculation.

#include <iostream>
using namespace std;

int main() {
    // TODO: Define the constant PI
    cout << "This program help you calculate the area of a cirle " << endl;
    const float pi = 3.14159f;

    // TODO: Prompt user for radius
    cout << "Enter a radius: ";
    int circleRadius = 0;
    cin >> circleRadius;

    // TODO: Calculate area
    float result = pi * circleRadius * circleRadius;

    // TODO: Print area
    cout << circleRadius << "x" << pi << "x" << circleRadius;
    cout << "=" << result << endl;

    return 0;
}