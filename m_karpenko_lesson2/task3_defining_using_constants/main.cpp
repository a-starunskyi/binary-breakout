// This program should calculate the area of a circle.
// It should prompt the user to input the radius of the circle.
// Define and Use the constant PI (3.14159) in your calculation.

#include <iostream>
using namespace std;

int main() {

    // TODO: Define the constant PI

    const float pi = 3.14159;

    int RadiusCircle = 0;
    int AreaCircle = 0;

    // TODO: Prompt user for radius

    cout << "Enter the radius of the circle:";
    cin >> RadiusCircle;

    // TODO: Calculate area

    AreaCircle = pi * RadiusCircle * RadiusCircle;

    // TODO: Print area

    cout << "Area of circle:" << AreaCircle;

    return 0;
}