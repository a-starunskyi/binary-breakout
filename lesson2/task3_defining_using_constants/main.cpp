// This program should calculate the area of a circle.
// It should prompt the user to input the radius of the circle.
// Define and Use the constant PI (3.14159) in your calculation.

#include <iostream>
using namespace std;

const float pi = 22.0 / 7;

float calculateCircleArea(float radius) {
    return pi * radius * radius;
}

int main(float radius) {
    cout << "Enter area of circle: ";
    cin >> radius;

    float area = calculateCircleArea(radius);

    cout << "The area of the circle is: " << area << endl;

    

    return 0;
}
// i dont know how it works but it works 
// i dont understand how i write this 
// and i think that something wrong
