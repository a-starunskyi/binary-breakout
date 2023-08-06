// Problem: Overload a function named "add". 
// It should be able to handle both addition of two integers and concatenation of two strings.

#include<iostream>
#include<string>
int add(int a, int b) {
	return a + b; // overloaded int funclion
}
std::string add(const std::string& a, const std::string& b) {
	return a + b;
}

// TODO: Overload the function "add"

int main() {
	int result1 = add(9, 9);
	std::string result2 = add("suc", "303d");

	std::cout << "res1 is: " << result1 << std::endl;
	std::cout << "res2 is; " << result2 << std::endl;
	// TODO: Call the overloaded functions
	return 0;
}
