// Problem: Write a program that displays the multiplication table from 1 to 10 using nested loops.

#include<iostream>
#include<string>
std::string multiplication_table() {
	std::string bench;
	for (int i = 1; i <= 10; ++i) {
		for (int o = 1; o <= 10; ++o) {
			int result = i * o;
			bench += std::to_string(i) +" * " + std::to_string(o) +" = " + std::to_string(result) +'\n';
			//so i learned that we can transform(idk how can i name that shit) integers into string using to_string and also + instead << that is soo coooool
		}
		bench += '\n';//adding a new column 
	}  
	return bench;
} 
int main() {
	std::string bench = multiplication_table();
	std::cout << bench;
	// TODO: Implement nested loops to display the multiplication table from 1 to 10
	return 0;
}
