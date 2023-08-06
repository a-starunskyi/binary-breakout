// Problem: Write a function that takes a string and returns the number of vowels in the string.

#include<iostream>
#include <string>
int countVowels(const std::string& str) {
	int count = 0;
	for (char letter : str) {
		char lowCase = tolower(letter);
		if (lowCase == 'a' || lowCase == 'i' || lowCase == 'e' || lowCase == 'o' || lowCase == 'u') {
			count++;
		}
	}
	return count;
}
// TODO: Declare and define the function that counts the vowels in a string

int main() {
	std::string input;
	std::cout << "Enter a string: ";
	std::getline(std::cin, input); // read the entire line of text that the user enters and store it in input

	int vovelCount = countVowels(input);
	std::cout << "the number of vovels in the entire string is: " << vovelCount << std::endl;
	// TODO: Call the function
	return 0;
}
