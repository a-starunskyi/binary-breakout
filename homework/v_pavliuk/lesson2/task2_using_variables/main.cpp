#include <iostream>

using namespace std;

int main() 
{
    int Width;
    int Length;
    int RectangleArea; 

    cout << "Write the width of the rectangle: ";
    cin >> Width;

    cout << "Write the length of the rectangle: ";
    cin >> Length;

    RectangleArea = Width * Length;
    cout << "RectangleArea: " << RectangleArea << endl;

    return 0;

}
       