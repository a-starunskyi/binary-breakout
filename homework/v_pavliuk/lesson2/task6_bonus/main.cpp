#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = 3.14159;
    double Radius, Volume;

    cout << "Enter the radius of the sphere: ";
    cin >> Radius;

    Volume = (4.0 / 3.0) * PI * pow(Radius, 3);

    cout << "The volume of the sphere with radius " << Radius << " is: " << Volume << std::endl;

    return 0;
}
