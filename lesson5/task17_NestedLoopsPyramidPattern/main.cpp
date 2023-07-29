// Problem: Write a program that takes an integer n as input and prints a pyramid of stars of n rows. 
// The pyramid should be aligned to the left. 

// For example, if n = 4, the output should look like this:
// *
// **
// ***
// ****

#include<iostream>

int main() {
	int n;
	std::cout << "enter an integer: " << std::endl;
	std::cin >> n;
	for (int i = 1; i <= n; i++) { // n = 8 each time i growing by 1 and then  
		for (int o = 1; o <= i; o++) { // o joins to the conversation and checks if it less or equal by n and then std cout and then loop again but now i is 2 and o know about that and print 2 stars cuz you know bro... thats it i think last task will be really hard but to solve it i was need only 10 minutes, usually it takes 20 min and more, i have procrastination with this lesson because i wass scared about last task and now im there and im really scaried because i need to solve lesson 6 and 7 omg and lesson 7 had 22 tasks, but i need to do it sooo wish me luck... have a great day
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	// TODO: Take input from the user

	// TODO: Implement nested loops to print a pyramid of stars of n rows

	return 0;
}
