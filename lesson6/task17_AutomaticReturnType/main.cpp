// Problem: Write a function that uses automatic return type deduction to add two auto variables together.

#include<iostream>
template <typename A, typename B> // template indicated compiler that we start using template
auto add(A a, B b) { //<typename A, typename B> is template parameters
	return a + b;
}
// TODO: Write a function that uses automatic return type deduction

int main() {
	auto result = add(4, 8); 
	std::cout << "the result of adding two variables is: " << result << std::endl;
	// TODO: Call the function
	return 0;
}
