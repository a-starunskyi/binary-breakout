// Problem: Write a function that takes a string and returns the number of vowels in the string.

#include<iostream>
#include<string>
using namespace std;

int countVowels(const string& str) {
	const string vowels = "aeiouAEIOU";
	int vowelCount = 0;

	// Loop through each character in the string
	for (char ch : str) {
		// Check if the character is a vowel
		if (vowels.find(ch) != string::npos) {
			vowelCount++;
		}
	}
	return vowelCount;
}

int main() {
	string inputString;

	// Input the string from the user
	cout << "Enter a string: ";
	getline(cin, inputString);

	// Calling the function to count vowels in the string
	int result = countVowels(inputString);

	cout << "Number of vowels in the string: " << result << endl;

	return 0;
}
