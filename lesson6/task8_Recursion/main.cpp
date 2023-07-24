// Problem: Write a recursive function that calculates the factorial of a number.

#include<iostream>
using namespace std;

int fact(int a);
// TODO: Declare and define the recursive function that calculates factorial of a number

int main() {
	// TODO: Call the recursive function

	int number = 5;

	std::cout << "Factorial of " << number << " is: " << fact(number) << std::endl;

	return 0;
}

int fact(int a)
{

	if (a == 0) {
		return 1;
	}

	return a * fact(a - 1);

}
