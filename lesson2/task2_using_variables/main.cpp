// This program should calculate the area of a rectangle.
// It should prompt the user to input the length and width of the rectangle, 
// and then print the resulting area.

#include <iostream>
using namespace std;

int main() {
    // TODO: Prompt user for length and width
    int length, width, area;
    cout << "Area of a rectangle\n";
    cout << "\nEnter the length of the rectangle: ";
    cin >> length;
    cout << "\nEnter the width of the rectangle:";
    cin >> width;
    area = length * width;
    cout << "\nArea of the rectangle: " << area;


    // TODO: Print area

    return 0;
}