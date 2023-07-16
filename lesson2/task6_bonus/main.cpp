// This program should use both variables and constants to calculate the volume of a sphere.
// It should prompt the user to input the radius of the sphere.
// The volume of a sphere can be calculated using the formula 4/3 * PI * r^3.

#include <iostream>
using namespace std;

int main() {
    constexpr double Pi() { 22.0 / 7 };
    int rad;
    float sphereVol;
    // TODO: Prompt user for radius
    cout << "Input radius of a sphere = ";
    cin >> rad;
    // TODO: Calculate volume
    sphereVol = (4 * Pi() * rad * rad * rad) / 3;
    // TODO: Print volume
    cout << "Volume of your sphere = " << sphereVol;

    return 0;
}