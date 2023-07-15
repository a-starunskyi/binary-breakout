#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const float pi = 3.14159;

    int CircleRadius;
    int CircleArea;

    cout << "Enter the radius of the circle: ";
    cin >> CircleRadius;

    CircleArea = pi * pow(CircleRadius, 2);

    cout << "Area of Circle: " << CircleArea << endl;

    return 0;
}