// This program should calculate the area of a circle.
// It should prompt the user to input the radius of the circle.
// Define and Use the constant PI (3.14159) in your calculation.

#include <iostream>
using namespace std;

int main() {
    const double Pi = 3.14159;
    double radius, area
        cout << "Input radius: ";
    cin >> radius;
    area = Pi * radius * radius;
    cout << "\nArea of the circle: ";

    return 0;
}