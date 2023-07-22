#include <iostream>
#include <string>
using namespace std;

int main() {
    // TODO:
    // 1. Declare two strings: "Hello" and "World!"
    string firstValue ("Hello");
    string secondValue("World");
    // 2. Concatenate these two strings with a space in between
    string word = firstValue + " " + secondValue;
    // 3. Print the result
    cout << word << endl;
    return 0;
}