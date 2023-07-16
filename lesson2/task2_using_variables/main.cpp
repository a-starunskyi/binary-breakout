// This program should calculate the area of a rectangle.
// It should prompt the user to input the length and width of the rectangle, 
// and then print the resulting area.

#include <iostream>
using namespace std;

int main() {
    int width, length;

    cout << "Enter lenght of Rectangle: ";
    cin >> length;

    cout << "Enter width of Rectangle: ";
    cin >> width;

    int rectangle = length * width;

    cout << "The Rectangle is: " << rectangle << endl;

    return 0;
}