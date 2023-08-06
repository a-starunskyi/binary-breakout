// Problem: Understand how function calls are managed by the microprocessor by writing a program that involves several nested function calls.
#include<iostream>
void firstFunc() {
	std::cout << "inside firstFunc" << std::endl;
}
void secondFunc() {
	std::cout << "inside secondFunc" << std::endl;
	firstFunc();
}
void thirdFunc() {
	std::cout << "inside thirdFunc" << std::endl;
	secondFunc();
}
int main() {
	std::cout << "inside main" << std::endl;
	thirdFunc();
	return 0;
}

