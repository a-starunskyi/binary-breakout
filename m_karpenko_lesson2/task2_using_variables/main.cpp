// This program should calculate the area of a rectangle.
// It should prompt the user to input the length and width of the rectangle, 
// and then print the resulting area.

#include <iostream>
using namespace std;

int main() {

    int RectangleArea = 0;
    int Width = 0;
    int Lenght = 0;

    // TODO: Prompt user for length and width

    cout << "Enter the width of the rectangle:";
    cin >> Width;

    cout << endl;

    cout << "Enter the lenght of the rectangle:";
    cin >> Lenght;

    // TODO: Calculate area

    RectangleArea = Width * Lenght;

    // TODO: Print area

    cout << "Rectangle Area:" << RectangleArea << endl;

    return 0;
}