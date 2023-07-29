// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.

#include<iostream>


int main() {
	
	const int MAX_INPUT = 100;
	int maxInput2[MAX_INPUT];
	int num, count = 0;
	while (count < MAX_INPUT) {
		std::cout << "enter a number (negative to qiut): ";
		std::cin >> num;
		if (num < 0) {
			break;
		}
		maxInput2[count] = num; //
		count++;
	
	}
	std::cout << "Numbers entered: ";
	for (int i = 0; i < count; i++) {
		std::cout << maxInput2[i];
	}
	std::cout << "bye" << std::endl;
	// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered or 100 inputs are taken
   


	return 0;
}
