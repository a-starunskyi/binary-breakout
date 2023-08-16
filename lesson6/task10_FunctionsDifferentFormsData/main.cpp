#include <iostream>
#include <string>
#include <cctype> // For character functions

using namespace std;
int countVowels(const string& str) {
    int vowelCount = 0;

    for (char c : str) {
        // Convert the character to lowercase for case-insensitive comparison
        char lowercaseChar = tolower(c);

        // Check if the character is a vowel
        if (lowercaseChar == 'a' || lowercaseChar == 'e' ||
            lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            vowelCount++;
        }
    }

    return vowelCount;
}
// TODO: Declare and define the function that counts the vowels in a string

int main()
{
	// TODO: Call the function
    string inputString;

    cout << "Enter a string: ";
    getline(std::cin, inputString);

    int vowels = countVowels(inputString);

    cout << "Number of vowels: " << vowels << endl;

    return 0;
}