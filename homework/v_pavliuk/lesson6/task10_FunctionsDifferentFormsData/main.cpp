// Problem: Write a function that takes a string and returns the number of vowels in the string.


#include<iostream>
#include<string>

using namespace std;

int countVowels(const string& str) {
	const string vowels = "aeiouAEIOU";
	int vowelCount = 0;

	for (char ch : str) {
		if (vowels.find(ch) != string::npos) {
			vowelCount++;
		}
	}
	return vowelCount;
}

int main() {
	string inputString;

	cout << "Enter a string: ";
	getline(cin, inputString);

	int result = countVowels(inputString);

	cout << "Number of vowels in the string: " << result << endl;

	return 0;
}