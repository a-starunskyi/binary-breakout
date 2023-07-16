// This program should calculate the area of a circle.
// It should prompt the user to input the radius of the circle.
// Define and Use the constant PI (3.14159) in your calculation.

#include <iostream>
using namespace std;

int main() {
    // TODO: Define the constant PI
    const float pi = 3.14159;

    // TODO: Prompt user for radius
    int circleRadius = 0;
    int circleArea = 0;
    
    cout << "Enter the circle radius:";
    cin >> circleRadius;

    cout << "Enter the circle area:";
    cin >> circleArea;

    // TODO: Calculate area
    circleArea = pi * circleRadius * circleRadius;

    // TODO: Print area
    cout << "Circle area = " << circleArea;
    
    return 0;
}