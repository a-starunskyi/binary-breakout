// UsingVariables.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*Write a program that calculates the area of a rectangle. 
The program should prompt the user to input the length and width of the rectangle, and then print the resulting area.*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "You can calculate the area of rectangle" << endl;

	double length, width;

	cout << "Write the length: ";
	cin >> length;
	
	cout << "Write the wigth: ";
	cin >> width;

	double result = length * width;
	cout << "Result: " << result << endl;

	return 0;
}	

// Run the program: CTRL+F5 or menu "Debug" > "Run without debugging"
// Debug program: F5 or "Debug" menu > "Start Debugging"


