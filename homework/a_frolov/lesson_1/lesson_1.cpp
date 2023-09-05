#include <iostream>
// Including the library with input/output classes & variables via preprocessor

int main()
// Main body of the program
{
	// Using the standart collection of functions for cout to display text
	std::cout << "Name: Artur\n";
	std::cout << "Name: Frolov\n";
	std::cout << "Date of birth: 2001\n";
	// Creating a variable for my calculated age
	int age = 2023 - 2001;
	// Using the print formatted function to display the variable in the string
	printf("Age: %i", age);
    // Return program success code
	return 0;

}
