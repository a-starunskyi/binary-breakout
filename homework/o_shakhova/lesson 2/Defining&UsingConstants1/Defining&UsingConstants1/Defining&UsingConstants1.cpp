// Defining and Using Constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*The program should prompt the user to input the radius of the circle.
Use the constant PI(3.14159) in your calculation.*/

#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "Let's calculate the area of a circle!" << endl;
    cout << "Formula the area of circle is A = pi r^2" << endl;

    double radius = 0.0; // Initialize valiable for radius
    const double pi = 3.14; // Using the constant of pi
    cout << " The value of constant pi is: " << pi << endl;

    cout << "Write the radius of the circle: ";
    cin >> radius;

    double result = pi * (radius * radius);
    cout << " The area of the circle is: " << result << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
