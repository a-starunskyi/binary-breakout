// Variable Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Write a program that demonstrates implicitand explicit type conversions in C++.
The program should show both the successful conversion and the loss of data due to the conversion.*/

#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	cout << "Implict type-conversion" << endl; // Implict type-conversion
	int num_1 = 5; // Assigning an int value to Num
	double num_2; // Declaring a double type variable
	num_2 = num_1; /* implicit conversion
						assigning int value to a double variable;*/
	cout << " num_1 = " << num_1 << endl;
	cout << " num_2 = " << num_2 << endl;

	int num_3;
	double num_4 = 6.25; /* implicit conversion
						assigning int value to a double variable;*/
	num_3 = num_4;

	cout << " num_3 = " << num_3 << endl;
	cout << " num_4 = " << num_4 << endl;

	cout << "Explict type-conversion" << endl;// Explict type-conversion
	int num_5 = 13; // Initialiying int variable
	double num_6; // Declaring double variable
	num_6 = (double)num_5; // Converting from int to double


	cout << " num_5 = " << num_5 << endl;
	cout << " num_6 = " << num_6 << endl;

	double num_7 = 2.75; // Initializing a double variable
	cout << " num_7 = " << num_7 << endl;

	cout << "C-style" << endl;
	int num_8 = (int)num_7; // C-style conversion from double to int
	cout << " num_8 = " << num_8 << endl;

	cout << "Function-style" << endl;
	int  num_9 = int(num_7); // Function-style conversion from double to int
	cout << " num_9 = " << num_9 << endl;

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

