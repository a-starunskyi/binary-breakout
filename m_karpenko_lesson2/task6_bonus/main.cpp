// This program should use both variables and constants to calculate the volume of a sphere.
// It should prompt the user to input the radius of the sphere.
// The volume of a sphere can be calculated using the formula 4/3 * PI * r^3.

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    const float pi = 3.14159;
    float RadiusSphere = 0;
    float CalcVolumeSphere = 0;
    float cub = 0;
    float n = 0;
    // TODO: Prompt user for radius

    cout << "Enter radius of sphere" << endl;
    cin >> RadiusSphere;

    // TODO: Calculate volume
    
    cub = pow(RadiusSphere, 3);
    CalcVolumeSphere = (float)4 / (float)3 * pi * cub;

    // TODO: Print volume

    cout << "Volume of sphere = "<< CalcVolumeSphere << endl;

    return 0;
}