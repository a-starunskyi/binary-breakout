// UsingVariables.cpp :This file contains the "main" function. Start and end of the program.
//

/*Write a program that calculates the area of a rectangle. 
The program should prompt the user to input the length and width of the rectangle, and then print the resulting area.*/

#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;

	cout << "You can calculate the area of rectangle" << endl;

	// Declare and initialize variables for length and width
	double length = 0.0;
	double width = 0.0;

	// Promt the user to enter the length of the rectangle
	cout << "Write the length: ";
	cin >> length;
	
	// Promt the user to enter the width of the rectangle
	cout << "Write the wigth: ";
	cin >> width;

	// Calculate the area of the rectangle
	double result = length * width;
	cout << "Result: " << result << endl;

	return 0;
}	

// Run the program: CTRL+F5 or menu "Debug" > "Run without debugging"
// Debug program: F5 or "Debug" menu > "Start Debugging"


