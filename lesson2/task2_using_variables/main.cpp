// This program should calculate the area of a rectangle.
// It should prompt the user to input the length and width of the rectangle, 
// and then print the resulting area.

#include <iostream>
using namespace std;

int main() {
    // TODO: Prompt user for length and width
    int length = 0;
    int width = 0;
    int rectangleArea = 0;

    // TODO: Calculate area
    cout << "Enter the length of rectangle:";
    cin >> length;

    cout << "Enter the width of rectangel:";
    cin >> width;

    int result = length * width;

    // TODO: Print area
    cout << length << "X" << width;
    cout << "=" << result << endl;

    return 0;
}