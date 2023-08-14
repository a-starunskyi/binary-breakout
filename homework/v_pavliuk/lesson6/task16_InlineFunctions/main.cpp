// Problem: Write an inline function that squares a number.

// TODO: Write an inline function that squares a number
#include <iostream>

using namespace std;

inline int square(int num) 
{
    return num * num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int result = square(number);

    cout << "Square of " << number << " is: " << result << endl;

    return 0;
}
