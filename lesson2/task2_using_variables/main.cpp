// This program should calculate the area of a rectangle.
// It should prompt the user to input the length and width of the rectangle, 
// and then print the resulting area.

#include <iostream>
using namespace std;

int main() {
    // TODO: Prompt user for length and width
    cout << "This program will help you calculate the area of a rectangle" << endl;

    cout << "Enter the length of your rectandle: " ;
    int rectangleLength = 0;
    cin >> rectangleLength ;

    cout << "Enter the width of your rectangle: " ;
    int rectangleWidth = 0;
    cin >> rectangleWidth;

    // TODO: Calculate area
    int result = rectangleLength * rectangleWidth;

    // TODO: Print area
    cout << rectangleLength << "X" << rectangleWidth;
    cout << " = " << result << endl;

    return 0;
}