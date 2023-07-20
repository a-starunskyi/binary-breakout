// This program should calculate the area of a rectangle.
// It should prompt the user to input the length and width of the rectangle, 
// and then print the resulting area.

#include <iostream>
using namespace std;

int main() {
    // TODO: Prompt user for length and width
    cout << "This program will help you calculate the area of a rectangle" << endl;

    cout << "Enter the length of your rectandle: " ;
    int RectangleLength = 0;
    cin >> RectangleLength ;

    cout << "Enter the width of your rectangle: " ;
    int RectangleWidth = 0;
    cin >> RectangleWidth;

    // TODO: Calculate area
    int result = RectangleLength * RectangleWidth;

    // TODO: Print area
    cout << RectangleLength << "X" << RectangleWidth;
    cout << " = " << result << endl;

    return 0;
}